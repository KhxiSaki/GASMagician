// Copyright (c) CreationArtStudios 2024 Inc. All Rights Reserved.


#include "Actions/GSMAbilityTagRelationshipMapping.h"
#include "GASMagicianEditor.h"
#include "GSMAbilityTagRelationshipMapping.h"
#include "Modules/ModuleManager.h"

UClass* FGSMAbilityTagRelationshipActions::GetSupportedClass() const
{
	return UGSMAbilityTagRelationshipMapping::StaticClass();
}

FText FGSMAbilityTagRelationshipActions::GetName() const
{
	return INVTEXT("TagRelationshipMapping");
}

FColor FGSMAbilityTagRelationshipActions::GetTypeColor() const
{
	return FColor::Red;
}

uint32 FGSMAbilityTagRelationshipActions::GetCategories()
{
	FGASMagicianEditorModule& GASMagicianEditorModule = FModuleManager::GetModuleChecked<FGASMagicianEditorModule>("GASMagicianEditor").Get();
	return GASMagicianEditorModule.GetGASAssetCategoryBit();
}