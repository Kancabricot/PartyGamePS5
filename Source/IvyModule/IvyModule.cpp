// Copyright Epic Games, Inc. All Rights Reserved.

#include "IvyModule.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE( FIvyModuleModule, IvyModule );

void FIvyModuleModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("IvyModule Startup!"));
}

void FIvyModuleModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("IvyModule Shutdown!"));
}

