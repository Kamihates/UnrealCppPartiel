// Fill out your copyright notice in the Description page of Project Settings.

#include "Block.h"
#include "Components/BoxComponent.h"

// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	canFall = false;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = mesh;

	collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	collider->InitBoxExtent(FVector(10, 10, 5));
	collider->OnComponentBeginOverlap.AddDynamic(this, &ABlock::OnOverLapBegin);

	collider->SetupAttachment(mesh);

	blueMat = CreateDefaultSubobject<UMaterial>(TEXT("blue mat"));
	redMat	= CreateDefaultSubobject<UMaterial>(TEXT("red mat"));

}

void ABlock::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && OtherComp != nullptr)
	{
		if (!canFall)
		{
			canFall = true;
			mesh->SetMaterial(0, redMat);
		}
		else
		{
			mesh->SetSimulatePhysics(true);
		}
	}
}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	mesh->SetMaterial(0, blueMat);
}

