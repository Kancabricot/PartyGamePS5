// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "HearthDefenderInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerStatusChanged, bool, IsConnected);

UCLASS()
class TEMPLATELOCALPLAYER_API UHearthDefenderInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category = "Gamepad info")
	FControllerStatusChanged ControllerStatusChanged;

	virtual void Init() override;
	void ControllerStatusIsChanged(bool Connected, int32 PlatformID, int32 UserId);
};
