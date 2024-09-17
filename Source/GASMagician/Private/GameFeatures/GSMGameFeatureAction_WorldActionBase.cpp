// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFeatures/GSMGameFeatureAction_WorldActionBase.h"

#include "Containers/Array.h"
#include "Containers/IndirectArray.h"
#include "Delegates/Delegate.h"
#include "Engine/Engine.h" // for FWorldContext
#include "Engine/GameInstance.h"
#include "Engine/World.h" // for FWorldDelegates::OnStartGameInstance
#include "HAL/PlatformCrt.h"

struct FGameFeatureDeactivatingContext;

void UGSMGameFeatureAction_WorldActionBase::OnGameFeatureActivating()
{
	GameInstanceStartHandle = FWorldDelegates::OnStartGameInstance.AddUObject(this, &UGSMGameFeatureAction_WorldActionBase::HandleGameInstanceStart);

	// Add to any worlds with associated game instances that have already been initialized
	for (const FWorldContext& WorldContext : GEngine->GetWorldContexts())
	{
		AddToWorld(WorldContext);
	}
}

void UGSMGameFeatureAction_WorldActionBase::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	FWorldDelegates::OnStartGameInstance.Remove(GameInstanceStartHandle);
}

void UGSMGameFeatureAction_WorldActionBase::HandleGameInstanceStart(UGameInstance* GameInstance)
{
	if (FWorldContext* WorldContext = GameInstance->GetWorldContext())
	{
		AddToWorld(*WorldContext);
	}
}
