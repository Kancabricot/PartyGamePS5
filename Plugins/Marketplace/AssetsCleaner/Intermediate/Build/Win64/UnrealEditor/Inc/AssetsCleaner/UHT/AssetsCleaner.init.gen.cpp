// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetsCleaner_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetsCleaner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetsCleaner()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetsCleaner.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetsCleaner",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x0D34352D,
				0x6F48DE4D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetsCleaner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetsCleaner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetsCleaner(Z_Construct_UPackage__Script_AssetsCleaner, TEXT("/Script/AssetsCleaner"), Z_Registration_Info_UPackage__Script_AssetsCleaner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0D34352D, 0x6F48DE4D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
