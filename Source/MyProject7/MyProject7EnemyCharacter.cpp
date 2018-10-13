// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject7EnemyCharacter.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"

// Sets default values
AMyProject7EnemyCharacter::AMyProject7EnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	//RootComponent = MeshComp;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AMyProject7EnemyCharacter::OnPawnSeen);

	//PawnSensingComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly)
	//PawnSensingComp->SetCollisionEnabled();

}

// Called when the game starts or when spawned
void AMyProject7EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	MoveToNextPatrolPoint();
}

void AMyProject7EnemyCharacter::OnPawnSeen(APawn * SeenPawn)
{
	if (SeenPawn == NULL)
	{
		return;
	}
		//CurrentPatrolPoint = SeenPawn->GetActorLocation();
		//UNavigationSystem::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
		DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 5, FColor::Yellow, false, 2.0f);
		AController* Controller = GetController();
		if (Controller)
		{
			//InVision = 1;
			UNavigationSystem::SimpleMoveToLocation(Controller, SeenPawn->GetActorLocation());
		}

}

void AMyProject7EnemyCharacter::MoveToNextPatrolPoint()
{		
	/*if (InVision==0)
	{
		if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == SecondPatrolPoint)
			CurrentPatrolPoint = FirstPatrolPoint;
		else
			CurrentPatrolPoint = SecondPatrolPoint;
		UNavigationSystem::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
	}*/
}

// Called every frame
void AMyProject7EnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (CurrentPatrolPoint)
	//	MoveToNextPatrolPoint();
}


