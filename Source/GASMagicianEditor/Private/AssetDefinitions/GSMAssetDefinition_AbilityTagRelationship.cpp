// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetDefinitions/GSMAssetDefinition_AbilityTagRelationship.h"

#include "GSMAbilityTagRelationshipMapping.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

FText UGSMAssetDefinition_AbilityTagRelationship::GetAssetDisplayName() const
{
	return LOCTEXT("AssetDefinition_AbilityTagRelationship", "AbilityTag RelationshipMapping");
}

FLinearColor UGSMAssetDefinition_AbilityTagRelationship::GetAssetColor() const
{
	return FColor::Emerald;
}

TSoftClassPtr<> UGSMAssetDefinition_AbilityTagRelationship::GetAssetClass() const
{
	return UGSMAbilityTagRelationshipMapping::StaticClass();
}

TConstArrayView<FAssetCategoryPath> UGSMAssetDefinition_AbilityTagRelationship::GetAssetCategories() const
{
	static const auto Categories = { FAssetCategoryPath(LOCTEXT("GASMagician", "GAS Magician"), LOCTEXT("DataAssets","DataAssets")) };
	return Categories;
}

#undef LOCTEXT_NAMESPACE