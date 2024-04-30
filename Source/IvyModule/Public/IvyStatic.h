// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include <Components/SplineComponent.h>

#include "Components/SplineMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"


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
	
	UPROPERTY(VisibleAnywhere, Category = "IvySettings")
	TArray<USplineMeshComponent*> AllStems;

	UPROPERTY(VisibleAnywhere, Category = "LeavesSettings")
	TArray<UStaticMeshComponent*> AllLeaves;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(Tooltip="Prefer distance between leaves"))
	bool autoLeaves;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(EditCondition="autoLeaves",EditConditionHides))
	int nbLeaves;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "LeavesSettings",meta=(EditCondition="!autoLeaves",EditConditionHides))
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
//Clean les Spline Mesh tiges + spline points
	UFUNCTION(CallInEditor, Category = "IvySettings")
	virtual void ClearSplinePoints();

	UFUNCTION(CallInEditor, Category = "IvySettings")
	virtual void CreateLeaves();
private :
	void clearLeaves();
	
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
