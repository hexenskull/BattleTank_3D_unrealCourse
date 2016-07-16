// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controller not posessing a tank!"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controller posessing %s"), *(ControlledTank->GetName()))
	}

	UE_LOG(LogTemp, Warning, TEXT("AI controller begin play"))
}


