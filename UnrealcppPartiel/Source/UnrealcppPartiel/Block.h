// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS()
class UNREALCPPPARTIEL_API ABlock : public AActor
{
	GENERATED_BODY()

public:	

	ABlock();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* collider;

	UFUNCTION()
	void OnOverLapBegin(
		class UPrimitiveComponent* OverlappedComp,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	UPROPERTY(EditAnywhere)
		class UMaterial* blueMat;

	UPROPERTY(EditAnywhere)
		class UMaterial* redMat;

	bool canFall;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
