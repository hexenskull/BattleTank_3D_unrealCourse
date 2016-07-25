// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = (Collision))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20; //sensible default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesElevationDegrees = 60.0; //sensible default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinDegreesElevationDegrees = 0.0; // sensible
	
};
