// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Tank.h"

// Getter Methods
ATank* ATankPlayerController::GetControlledTank() const { return Cast<ATank>(GetPawn()); }

