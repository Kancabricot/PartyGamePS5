// Fill out your copyright notice in the Description page of Project Settings.


#include "IvyStatic.h"

#include "Components/SplineMeshComponent.h"

// Sets default values
AIvyStatic::AIvyStatic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent = CreateDefaultSubobject<USplineComponent> ("Spline");

	if (SplineComponent)
	{
		SetRootComponent(SplineComponent);
	}

}

void AIvyStatic::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if(!Mesh)
	{
		return;
	}
	if(allowScalling)
	{
		SectionLength = GetActorScale3D().X * 100;
	}
	if(MustBeFullLengthMeshes)
	{
		for(int i = 0; i < 1-(FMath::TruncateToHalfIfClose(SplineComponent -> GetSplineLength()/SectionLength)); i++)
		{
			LoopIndex = i;
		}
	}else
	{
		for (int i = 0; i < FMath::TruncateToHalfIfClose(SplineComponent->GetSplineLength() / SectionLength); i++)
		{
			LoopIndex = i;
		}
	}
	USplineMeshComponent* SplineMeshComponent = NewObject<USplineMeshComponent>(this, USplineMeshComponent::StaticClass());

	SplineMeshComponent->SetStaticMesh(Mesh);
	SplineMeshComponent->SetMobility(EComponentMobility::Movable);
}

// Called when the game starts or when spawned
void AIvyStatic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIvyStatic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIvyStatic::ClearSplinePoints()
{
	
}

