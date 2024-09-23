// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetDefinitions/GSMAssetDefinition_GameplayEffect.h"
#include "GameplayEffect.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions"

FText UGSMAssetDefinition_GameplayEffect::GetAssetDisplayName() const
{
	return LOCTEXT("AssetDefinition_GameplayEffect", "GameplayEffect");
}

FLinearColor UGSMAssetDefinition_GameplayEffect::GetAssetColor() const
{
	return FColor::Emerald;
}

TSoftClassPtr<> UGSMAssetDefinition_GameplayEffect::GetAssetClass() const
{
	return UGameplayEffect::StaticClass();
}

TConstArrayView<FAssetCategoryPath> UGSMAssetDefinition_GameplayEffect::GetAssetCategories() const
{
	static const auto Categories = { FAssetCategoryPath(LOCTEXT("GASMagician", "GAS Magician")) };
	return Categories;
}

#undef LOCTEXT_NAMESPACE
