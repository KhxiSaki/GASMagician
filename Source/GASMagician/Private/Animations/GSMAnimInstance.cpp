// Copyright Epic Games, Inc. All Rights Reserved.

#include "Animations/GSMAnimInstance.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/Actor.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

#include "AbilitySystemGlobals.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GSMAnimInstance)

void UGSMAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}

void UGSMAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* AbilityComponent)
{
	check(AbilityComponent);

	GameplayTagPropertyMap.Initialize(this, AbilityComponent);
	ReceiveAbilitySystem(AbilityComponent);
}

#if WITH_EDITOR
EDataValidationResult UGSMAnimInstance::IsDataValid(FDataValidationContext& Context) const
{
	Super::IsDataValid(Context);

	GameplayTagPropertyMap.IsDataValid(this, Context);

	return ((Context.GetNumErrors() > 0) ? EDataValidationResult::Invalid : EDataValidationResult::Valid);
}
#endif // WITH_EDITOR