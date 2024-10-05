// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularGameplayActors/GSMModularPawn.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Components/GSMAbilitySystemComponent.h"
#include "ModularGameplayActors/GSMModularPlayerState.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMModularPawn)

AGSMModularPawn::AGSMModularPawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UGSMAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Minimal mode means GameplayEffects are not replicated to anyone. Only GameplayTags and Attributes are replicated to clients.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

}

void AGSMModularPawn::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	UGameFrameworkComponentManager::AddGameFrameworkComponentReceiver(this);
}

void AGSMModularPawn::BeginPlay()
{
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, UGameFrameworkComponentManager::NAME_GameActorReady);

	Super::BeginPlay();
}

void AGSMModularPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UGameFrameworkComponentManager::RemoveGameFrameworkComponentReceiver(this);

	Super::EndPlay(EndPlayReason);
}

UAbilitySystemComponent* AGSMModularPawn::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Server only
void AGSMModularPawn::PossessedBy(AController* NewController)
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
void AGSMModularPawn::OnRep_PlayerState()
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

void AGSMModularPawn::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		ASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool AGSMModularPawn::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool AGSMModularPawn::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool AGSMModularPawn::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UGSMAbilitySystemComponent* ASC = Cast<UGSMAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		return ASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}