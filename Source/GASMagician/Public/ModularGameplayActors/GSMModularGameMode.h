// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/GameMode.h"

#include "GSMModularGameMode.generated.h"

class UObject;

/** Pair this with a GSMModularGameStateBase */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGSMModularGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};

/** Pair this with a ModularGameState */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AGSMModularGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
