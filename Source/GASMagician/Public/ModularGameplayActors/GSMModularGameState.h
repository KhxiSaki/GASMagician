// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/GameState.h"

#include "GSMModularGameState.generated.h"

class UObject;

/** Pair this with a GSMModularGameModeBase */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AGSMModularGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~ End AActor interface
};


/** Pair this with a ModularGameState */
UCLASS(Blueprintable)
class GASMAGICIAN_API AGSMModularGameState : public AGameState
{
	GENERATED_BODY()

public:
	AGSMModularGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//~ Begin AActor interface
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~ End AActor interface

protected:
	//~ Begin AGameState interface
	virtual void HandleMatchHasStarted() override;
	//~ Begin AGameState interface
};
