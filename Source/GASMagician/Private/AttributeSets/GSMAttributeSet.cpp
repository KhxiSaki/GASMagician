// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSets/GSMAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayTagsManager.h"
#include "Components/GSMAbilitySystemComponent.h"
#include "ModularGameplayActors/GSMModularCharacter.h"
#include "Net/UnrealNetwork.h"

UGSMAttributeSet::UGSMAttributeSet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bOutOfHealth = false;
	MaxHealthBeforeAttributeChange = 0.0f;
	HealthBeforeAttributeChange = 0.0f;
}

void UGSMAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Health, OldHealth);

	// Call the change callback, but without an instigator
	// This could be changed to an explicit RPC in the future
	// These events on the client should not be changing attributes

	const float CurrentHealth = GetHealth();
	const float EstimatedMagnitude = CurrentHealth - OldHealth.GetCurrentValue();
	
	OnHealthChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldHealth.GetCurrentValue(), CurrentHealth);

	if (!bOutOfHealth && CurrentHealth <= 0.0f)
	{
		OnOutOfHealth.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldHealth.GetCurrentValue(), CurrentHealth);
	}

	bOutOfHealth = (CurrentHealth <= 0.0f);
}

void UGSMAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxHealth, OldMaxHealth);
	// Call the change callback, but without an instigator
	// This could be changed to an explicit RPC in the future
	OnMaxHealthChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxHealth() - OldMaxHealth.GetCurrentValue(), OldMaxHealth.GetCurrentValue(), GetMaxHealth());
}

bool UGSMAttributeSet::PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data)
{
	if (!Super::PreGameplayEffectExecute(Data))
	{
		return false;
	}
	
	static FProperty *HealthProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Health));
	static FProperty *DamageProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Damage));
	static FProperty* HealingProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Healing));

	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	// Is Damage about to be applied?
	if (DamageProperty == ModifiedProperty)
	{
		AGSMModularCharacter* MyCharacter = CastChecked<AGSMModularCharacter>(GetOwningAbilitySystemComponent()->GetAvatarActor());
		float NewMagnitude = Data.EvaluatedData.Magnitude;
		const UGSMAttributeSet* SourceAttributes = Data.EffectSpec.GetContext().GetOriginalInstigatorAbilitySystemComponent()->GetSet<UGSMAttributeSet>();

		AGSMModularCharacter* WhoAttackedUsLast = Cast<AGSMModularCharacter>(Data.EffectSpec.GetContext().GetOriginalInstigatorAbilitySystemComponent()->GetOwner());

		FGameplayTagContainer EffectTags;
		Data.EffectSpec.GetAllAssetTags(EffectTags);

		MyCharacter->CalculateUpdatedDamage(Data.EvaluatedData.Magnitude, SourceAttributes, EffectTags, NewMagnitude);

		Data.EvaluatedData.Magnitude = NewMagnitude;

		if (NewMagnitude > 0.f)
		{
			AGSMModularCharacter* DamagedCharacter = Cast<AGSMModularCharacter>(GetOwningAbilitySystemComponent()->GetAvatarActor());
			if (DamagedCharacter)
			{
				DamagedCharacter->OnTakeDamage(WhoAttackedUsLast, NewMagnitude);

				if (WhoAttackedUsLast)
				{
					AGSMModularCharacter* AttackingCharacter = Cast<AGSMModularCharacter>(WhoAttackedUsLast);

					if (AttackingCharacter)
					{
						AttackingCharacter->OnInflictDamage(DamagedCharacter, NewMagnitude);
					}
				}
			}
		}
	}

	// Save the current health
	HealthBeforeAttributeChange = GetHealth();
	MaxHealthBeforeAttributeChange = GetMaxHealth();
	return true;
}

void UGSMAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
	Super::PostGameplayEffectExecute(Data);
	
	static FProperty* DamageProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Damage));
	static FProperty* HealingProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Healing));
	static FProperty* ManaProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Mana));
	static FProperty* StaminaProperty = FindFieldChecked<FProperty>(UGSMAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGSMAttributeSet, Stamina));
	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	//Data.EffectSpec.CapturedTargetTags
	float MinimumHealth = 0.0f;
	const FGameplayEffectContextHandle& EffectContext = Data.EffectSpec.GetEffectContext();
	AActor* Instigator = EffectContext.GetOriginalInstigator();
	AActor* Causer = EffectContext.GetEffectCauser();
	
	// What property was modified?
	if (DamageProperty == ModifiedProperty)
	{
		// Treat damage as minus health
		SetHealth(FMath::Clamp(GetHealth() - Damage.GetCurrentValue(), MinimumHealth, GetMaxHealth()));
		Damage = 0.f;
	}

	if (HealingProperty == ModifiedProperty)
	{
		SetHealth(FMath::Clamp(GetHealth() + Healing.GetCurrentValue(), MinimumHealth, GetMaxHealth()));
		Healing = 0.f;
	}

	if (ManaProperty == ModifiedProperty)
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
		//Mana.SetBaseValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, Mana.GetCurrentValue()));
		//Mana.SetCurrentValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, MaxMana.GetCurrentValue()));
		//Mana = FMath::Clamp(Mana, 0.f, MaxMana);
	}

	if (StaminaProperty == ModifiedProperty)
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.f, GetMaxStamina()));
		//Stamina.SetCurrentValue(FMath::Clamp(Stamina.GetCurrentValue(), 0.f, MaxStamina.GetCurrentValue()));
		//Stamina = FMath::Clamp(Stamina, 0.f, MaxStamina);
	}

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		// Clamp and fall into out of health handling below
		SetHealth(FMath::Clamp(GetHealth(), MinimumHealth, GetMaxHealth()));
	}
	
	
	// If health has actually changed activate callbacks
	if (GetHealth() != HealthBeforeAttributeChange)
	{
		OnHealthChanged.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, HealthBeforeAttributeChange, GetHealth());
	}
	
	//Dead
	if ((GetHealth() <= 0.0f) && !bOutOfHealth)
	{
		FName DeadTagName = FName(TEXT("Combat.State.Dead"));
		FGameplayTag DeadTag = UGameplayTagsManager::Get().RequestGameplayTag(DeadTagName);

		AGSMModularCharacter* MyCharacter = Cast<AGSMModularCharacter>(GetOwningActor());
		if (MyCharacter && !MyCharacter->GetAbilitySystemComponent()->HasAnyMatchingGameplayTags(FGameplayTagContainer(DeadTag)))
		{
			UE_LOG(LogTemp, Warning, TEXT("DEAD!"));
			MyCharacter->OnDeath();
		}
		OnOutOfHealth.Broadcast(Instigator, Causer, &Data.EffectSpec, Data.EvaluatedData.Magnitude, HealthBeforeAttributeChange, GetHealth());
	}

	// Check health again in case an event above changed it.
	bOutOfHealth = (GetHealth() <= 0.0f);
}


void UGSMAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Mana, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, ManaRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGSMAttributeSet, StaminaRegenRate, COND_None, REPNOTIFY_Always);
}


void UGSMAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UGSMAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
	else if (Attribute == GetMaxStaminaAttribute())
	{
		AdjustAttributeForMaxChange(Stamina, MaxStamina, NewValue, GetStaminaAttribute());
	}
}

void UGSMAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	
}

void UGSMAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		// Make sure current health is not greater than the new max health.
		if (GetHealth() > NewValue)
		{
			UGSMAbilitySystemComponent* LyraASC = Cast<UGSMAbilitySystemComponent>(GetOwningAbilitySystemComponent());
			check(LyraASC);

			LyraASC->ApplyModToAttribute(GetHealthAttribute(), EGameplayModOp::Override, NewValue);
		}
	}

	if (bOutOfHealth && (GetHealth() > 0.0f))
	{
		bOutOfHealth = false;
	}
}