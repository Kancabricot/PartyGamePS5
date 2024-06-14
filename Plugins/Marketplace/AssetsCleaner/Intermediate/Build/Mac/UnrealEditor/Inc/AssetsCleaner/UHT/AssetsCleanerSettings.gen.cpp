// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetsCleaner/Public/AssetsCleanerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetsCleanerSettings() {}
// Cross Module References
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerSettings();
	ASSETSCLEANER_API UClass* Z_Construct_UClass_UAssetsCleanerSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetsCleaner();
// End Cross Module References
	void UAssetsCleanerSettings::StaticRegisterNativesUAssetsCleanerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetsCleanerSettings);
	UClass* Z_Construct_UClass_UAssetsCleanerSettings_NoRegister()
	{
		return UAssetsCleanerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetsCleanerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLevels_MetaData[];
#endif
		static void NewProp_bShowLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteEmptyFolders_MetaData[];
#endif
		static void NewProp_bDeleteEmptyFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteEmptyFolders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetsCleanerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetsCleaner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings class for Assets Cleaner plugin\n */" },
		{ "IncludePath", "AssetsCleanerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetsCleanerSettings.h" },
		{ "ToolTip", "Settings class for Assets Cleaner plugin" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels_MetaData[] = {
		{ "Comment", "//Should we include levels as well (knowing it's not possible to reliably check for references)\n" },
		{ "ModuleRelativePath", "Public/AssetsCleanerSettings.h" },
		{ "ToolTip", "Should we include levels as well (knowing it's not possible to reliably check for references)" },
	};
#endif
	void Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels_SetBit(void* Obj)
	{
		((UAssetsCleanerSettings*)Obj)->bShowLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels = { "bShowLevels", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetsCleanerSettings), &Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders_MetaData[] = {
		{ "Comment", "//Also delete folders if they're empty when deleting assets\n" },
		{ "ModuleRelativePath", "Public/AssetsCleanerSettings.h" },
		{ "ToolTip", "Also delete folders if they're empty when deleting assets" },
	};
#endif
	void Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders_SetBit(void* Obj)
	{
		((UAssetsCleanerSettings*)Obj)->bDeleteEmptyFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders = { "bDeleteEmptyFolders", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetsCleanerSettings), &Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetsCleanerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bShowLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetsCleanerSettings_Statics::NewProp_bDeleteEmptyFolders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetsCleanerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetsCleanerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetsCleanerSettings_Statics::ClassParams = {
		&UAssetsCleanerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetsCleanerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetsCleanerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetsCleanerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetsCleanerSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetsCleanerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetsCleanerSettings.OuterSingleton, Z_Construct_UClass_UAssetsCleanerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetsCleanerSettings.OuterSingleton;
	}
	template<> ASSETSCLEANER_API UClass* StaticClass<UAssetsCleanerSettings>()
	{
		return UAssetsCleanerSettings::StaticClass();
	}
	UAssetsCleanerSettings::UAssetsCleanerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetsCleanerSettings);
	UAssetsCleanerSettings::~UAssetsCleanerSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetsCleanerSettings, UAssetsCleanerSettings::StaticClass, TEXT("UAssetsCleanerSettings"), &Z_Registration_Info_UClass_UAssetsCleanerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetsCleanerSettings), 4075552781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerSettings_h_63647266(TEXT("/Script/AssetsCleaner"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_AssetsCleaner_Source_AssetsCleaner_Public_AssetsCleanerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
