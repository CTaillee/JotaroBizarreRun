// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class TPS_SWITCH1_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SpawnObstacle(FString BPpath, FVector position, FRotator rotation);
};