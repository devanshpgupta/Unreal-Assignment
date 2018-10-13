// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProject7Pawn.h"
#include "MyProject7Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName AMyProject7Pawn::MoveForwardBinding("MoveForward");
const FName AMyProject7Pawn::MoveRightBinding("MoveRight");
const FName AMyProject7Pawn::FireForwardBinding("FireForward");
const FName AMyProject7Pawn::FireRightBinding("FireRight");
const FName AMyProject7Pawn::FireBackwardBinding("FireBackward");
const FName AMyProject7Pawn::FireLeftBinding("FireLeft");

AMyProject7Pawn::AMyProject7Pawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 2000.f;
	CameraBoom->RelativeRotation = FRotator(-60.f, 0.f, 0.f);
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	
	// Camera does not rotate relative to arm
	
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
}

void AMyProject7Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	////Setting up game key Bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
	PlayerInputComponent->BindAxis(FireBackwardBinding);
	PlayerInputComponent->BindAxis(FireLeftBinding);

}

void AMyProject7Pawn::Tick(float DeltaSeconds)
{

	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const float FireBackwardValue = GetInputAxisValue(FireBackwardBinding);
	const float FireLeftValue = GetInputAxisValue(FireLeftBinding);

	FVector FireDirection1;
	FVector FireDirection2;
	FVector FireDirection3;
	FVector FireDirection4;


	/*FVector const FireDirection = FVector(ForwardValue, RightValue, 0.f);
	FireShot(this->GetActorLocation());*/
	if (ForwardValue > 0)
	{
		FireDirection1 = FVector(FireForwardValue, 0.f, 0.f);
		FireShot(FireDirection1);
		InitialDirection = 1000;
	}
	else if (ForwardValue < 0)
	{
		FireDirection2 = FVector(FireBackwardValue, 0.f, 0.f);
		FireShot(FireDirection2);
		InitialDirection = 100;
	}
	else if (RightValue > 0)
	{
		FireDirection3 = FVector(0.f, FireRightValue, 0.f);
		FireShot(FireDirection3);
		InitialDirection = 10;
	}
	else if (RightValue < 0)
	{
		FireDirection4 = FVector(0.f, FireLeftValue, 0.f);
		FireShot(FireDirection4);
		InitialDirection = 1;
	}
	KeepingDirection(InitialDirection);

}
void AMyProject7Pawn::KeepingDirection(int InitialDirection)
{
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const float FireBackwardValue = GetInputAxisValue(FireBackwardBinding);
	const float FireLeftValue = GetInputAxisValue(FireLeftBinding);
	if (InitialDirection / 1000 == 1)
	{
		FireShot(FVector(FireForwardValue, 0.f, 0.f));
	}
	else if (InitialDirection / 100 == 1)
	{
		FireShot(FVector(FireBackwardValue, 0.f, 0.f));
	}
	else if (InitialDirection / 10 == 1)
	{
		FireShot(FVector(0.f, FireRightValue, 0.f));
	}
	else if (InitialDirection / 1 == 1)
	{
		FireShot(FVector(0.f, FireLeftValue, 0.f));
	}
}

void AMyProject7Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != NULL)
			{
				// spawn the projectile
				World->SpawnActor<AMyProject7Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AMyProject7Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AMyProject7Pawn::ShotTimerExpired()
{
	bCanFire = true;
}


