// Copyright Epic Games, Inc. All Rights Reserved.

#include "IvyModule.h"
#include "Modules/ModuleManager.h"
#include "IvyStatic.h"
#include "PropertyEditor/Public/PropertyEditorModule.h"
#include "IvyModulDetails.h"

IMPLEMENT_MODULE( FIvyModuleModule, IvyModule );

void FIvyModuleModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("IvyModule Startup!"));

	FPropertyEditorModule& PropertyEdModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyEdModule.RegisterCustomClassLayout(
		AIvyStatic::StaticClass()->GetFName(),
		FOnGetDetailCustomizationInstance::CreateStatic(&FIvyModulDetails::MakeInstance)
		);
}

void FIvyModuleModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("IvyModule Shutdown!"));
}

