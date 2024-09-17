// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularGameplayActors/GSMModularGameMode.h"

#include "ModularGameplayActors/GSMModularGameState.h"
#include "ModularGameplayActors/GSMModularPawn.h"
#include "ModularGameplayActors/GSMModularPlayerController.h"
#include "ModularGameplayActors/GSMModularPlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMModularGameMode)

AGSMModularGameModeBase::AGSMModularGameModeBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = AGSMModularGameStateBase::StaticClass();
	PlayerControllerClass = AGSMModularPlayerController::StaticClass();
	PlayerStateClass = AGSMModularPlayerState::StaticClass();
	DefaultPawnClass = AGSMModularPawn::StaticClass();
}

AGSMModularGameMode::AGSMModularGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameStateClass = AGSMModularGameState::StaticClass();
	PlayerControllerClass = AGSMModularPlayerController::StaticClass();
	PlayerStateClass = AGSMModularPlayerState::StaticClass();
	DefaultPawnClass = AGSMModularPawn::StaticClass();
}

