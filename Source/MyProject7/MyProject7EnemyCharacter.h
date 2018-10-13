// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyProject7EnemyCharacter.generated.h"

class UPawnSensingComponent;

UCLASS()
class MYPROJECT7_API AMyProject7EnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyProject7EnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UPROPERTY(EditInstanceOnly, Category = "AI")
	AActor* FirstPatrolPoint;

	UPROPERTY(EditInstanceOnly, Category = "AI")
	AActor* SecondPatrolPoint;

	UPROPERTY(EditInstanceOnly, Category = "AI")
	AActor* ThirdPatrolPoint;

	UPROPERTY(EditInstanceOnly, Category = "AI")
	AActor* FourthPatrolPoint;

	AActor* CurrentPatrolPoint;

	void MoveToNextPatrolPoint();

	//UPROPERTY(VisibleAnywhere, BlueprintsReadOnly)

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
