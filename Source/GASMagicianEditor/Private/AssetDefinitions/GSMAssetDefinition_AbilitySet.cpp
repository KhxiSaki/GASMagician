// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetDefinitions/GSMAssetDefinition_AbilitySet.h"
#include "GSMAbilitySet.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions"

FText UGSMAssetDefinition_AbilitySet::GetAssetDisplayName() const
{
	return LOCTEXT("AssetDefinition_AbilitySet", "Ability Set");
}

FLinearColor UGSMAssetDefinition_AbilitySet::GetAssetColor() const
{
	return FColor::Emerald;
}

TSoftClassPtr<> UGSMAssetDefinition_AbilitySet::GetAssetClass() const
{
	return UGSMAbilitySet::StaticClass();
}

TConstArrayView<FAssetCategoryPath> UGSMAssetDefinition_AbilitySet::GetAssetCategories() const
{
	static const auto Categories = { FAssetCategoryPath(LOCTEXT("GASMagician", "GAS Magician"), LOCTEXT("DataAssets","DataAssets")) };
	return Categories;
}

#undef LOCTEXT_NAMESPACE
