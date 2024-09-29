// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"

namespace GSMGameplayTags
{
	GASMAGICIAN_API	FGameplayTag FindTagByString(const FString& TagString, bool bMatchPartialString = false);

	namespace InitState
	{
		GASMAGICIAN_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_Spawned);
		GASMAGICIAN_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataAvailable);
		GASMAGICIAN_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataInitialized);
		GASMAGICIAN_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_GameplayReady);
	}
};
