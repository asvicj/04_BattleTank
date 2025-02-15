// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))//, hidecategories = "Collision")
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward movement, +1 is max upward movement
	void Elevate(float RelativeSpeed);	

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 10.0f;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegress = 40.0f;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegress = 0.0f;
};
