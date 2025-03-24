using UnrealBuildTool;

public class GASMagicianGameProjectGeneration : ModuleRules
{
	public GASMagicianGameProjectGeneration(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"GameplayAbilities",
				"ModelViewViewModel"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Analytics",
				"ApplicationCore",
				"AppFramework",
				"AssetTools",
				"ClassViewer",
				"Core",
				"CoreUObject",
				"Engine",
				"EngineSettings",
				"InputCore",
				"Projects",
				"RenderCore",
				"Slate",
				"SlateCore",
				"EditorWidgets",
				"ToolWidgets",
				"SourceControl",
				"TargetPlatform",
				"EditorFramework",
				"EditorSubsystem",
				"UnrealEd",
				"DesktopPlatform",
				"LauncherPlatform",
				"AddContentDialog",
				"AudioMixer",
				"AudioMixerCore",
				"ContentBrowserData",
				"GASMagician",
				"GameplayAbilitiesEditor",
				"GameProjectGeneration",
				"ContentBrowser",
				"Projects",
				"InputCore",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"EditorStyle",
				"MainFrame",
				"AppFramework",
				"DesktopPlatform",
				"EngineSettings",
				"Engine",
				"AssetTools",
				"BlueprintGraph",
				"WorkspaceMenuStructure",
				"PropertyEditor",
				"HTTP",
				"AssetRegistry",
				"NavigationSystem",
				"GameplayTags",
				"GameplayTagsEditor",
				"UATHelper"
			}
			
			
		);
		
		if(Target.bWithLiveCoding)
		{
			PrivateIncludePathModuleNames.Add("LiveCoding");
		}

	}
}
