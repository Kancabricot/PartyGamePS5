// Copyright Epic Games, Inc. All Rights Reserved.

#include "DetailsModule.h"

IMPLEMENT_MODULE( FDefaultModuleImpl, DetailsModule );
#if WITH_EDITOR

#include "Editor/PropertyEditor/Public/PropertyEditorModule.h"
#include "DetailsActorDetailCustomization.h"

#endif
void FDetailsModule::StartupModule()
{
	UE_LOG(LogTemp, Warning,TEXT("Details Module started!"))

	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout("DetailsActor", FOnGetDetailCustomizationInstance::CreateStatic(&FDetailsActorDetailCustomization::MakeInstance));
	
}

void FDetailsModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning,TEXT("Details Module shut down!"))
}

