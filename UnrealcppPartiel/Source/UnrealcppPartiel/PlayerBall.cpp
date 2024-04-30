// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBall.h"

// Sets default values
APlayerBall::APlayerBall()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	Mesh->SetSimulatePhysics(true);
	Speed = 75 * 1000;
}

// Called when the game starts or when spawned
void APlayerBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerBall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerBall::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerBall::MoveRight);
}

void APlayerBall::MoveForward(float Value)
{
	FVector force = FVector(1, 0, 0) * Speed * Value;
	Mesh->AddForce(force);
}

void APlayerBall::MoveRight(float Value)
{
	FVector force = FVector(0, 1, 0) * Speed * Value;
	Mesh->AddForce(force);
}

