// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject7EnemyPawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMyProject7EnemyPawn::AMyProject7EnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	//MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	//MeshComp->SetCollisionResponseToChannel()
	MeshComp->SetCanEverAffectNavigation(false);
	RootComponent = MeshComp;

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
	PawnMovement->UpdatedComponent = MeshComp;
	PawnMovement->MaxSpeed = 500.0f;
		//.AddDynamic(this, AMyProject7EnemyPawn::PlayEffects());

}

// Called when the game starts or when spawned
void AMyProject7EnemyPawn::BeginPlay()
{
	Super::BeginPlay();	
	CreateMovement();
}

// Called every frame
void AMyProject7EnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyProject7EnemyPawn::CreateMovement()
{
	AController* Controller = GetController();
	AActor* PlayerPawn = UGameplayStatics::GetPlayerPawn(this,0);
	//DrawDebugSphere(GetWorld(),PlayerPawn->GetActorLocation(), 32.0f, 5, FColor::Yellow, false, 2.0f);
	UNavigationSystem::SimpleMoveToActor(Controller, PlayerPawn);
}

//void AMyProject7EnemyPawn::PlayEffects()
//{
//	UGameplayStatics::SpawnEmitterAtLocation(this,PickupFX,GetActorLocation());
//}
//
//void AMyProject7EnemyPawn::NotifyActorBeginOverlap(AActor * OtherActor)
//{
//	Super::NotifyActorBeginOverlap(OtherActor);
//	PlayEffects();
//}


