// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move barrel right amount this frame
	// Given max elevation speed, and frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel Elevate called at %f"), DegreesPerSecond);
}
