// Fill out your copyright notice in the Description page of Project Settings.


#include "DetailsActor.h"

// Sets default values
ADetailsActor::ADetailsActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADetailsActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADetailsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

