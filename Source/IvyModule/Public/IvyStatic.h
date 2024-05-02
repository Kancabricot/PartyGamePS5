// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include <Components/SplineComponent.h>

#include "Components/SplineMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "Selection.h"


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


	UFUNCTION()
	void OnObjectSelected(UObject* Object);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Clean les Spline Mesh tiges + spline points
	UFUNCTION(CallInEditor, Category = "Ivy Function")
	virtual void ClearSplinePoints();

	UFUNCTION(CallInEditor, Category = "Ivy Function")
	virtual void CreateLeaves();
	
	UPROPERTY(BlueprintReadOnly)
	TArray<USplineMeshComponent*> AllStems;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(Tooltip="Prefer distance between leaves"))
	bool autoLeaves = true;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(Tooltip="Generate Leaves when you click outside the Blueprint"))
	bool generateAutoLeaves = true;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(EditCondition="!autoLeaves",EditConditionHides,Tooltip="Number of leaves on the stem"))
	int nbLeaves;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(EditCondition="autoLeaves",EditConditionHides,Tooltip="Distance bitween next leaves"))
	float leavesDistances;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings")
	TArray<UStaticMesh*> leaves;
	
	UPROPERTY(BlueprintReadOnly, Category = "Spline")
	USplineComponent* SplineComponent;
		
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Spline")
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Spline")
	TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Spline")
	class UMaterialInterface* DefaultMaterial;

private :
	bool AllLeavesTemp = false;
	
	
	/*
	UPROPERTY(VisibleAnywhere, Category = "Spline")
	bool allowScalling;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	bool MustBeFullLengthMeshes;

	UPROPERTY(VisibleAnywhere, Category = "Spline")
	float SectionLength;

	UPROPERTY(VisibleAnywhere, Category = "Default")
	int LoopIndex;*/




};
