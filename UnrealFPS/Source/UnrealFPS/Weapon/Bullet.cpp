// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "../UnrealFPS.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	SetRootComponent(Collision);

	// Projectile Movement Initialize
	Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet Movement"));
	Movement->InitialSpeed = 1800.f;
	Movement->MaxSpeed = 2000.f;
	Movement->ProjectileGravityScale = 0.0f;


	// Mesh initialize
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	Mesh->SetStaticMesh(SphereAsset.Object);

	Mesh->SetCollisionProfileName("NoCollision");

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABullet::HandleOverLap);

	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle, this, &ABullet::K2_DestroyActor, 3.0f);
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::HandleOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//not working
	UE_LOG(Game, Error, TEXT("destroy"));
	this->Destroy();
}



