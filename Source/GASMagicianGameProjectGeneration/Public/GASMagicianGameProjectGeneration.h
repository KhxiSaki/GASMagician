// Copyright KhaiSaki. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeCategories.h"
#include "AddToProjectConfig.h"
#include "PropertyEditorModule.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class IAssetTypeActions;

class FGASMagicianGameProjectGenerationModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	

	static void OpenMVVMAddToProjectDialog(const FAddToProjectConfig& Config = FAddToProjectConfig());
	EAssetTypeCategories::Type GetAssetTypeCategory() const;
	
	static FGASMagicianGameProjectGenerationModule& Get() {
		return FModuleManager::LoadModuleChecked<FGASMagicianGameProjectGenerationModule>("GASMagicianGameProjectGeneration");
	}
	
	static bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("GASMagicianGameProjectGeneration");
	}

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	EAssetTypeCategories::Type AssetTypeCategory = EAssetTypeCategories::None;
	FDelegateHandle MapChangedHandle;
	/** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
	TArray<TSharedPtr<IAssetTypeActions>> RegisteredAssetTypeActions;
	/** All registered customization. Cached here so that we can unregister during shutdown */
    TArray<FName> RegisteredClassCustomizations;

	void RegisterMenus();
	void RegisterComboMenus() const;
	static void RegisterCommands();
	static void UnregisterCommands();
	static void InitializeStyles();
	static void ShutdownStyle();
	void UnregisterDetailsCustomization(FPropertyEditorModule& PropertyEditorModule);

	template <typename TDetailsCustomization>
	void RegisterDetailsCustomization(const FName ClassToCustomize, FPropertyEditorModule& PropertyModule)
	{
		PropertyModule.RegisterCustomClassLayout(ClassToCustomize, FOnGetDetailCustomizationInstance::CreateStatic(&TDetailsCustomization::MakeInstance));
		RegisteredClassCustomizations.Add(ClassToCustomize);
	}
	
	/**
	* Generates menu content for the toolbar combo button drop down menu
	*
	* @return	Menu content widget
	*/
	static TSharedRef<SWidget> GenerateToolbarSettingsMenu(TSharedRef<FUICommandList> InCommandList);
};
