// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class UNREALFPS_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BluePrintReadOnly)
	class USphereComponent* Collision;

	UPROPERTY(VisibleAnyWhere, BluePrintReadOnly)
	class UProjectileMovementComponent* Movement;

	UPROPERTY(VisibleAnyWhere, BluePrintReadOnly)
	class UStaticMeshComponent* Mesh;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	void HandleOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
