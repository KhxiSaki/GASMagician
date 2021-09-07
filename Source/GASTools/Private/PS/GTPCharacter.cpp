// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPCharacter.h"
#include "PS/GTPAttributeSet.h"
#include "PS/GTPAbilitySystemComponent.h"
#include "PS/GTPPlayerState.h"

// Sets default values
AGTPCharacter::AGTPCharacter(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bAlwaysRelevant = true;
}

void AGTPCharacter::PostInitializeComponents()
{
	//GTPAttributeSet = NewObject<UGTPAttributeSet>(this);
	//AbilitySystemComponent->AddSet<UGTPAttributeSet>();
	Super::PostInitializeComponents();
}

UAbilitySystemComponent* AGTPCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


class UGTPAttributeSet* AGTPCharacter::GetGTPAttributeSet() const
{
	return GTPAttributeSet;
}

// Called when the game starts or when spawned
void AGTPCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetupAttributeChangeDelegates();
}

// Called every frame
void AGTPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGTPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Server only
void AGTPCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AGTPPlayerState* PS = GetPlayerState<AGTPPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UGTPAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		// Set the AttributeSetBase for convenience attribute functions
		GTPAttributeSet = PS->GetGTPAttributeSet();
	}
}

// Client only
void AGTPCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AGTPPlayerState* PS = GetPlayerState<AGTPPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<UGTPAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);

		// Set the AttributeSetBase for convenience attribute functions
		GTPAttributeSet = PS->GetGTPAttributeSet();
	}
}

void AGTPCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();
	// Our controller changed, must update ActorInfo on AbilitySystemComponent
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RefreshAbilityActorInfo();
	}
}

void AGTPCharacter::GTPGrantAbility(TSubclassOf<class UGameplayAbility> NewAbility)
{
	if (AbilitySystemComponent)
	{
		if (HasAuthority())
		{
			if (NewAbility)
			{
				AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(NewAbility.GetDefaultObject(), 1));
			}
		}
	}
}

void AGTPCharacter::GTPRemoveAbility(TSubclassOf<class UGameplayAbility> Ability)
{
	if (AbilitySystemComponent)
	{
		if (HasAuthority())
		{
			const UGameplayAbility* const InAbilityCDO = Ability.GetDefaultObject();

			for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
			{
				if (Spec.Ability == InAbilityCDO)
				{
					AbilitySystemComponent->ClearAbility(Spec.Handle);
					break;
				}
			}
		}
	}
}

void AGTPCharacter::SetupAttributeChangeDelegates()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UGTPAttributeSet::GetHealthAttribute()).AddUObject(this, &AGTPCharacter::OnPSHealthChange);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UGTPAttributeSet::GetEnergyAttribute()).AddUObject(this, &AGTPCharacter::OnPSEnergyChange);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UGTPAttributeSet::GetManaAttribute()).AddUObject(this, &AGTPCharacter::OnPSManaChange);
	}
}

void AGTPCharacter::OnPSHealthChange(const FOnAttributeChangeData& Data)
{
	HealthChanged(Data.OldValue, Data.NewValue);
}

void AGTPCharacter::OnPSEnergyChange(const FOnAttributeChangeData& Data)
{
	EnergyChanged(Data.OldValue, Data.NewValue);
}

void AGTPCharacter::OnPSManaChange(const FOnAttributeChangeData& Data)
{
	ManaChanged(Data.OldValue, Data.NewValue);
}

bool AGTPCharacter::ActivateAbilitiesWithTags(FGameplayTagContainer AbilityTags, bool bAllowRemoteActivation)
{
	if (AbilitySystemComponent)
	{
		return AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags, bAllowRemoteActivation);
	}

	return false;
}

void AGTPCharacter::GetActiveAbilitiesWithTags(FGameplayTagContainer AbilityTags, TArray<UGTPGameplayAbility*>& ActiveAbilities)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->GetActiveAbilitiesWithTags(AbilityTags, ActiveAbilities);
	}
}

bool AGTPCharacter::GetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration)
{
	if (AbilitySystemComponent && CooldownTags.Num() > 0)
	{
		TimeRemaining = 0.f;
		CooldownDuration = 0.f;

		FGameplayEffectQuery const Query = FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(CooldownTags);
		TArray< TPair<float, float> > DurationAndTimeRemaining = AbilitySystemComponent->GetActiveEffectsTimeRemainingAndDuration(Query);
		if (DurationAndTimeRemaining.Num() > 0)
		{
			int32 BestIdx = 0;
			float LongestTime = DurationAndTimeRemaining[0].Key;
			for (int32 Idx = 1; Idx < DurationAndTimeRemaining.Num(); ++Idx)
			{
				if (DurationAndTimeRemaining[Idx].Key > LongestTime)
				{
					LongestTime = DurationAndTimeRemaining[Idx].Key;
					BestIdx = Idx;
				}
			}

			TimeRemaining = DurationAndTimeRemaining[BestIdx].Key;
			CooldownDuration = DurationAndTimeRemaining[BestIdx].Value;

			return true;
		}
	}
	return false;
}
