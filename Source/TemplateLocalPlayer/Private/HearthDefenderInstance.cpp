// Fill out your copyright notice in the Description page of Project Settings.


#include "HearthDefenderInstance.h"
#include "Misc/CoreDelegates.h"

void UHearthDefenderInstance::Init() {
	Super::Init();


	FCoreDelegates::OnControllerConnectionChange/*.AddUObject(this, &UHearthDefenderInstance::ControllerStatusIsChanged)*/;
}

void UHearthDefenderInstance::ControllerStatusIsChanged(bool Connected, int32 PlatformID, int32 UserId)
{
	ControllerStatusChanged.Broadcast(Connected);
}
