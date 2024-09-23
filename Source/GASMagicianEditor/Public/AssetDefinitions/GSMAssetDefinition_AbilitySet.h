// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetDefinitionDefault.h"
#include "GSMAssetDefinition_AbilitySet.generated.h"

/**
 * 
 */
UCLASS()
class GASMAGICIANEDITOR_API UGSMAssetDefinition_AbilitySet : public UAssetDefinitionDefault
{
	GENERATED_BODY()
protected:
	// UAssetDefinition Begin
	virtual FText GetAssetDisplayName() const override;
	virtual FLinearColor GetAssetColor() const override;
	virtual TSoftClassPtr<UObject> GetAssetClass() const override;
	virtual TConstArrayView<FAssetCategoryPath> GetAssetCategories() const override;
	// UAssetDefinition End
};
