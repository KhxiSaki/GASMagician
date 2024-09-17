// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularGameplayActors/GSMModularCharacter.h"

#include "GSMAbilitySystemComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ModularGameplayActors/GSMModularPlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMModularCharacter)

AGSMModularCharacter::AGSMModularCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

void AGSMModularCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	UGameFrameworkComponentManager::AddGameFrameworkComponentReceiver(this);
}

void AGSMModularCharacter::BeginPlay()
{
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, UGameFrameworkComponentManager::NAME_GameActorReady);

	Super::BeginPlay();
}

void AGSMModularCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UGameFrameworkComponentManager::RemoveGameFrameworkComponentReceiver(this);

	Super::EndPlay(EndPlayReason);
}

UAbilitySystemComponent* AGSMModularCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Server only
void AGSMModularCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AGSMModularPlayerState* PS = GetPlayerState<AGSMModularPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UGSMAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);
	}
}

// Client only
void AGSMModularCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AGSMModularPlayerState* PS = GetPlayerState<AGSMModularPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<UGSMAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
	}
}

void AGSMModularCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();
}