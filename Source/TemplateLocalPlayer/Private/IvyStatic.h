// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include <Components/SplineComponent.h>
#include "Math/UnrealMathUtility.h"


#include "GameFramework/Actor.h"
#include "IvyStatic.generated.h"


UCLASS()
class AIvyStatic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIvyStatic();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	USplineComponent* SplineComponent;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	bool allowScalling;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	bool MustBeFullLengthMeshes;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	float SectionLength;

	UPROPERTY(VisibleAnywhere, Category = "Default")
	int LoopIndex;


	UFUNCTION(BlueprintCallable)
	virtual void ClearSplinePoints();

};
