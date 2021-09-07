// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h"
#include "GameplayTagsModule.h"
#include "GameplayEffectExtension.h"
#include "PS/GTPCharacter.h"

UGTPAttributeSet::UGTPAttributeSet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MaxHealth = 100.f;
	MaxEnergy = 100.f;
	MaxMana = 100.f;

	Health = 40.f;
	Energy = 50.f;
	Mana = 30.f;

	EnergyRegenRate = 0.5f;
	ManaRegenRate = 0.5f;
}

void UGTPAttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, ManaRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, MaxEnergy, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, Energy, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGTPAttributeSet, EnergyRegenRate, COND_None, REPNOTIFY_Always);
}

void UGTPAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
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

void UGTPAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
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
}

bool UGTPAttributeSet::PreGameplayEffectExecute(struct FGameplayEffectModCallbackData& Data)
{
	static FProperty* HealthProperty = FindFieldChecked<FProperty>(UGTPAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGTPAttributeSet, Health));
	static FProperty* DamageProperty = FindFieldChecked<FProperty>(UGTPAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGTPAttributeSet, Damage));

	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	// Is Damage about to be applied?
	if (DamageProperty == ModifiedProperty)
	{
		AGTPCharacter* MyCharacter = CastChecked<AGTPCharacter>(GetOwningActor());
		float NewMagnitude = Data.EvaluatedData.Magnitude;
		bool IsCritical = false;
		const UGTPAttributeSet* SourceAttributes = Data.EffectSpec.GetContext().GetOriginalInstigatorAbilitySystemComponent()->GetSet<UGTPAttributeSet>();

		FGameplayTagContainer EffectTags;
		Data.EffectSpec.GetAllAssetTags(EffectTags);

		MyCharacter->CalculatePSUpdatedDamage(Data.EvaluatedData.Magnitude, SourceAttributes, EffectTags, NewMagnitude, IsCritical);

		Data.EvaluatedData.Magnitude = NewMagnitude;

		if (NewMagnitude > 0.f)
		{
			AGTPCharacter* DamagedCharacter = Cast<AGTPCharacter>(GetOwningActor());
			if (DamagedCharacter)
			{
				DamagedCharacter->OnPSTakeDamage(MyCharacter, NewMagnitude, IsCritical);

				if (MyCharacter)
				{
					AGTPCharacter* AttackingCharacter = Cast<AGTPCharacter>(MyCharacter);

					if (AttackingCharacter)
					{
						AttackingCharacter->OnPSInflictDamage(DamagedCharacter, NewMagnitude, IsCritical);
					}
				}
			}
		}
	}

	return true;
}

void UGTPAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	static FProperty* DamageProperty = FindFieldChecked<FProperty>(UGTPAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGTPAttributeSet, Damage));
	static FProperty* EnergyProperty = FindFieldChecked<FProperty>(UGTPAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGTPAttributeSet, Energy));
	static FProperty* ManaProperty = FindFieldChecked<FProperty>(UGTPAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UGTPAttributeSet, Mana));

	FProperty* ModifiedProperty = Data.EvaluatedData.Attribute.GetUProperty();

	// What property was modified?
	if (DamageProperty == ModifiedProperty)
	{
		// Treat damage as minus health
		SetHealth(FMath::Clamp(GetHealth() - Damage.GetCurrentValue(), 0.f, GetMaxHealth()));
		Damage = 0.f;
	}

	if (EnergyProperty == ModifiedProperty)
	{
		SetEnergy(FMath::Clamp(GetEnergy(), 0.f, GetMaxEnergy()));
	}

	if (ManaProperty == ModifiedProperty)
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
}

