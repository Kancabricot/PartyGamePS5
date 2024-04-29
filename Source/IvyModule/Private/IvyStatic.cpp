// Fill out your copyright notice in the Description page of Project Settings.


#include"IvyStatic.h"
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
	/*if(!Mesh)
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
	}*/
	AllStems.Reset();
	
	for(int SplineCount = 0; SplineCount<(SplineComponent -> GetNumberOfSplinePoints() - 1); SplineCount++)
	{
		USplineMeshComponent* SplineMeshComponent = NewObject<USplineMeshComponent>(this,USplineMeshComponent::StaticClass());

		SplineMeshComponent-> SetStaticMesh(Mesh);
		SplineMeshComponent->SetMobility(EComponentMobility::Movable);
		SplineMeshComponent->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		SplineMeshComponent-> RegisterComponentWithWorld(GetWorld());
		SplineMeshComponent->AttachToComponent(SplineComponent,FAttachmentTransformRules::KeepRelativeTransform);

		
		const FVector StartPoint = SplineComponent-> GetLocationAtSplinePoint(SplineCount,ESplineCoordinateSpace::Local);
		const FVector StartTangent =SplineComponent-> GetTangentAtSplinePoint(SplineCount, ESplineCoordinateSpace::Local);
		const FVector EndPoint = SplineComponent-> GetLocationAtSplinePoint(SplineCount + 1, ESplineCoordinateSpace::Local);
		const FVector EndTangent =SplineComponent-> GetTangentAtSplinePoint(SplineCount + 1, ESplineCoordinateSpace::Local);

		SplineMeshComponent-> SetStartAndEnd(StartPoint, StartTangent, EndPoint,EndTangent,true);

		SplineMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		SplineMeshComponent->SetForwardAxis(ForwardAxis);

		SplineMeshComponent->SetMaterial(0,DefaultMaterial);
		
		AllStems.Add(SplineMeshComponent);
		
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
	
	if(AllStems.Num()>0)
	{
		USplineMeshComponent* ActualStem = AllStems.Last();
		
		if(ActualStem)
		{
			ActualStem->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
			ActualStem->DestroyComponent();

			AllStems.Remove(ActualStem);
		}
	}
}



