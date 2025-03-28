// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASMagicianEditor : ModuleRules
{
	public GASMagicianEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"AssetTools",
                "Core",
                "CoreUObject",
                "Engine", 
                "InputCore", 
                "HeadMountedDisplay",
                "UMG", 
                "Slate", 
                "SlateCore",
                "UnrealEd",
				"GASMagician",
				"GameplayAbilities",
				"AssetDefinition"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject"
				
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
