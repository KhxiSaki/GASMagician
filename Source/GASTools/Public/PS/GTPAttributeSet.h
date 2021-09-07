// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GTPAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define GTP_GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	float GTPGet##PropertyName() const \
	{ \
		return PropertyName.GetCurrentValue(); \
	}

#define GTP_GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	void GTPSet##PropertyName(float NewVal) \
	{ \
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent(); \
		if (ensure(AbilityComp)) \
		{ \
			AbilityComp->SetNumericAttributeBase(Get##PropertyName##Attribute(), NewVal); \
		}; \
	}

#define GTP_GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) \
	void GTPInit##PropertyName(float NewVal) \
	{ \
		PropertyName.SetBaseValue(NewVal); \
		PropertyName.SetCurrentValue(NewVal); \
	}

/**
 * 
 */
UCLASS(EditInlineNew)
class GASTOOLS_API UGTPAttributeSet : public UAttributeSet
{
	GENERATED_UCLASS_BODY()

public:

	//Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Health, Category = RPGAttributes, meta = (HideFromModifiers))
		FGameplayAttributeData Health;
	UFUNCTION()
		void OnRep_Health(const FGameplayAttributeData& OldHealth) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, Health, OldHealth); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, Health)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetHealth() const
	{
		return Health.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetHealth(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetHealthAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitHealth(float NewVal)
	{
		Health.SetBaseValue(NewVal);
		Health.SetCurrentValue(NewVal);
	}

	//MaxHealth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHealth, Category = RPGAttributes)
		FGameplayAttributeData MaxHealth;
	UFUNCTION()
		void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, MaxHealth, OldMaxHealth); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, MaxHealth)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetMaxHealth() const
	{
		return MaxHealth.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetMaxHealth(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxHealthAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitMaxHealth(float NewVal)
	{
		MaxHealth.SetBaseValue(NewVal);
		MaxHealth.SetCurrentValue(NewVal);
	}

	//HealthRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_HealthRegenRate, Category = RPGAttributes)
		FGameplayAttributeData HealthRegenRate;
	UFUNCTION()
		void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, HealthRegenRate, OldHealthRegenRate); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, HealthRegenRate)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetHealthRegenRate() const
	{
		return HealthRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetHealthRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetHealthRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitHealthRegenRate(float NewVal)
	{
		HealthRegenRate.SetBaseValue(NewVal);
		HealthRegenRate.SetCurrentValue(NewVal);
	}

	//Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mana, Category = RPGAttributes)
		FGameplayAttributeData Mana;
	UFUNCTION()
		void OnRep_Mana(const FGameplayAttributeData& OldMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, Mana, OldMana); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, Mana)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetMana() const
	{
		return Mana.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetMana(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetManaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitMana(float NewVal)
	{
		Mana.SetBaseValue(NewVal);
		Mana.SetCurrentValue(NewVal);
	}

	//MaxMana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMana, Category = RPGAttributes)
		FGameplayAttributeData MaxMana;
	UFUNCTION()
		void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, MaxMana, OldMaxMana); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, MaxMana)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetMaxMana() const
	{
		return MaxMana.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetMaxMana(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxManaAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitMaxMana(float NewVal)
	{
		MaxMana.SetBaseValue(NewVal);
		MaxMana.SetCurrentValue(NewVal);
	}

	//ManaRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ManaRegenRate, Category = RPGAttributes)
		FGameplayAttributeData ManaRegenRate;
	UFUNCTION()
		void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, ManaRegenRate, OldManaRegenRate); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, ManaRegenRate)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetManaRegenRate() const
	{
		return ManaRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetManaRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetManaRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitManaRegenRate(float NewVal)
	{
		ManaRegenRate.SetBaseValue(NewVal);
		ManaRegenRate.SetCurrentValue(NewVal);
	}

	//Energy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Energy, Category = RPGAttributes)
		FGameplayAttributeData Energy;
	UFUNCTION()
		void OnRep_Energy(const FGameplayAttributeData& OldEnergy) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, Energy, OldEnergy); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, Energy)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetEnergy() const
	{
		return Energy.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetEnergy(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetEnergyAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitEnergy(float NewVal)
	{
		Energy.SetBaseValue(NewVal);
		Energy.SetCurrentValue(NewVal);
	}

	//MaxEnergy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxEnergy, Category = RPGAttributes)
		FGameplayAttributeData MaxEnergy;
	UFUNCTION()
		void OnRep_MaxEnergy(const FGameplayAttributeData& OldMaxEnergy) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, MaxEnergy, OldMaxEnergy); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, MaxEnergy)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetMaxEnergy() const
	{
		return MaxEnergy.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetMaxEnergy(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetMaxEnergyAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitMaxEnergy(float NewVal)
	{
		MaxEnergy.SetBaseValue(NewVal);
		MaxEnergy.SetCurrentValue(NewVal);
	}

	//EnergyRegenRate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_EnergyRegenRate, Category = RPGAttributes)
		FGameplayAttributeData EnergyRegenRate;
	UFUNCTION()
		void OnRep_EnergyRegenRate(const FGameplayAttributeData& OldEnergyRegenRate) { GAMEPLAYATTRIBUTE_REPNOTIFY(UGTPAttributeSet, EnergyRegenRate, OldEnergyRegenRate); }
	ATTRIBUTE_ACCESSORS(UGTPAttributeSet, EnergyRegenRate)
		UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		float GTPGetEnergyRegenRate() const
	{
		return EnergyRegenRate.GetCurrentValue();
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPSetEnergyRegenRate(float NewVal)
	{
		UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
		if (ensure(AbilityComp))
		{
			AbilityComp->SetNumericAttributeBase(GetEnergyRegenRateAttribute(), NewVal);
		};
	}
	UFUNCTION(BlueprintCallable, Category = RPGAttributes)
		void GTPInitEnergyRegenRate(float NewVal)
	{
		EnergyRegenRate.SetBaseValue(NewVal);
		EnergyRegenRate.SetCurrentValue(NewVal);
	}

	//Damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = RPGAttributes)
		FGameplayAttributeData Damage;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData& Data) override;
	/** Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes. (i.e. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before) */
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	
};
