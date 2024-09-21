// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.

#include "GASMagicianEditor.h"

#define LOCTEXT_NAMESPACE "FGASMagicianEditorModule"

void FGASMagicianEditorModule::StartupModule()
{
#if WITH_EDITOR 
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	AbilitySetActions = MakeShared<FGSMAbilitySetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AbilitySetActions.ToSharedRef());

	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	AbilityTagRelationshipActions = MakeShared<FGSMAbilityTagRelationshipActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AbilityTagRelationshipActions.ToSharedRef());
	
	FModuleManager::LoadModulePtr< IModuleInterface >("GASMagician");

	if (GIsEditor)
	{
		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		// register AI category so that AI assets can register to it
		GASAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("GASMagician")), LOCTEXT("GASMagicianCategory", " GASMagician"));
	}
#endif // WITH_EDITOR 
}

void FGASMagicianEditorModule::ShutdownModule()
{
#if WITH_EDITOR 
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AbilitySetActions.ToSharedRef());
	
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AbilityTagRelationshipActions.ToSharedRef());

#endif // WITH_EDITOR 
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGASMagicianEditorModule, GASMagicianEditor)