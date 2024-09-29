// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "CoreTypes.h"
#include "GSMGameFeatureAction_WorldActionBase.h"
#include "Templates/SharedPointer.h"
#include "UObject/NameTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/WeakObjectPtrTemplates.h"

#include "GSMGameFeatureAction_AddInputContextMapping.generated.h"

class AActor;
class APlayerController;
class FText;
class UInputMappingContext;
class UObject;
class UPlayer;
struct FAssetBundleData;
struct FComponentRequestHandle;
struct FGameFeatureDeactivatingContext;
struct FWorldContext;

/**
 * Adds InputMappingContext to local players' EnhancedInput system. 
 * Expects that local players are set up to use the EnhancedInput system.
 */
UCLASS(MinimalAPI, meta = (DisplayName = "Add Input Mapping (GASMagician)"))
class UGSMGameFeatureAction_AddInputContextMapping final : public UGSMGameFeatureAction_WorldActionBase
{
	GENERATED_BODY()

public:
	//~ Begin UGameFeatureAction interface
	virtual void OnGameFeatureActivating() override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;
#if WITH_EDITORONLY_DATA
	virtual void AddAdditionalAssetBundleData(FAssetBundleData& AssetBundleData) override;
#endif
	//~ End UGameFeatureAction interface

	//~ Begin UObject interface
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	//~ End UObject interface

	UPROPERTY(EditAnywhere, Category="GASMagician")
	TSoftObjectPtr<UInputMappingContext> InputMapping;

	// Higher priority input mappings will be prioritized over mappings with a lower priority.
	UPROPERTY(EditAnywhere, Category="GASMagician")
	int32 Priority = 0;

private:
	//~ Begin UGSMGameFeatureAction_WorldActionBase interface
	virtual void AddToWorld(const FWorldContext& WorldContext) override;
	//~ End UGSMGameFeatureAction_WorldActionBase interface

	void Reset();
	void HandleControllerExtension(AActor* Actor, FName EventName);
	void AddInputMappingForPlayer(UPlayer* Player);
	void RemoveInputMapping(APlayerController* PlayerController);

	TArray<TSharedPtr<FComponentRequestHandle>> ExtensionRequestHandles;
	TArray<TWeakObjectPtr<APlayerController>> ControllersAddedTo;
};
