// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"


// Sets default values
AGamePlayer::AGamePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	//Camera Setting
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;

	//mesh Setting
	GetMesh()->SetRelativeLocation(FVector(0.f,0.f,-90.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f,-90.f,0.f));

	//ChildActorComponent

}

// Called when the game starts or when spawned
void AGamePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGamePlayer::Forward(float Input)
{
	FVector direction = GetActorForwardVector();
	AddMovementInput(direction, Input);
}

void AGamePlayer::Right(float Input)
{
	FVector direction = GetActorRightVector();
	AddMovementInput(direction, Input);
}

void AGamePlayer::Turn(float Input)
{
	AddControllerYawInput(Input);
}

void AGamePlayer::LookUp(float Input)
{
	AddControllerPitchInput(Input);
}

// Called every frame
void AGamePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGamePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Movement
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("Forward", this, &AGamePlayer::Forward); 
	PlayerInputComponent->BindAxis("Right", this, &AGamePlayer::Right);

	//Camera
	PlayerInputComponent->BindAxis("Turn", this, &AGamePlayer::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AGamePlayer::LookUp);

}

