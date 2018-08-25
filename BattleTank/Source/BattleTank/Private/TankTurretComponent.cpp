// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankTurretComponent.h"
#include "Engine/World.h"

void UTankTurretComponent::Rotate(float RelativeSpeed)
{
	// Move barrel right amount this frame
	// Given max Rotation speed, and frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
}


