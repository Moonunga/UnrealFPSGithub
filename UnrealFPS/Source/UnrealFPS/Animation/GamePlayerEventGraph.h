// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GamePlayerEventGraph.generated.h"

/**
 * 
 */
UCLASS()
class UNREALFPS_API UGamePlayerEventGraph : public UAnimInstance
{
	GENERATED_BODY()
public:
	void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float Speed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Direction;

	UAnimInstance* animinstance = this->animinstance;
 
};
