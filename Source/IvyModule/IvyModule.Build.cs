// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IvyModule : ModuleRules
{
	public IvyModule(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.Add("IvyModule/Public");
		PublicIncludePaths.Add("IvyModule/Private");

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"IvyModule" 
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]{"DetailCustomizations","PropertyEditor","EditorStyle"});
			PublicDependencyModuleNames.AddRange(new string[]{"UnrealEd"});
		}
	}
}
