// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Actions/GSMAbilitySetActions.h"
#include "Actions/GSMAbilityTagRelationshipMapping.h"

class FGASMagicianEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/**
     * Singleton-like access to this module's interface.  This is just for convenience!
     * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
     *
     * @return Returns singleton instance, loading the module on demand if needed
     */
	static inline FGASMagicianEditorModule& Get()
	{
		return FModuleManager::LoadModuleChecked< FGASMagicianEditorModule >( "GASMagicianEditor" );
	}

#if WITH_EDITOR
	
	//Making a factory so when we right click on content browser, an option for Gameplay->CommonClasses will be there
	TSharedPtr<FGSMAbilitySetActions> AbilitySetActions;
	//Making a factory so when we right click on content browser, an option for Gameplay->CommonClasses will be there
	TSharedPtr<FGSMAbilityTagRelationshipActions> AbilityTagRelationshipActions;

	virtual EAssetTypeCategories::Type GetGASAssetCategoryBit() const { return GASAssetCategoryBit; }
protected:
	EAssetTypeCategories::Type GASAssetCategoryBit;
#endif
	
};
