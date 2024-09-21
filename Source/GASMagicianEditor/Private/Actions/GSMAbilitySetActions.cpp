// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.


#include "Actions/GSMAbilitySetActions.h"
#include "GASMagicianEditor.h"
#include "GSMAbilitySet.h"
#include "Modules/ModuleManager.h"

UClass* FGSMAbilitySetActions::GetSupportedClass() const
{
	return UGSMAbilitySet::StaticClass();
}

FText FGSMAbilitySetActions::GetName() const
{
	return INVTEXT("AbilitySet");
}

FColor FGSMAbilitySetActions::GetTypeColor() const
{
	return FColor::Red;
}

uint32 FGSMAbilitySetActions::GetCategories()
{
	FGASMagicianEditorModule& GASMagicianEditorModule = FModuleManager::GetModuleChecked<FGASMagicianEditorModule>("GASMagicianEditor").Get();
	return GASMagicianEditorModule.GetGASAssetCategoryBit();
}