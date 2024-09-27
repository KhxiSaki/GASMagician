// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "GSMAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define GSM_GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
float GSMGet##PropertyName() const \
{ \
return PropertyName.GetCurrentValue(); \
}

#define GSM_GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
void GSMSet##PropertyName(float NewVal) \
{ \
UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent(); \
if (ensure(AbilityComp)) \
{ \
AbilityComp->SetNumericAttributeBase(Get##PropertyName##Attribute(), NewVal); \
}; \
}

#define GSM_GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) \
void GSMInit##PropertyName(float NewVal) \
{ \
PropertyName.SetBaseValue(NewVal); \
PropertyName.SetCurrentValue(NewVal); \
}

class AActor;
class UObject;
class UWorld;
struct FGameplayEffectSpec;

/** 
 * Delegate used to broadcast attribute events, some of these parameters may be null on clients: 
 * @param EffectInstigator	The original instigating actor for this event
 * @param EffectCauser		The physical actor that caused the change
 * @param EffectSpec		The full effect spec for this change
 * @param EffectMagnitude	The raw magnitude, this is before clamping
 * @param OldValue			The value of the attribute before it was changed
 * @param NewValue			The value after it was changed
*/
DECLARE_MULTICAST_DELEGATE_SixParams(FGSMAttributeEvent, AActor* /*EffectInstigator*/, AActor* /*EffectCauser*/, const FGameplayEffectSpec* /*EffectSpec*/, float /*EffectMagnitude*/, float /*OldValue*/, float /*NewValue*/);

/**
 * 
 */
UCLASS(BlueprintType)
class GASMAGICIAN_API UGSMAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
	
public:
	UGSMAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	//Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Health, Category = "GASMagician|Attributes", meta = (HideFromModifiers))
		FGameplayAttributeData Health;
	UFUNCTION()
		void OnRep_Health(const FGameplayAttributeData& OldHealth);
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Health)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetHealth() const
	{
		return Health.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetHealth(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetHealthAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitHealth(float NewVal)
	{
		Health.SetBaseValue(NewVal);
		Health.SetCurrentValue(NewVal);
	}

	//MaxHealth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHealth, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxHealth;
	UFUNCTION()
		void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxHealth)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxHealth() const
	{
		return MaxHealth.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxHealth(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxHealthAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxHealth(float NewVal)
	{
		MaxHealth.SetBaseValue(NewVal);
		MaxHealth.SetCurrentValue(NewVal);
	}

	//HealthRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_HealthRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData HealthRegenRate;
	UFUNCTION()
		void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, HealthRegenRate, OldHealthRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, HealthRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetHealthRegenRate() const
	{
		return HealthRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetHealthRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetHealthRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitHealthRegenRate(float NewVal)
	{
		HealthRegenRate.SetBaseValue(NewVal);
		HealthRegenRate.SetCurrentValue(NewVal);
	}

	// Delegate when health changes due to damage/healing, some information may be missing on the client
	mutable FGSMAttributeEvent OnHealthChanged;

	// Delegate when max health changes
	mutable FGSMAttributeEvent OnMaxHealthChanged;

	// Delegate to broadcast when the health attribute reaches zero
	mutable FGSMAttributeEvent OnOutOfHealth;

private:
	// Used to track when the health reaches 0.
	bool bOutOfHealth;

	// Store the health before any changes 
	float MaxHealthBeforeAttributeChange;
	float HealthBeforeAttributeChange;
public:
	//Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mana, Category = "GASMagician|Attributes")
		FGameplayAttributeData Mana;
	UFUNCTION()
		void OnRep_Mana(const FGameplayAttributeData& OldMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Mana, OldMana); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Mana)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMana() const
	{
		return Mana.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMana(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetManaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMana(float NewVal)
	{
		Mana.SetBaseValue(NewVal);
		Mana.SetCurrentValue(NewVal);
	}

	//MaxMana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMana, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxMana;
	UFUNCTION()
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxMana, OldMaxMana); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxMana)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxMana() const
	{
		return MaxMana.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxMana(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxManaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxMana(float NewVal)
	{
		MaxMana.SetBaseValue(NewVal);
		MaxMana.SetCurrentValue(NewVal);
	}

	//ManaRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ManaRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData ManaRegenRate;
	UFUNCTION()
		void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, ManaRegenRate, OldManaRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, ManaRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetManaRegenRate() const
	{
		return ManaRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetManaRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetManaRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitManaRegenRate(float NewVal)
	{
		ManaRegenRate.SetBaseValue(NewVal);
		ManaRegenRate.SetCurrentValue(NewVal);
	}

	//Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Stamina, Category = "GASMagician|Attributes")
		FGameplayAttributeData Stamina;
	UFUNCTION()
		void OnRep_Stamina(const FGameplayAttributeData& OldStamina) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, Stamina, OldStamina); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, Stamina)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetStamina() const
	{
		return Stamina.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetStamina(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetStaminaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitStamina(float NewVal)
	{
		Stamina.SetBaseValue(NewVal);
		Stamina.SetCurrentValue(NewVal);
	}

	//MaxStamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxStamina, Category = "GASMagician|Attributes")
		FGameplayAttributeData MaxStamina;
	UFUNCTION()
		void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, MaxStamina, OldMaxStamina); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, MaxStamina)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetMaxStamina() const
	{
		return MaxStamina.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetMaxStamina(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxStaminaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitMaxStamina(float NewVal)
	{
		MaxStamina.SetBaseValue(NewVal);
		MaxStamina.SetCurrentValue(NewVal);
	}

	//StaminaRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_StaminaRegenRate, Category = "GASMagician|Attributes")
		FGameplayAttributeData StaminaRegenRate;
	UFUNCTION()
		void OnRep_StaminaRegenRate(const FGameplayAttributeData& OldStaminaRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGSMAttributeSet, StaminaRegenRate, OldStaminaRegenRate); }
	ATTRIBUTE_ACCESSORS(UGSMAttributeSet, StaminaRegenRate)
		UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		float GSMGetStaminaRegenRate() const
	{
		return StaminaRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMSetStaminaRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetStaminaRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = "GASMagician|Attributes")
		void GSMInitStaminaRegenRate(float NewVal)
	{
		StaminaRegenRate.SetBaseValue(NewVal);
		StaminaRegenRate.SetCurrentValue(NewVal);
	}

	/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GASMagician|Attributes", meta = (HideFromLevelInfos))		// You can't make a GameplayEffect 'powered' by Damage (Its transient)
	FGameplayAttributeData	Damage;

	/** This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GASMagician|Attributes", meta = (HideFromLevelInfos))		// You can't make a GameplayEffect 'powered' by Healing (Its transient)
	FGameplayAttributeData	Healing;

protected:
	/** Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes. (i.e. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before) */
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data) override;
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
};
