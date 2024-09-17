// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularGameplayActors/GSMModularPlayerController.h"

#include "AbilitySystemComponent.h"
#include "Components/ControllerComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ModularGameplayActors/GSMModularPlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMModularPlayerController)

AGSMModularPlayerController::AGSMModularPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void AGSMModularPlayerController::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	UGameFrameworkComponentManager::AddGameFrameworkComponentReceiver(this);
}

void AGSMModularPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UGameFrameworkComponentManager::RemoveGameFrameworkComponentReceiver(this);

	Super::EndPlay(EndPlayReason);
}

void AGSMModularPlayerController::ReceivedPlayer()
{
	// Player controllers always get assigned a player and can't do much until then
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, UGameFrameworkComponentManager::NAME_GameActorReady);

	Super::ReceivedPlayer();

	TArray<UControllerComponent*> ModularComponents;
	GetComponents(ModularComponents);
	for (UControllerComponent* Component : ModularComponents)
	{
		Component->ReceivedPlayer();
	}
}

void AGSMModularPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	TArray<UControllerComponent*> ModularComponents;
	GetComponents(ModularComponents);
	for (UControllerComponent* Component : ModularComponents)
	{
		Component->PlayerTick(DeltaTime);
	}
}

void AGSMModularPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AGSMModularPlayerState* PS = GetPlayerState<AGSMModularPlayerState>();
	if (PS)
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}