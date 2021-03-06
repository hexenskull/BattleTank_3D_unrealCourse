// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h" 
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //Must be the last include

/**
 *  
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override; // overriding virtual method of AActor class

	virtual void Tick( float DeltaSeconds ) override;

	//Start moving the barrel so that a shot would it where
	//the crosshair intersects the world
	void AimTowardsCrosshair();

	//Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	//two X and Y crosshair locations
	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;
	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333;
	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
