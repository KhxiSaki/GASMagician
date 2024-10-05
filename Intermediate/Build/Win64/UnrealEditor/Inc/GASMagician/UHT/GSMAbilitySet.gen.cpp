// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMAbilitySet.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySet();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySet_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayAbility_NoRegister();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FGSMAbilitySet_GameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility;
class UScriptStruct* FGSMAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilitySet_GameplayAbility>()
{
	return FGSMAbilitySet_GameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGSMAbilitySet_GameplayAbility\n *\n *\x09""Data used by the ability set to grant gameplay abilities.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGSMAbilitySet_GameplayAbility\n\n    Data used by the ability set to grant gameplay abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay ability to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of ability to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSMGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FGSMAbilitySet_GameplayAbility),
	alignof(FGSMAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility.InnerSingleton;
}
// End ScriptStruct FGSMAbilitySet_GameplayAbility

// Begin ScriptStruct FGSMAbilitySet_GameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect;
class UScriptStruct* FGSMAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilitySet_GameplayEffect>()
{
	return FGSMAbilitySet_GameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGSMAbilitySet_GameplayEffect\n *\n *\x09""Data used by the ability set to grant gameplay effects.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGSMAbilitySet_GameplayEffect\n\n    Data used by the ability set to grant gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilitySet_GameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilitySet_GameplayEffect",
	Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::PropPointers),
	sizeof(FGSMAbilitySet_GameplayEffect),
	alignof(FGSMAbilitySet_GameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect.InnerSingleton;
}
// End ScriptStruct FGSMAbilitySet_GameplayEffect

// Begin ScriptStruct FGSMAbilitySet_AttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet;
class UScriptStruct* FGSMAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilitySet_AttributeSet>()
{
	return FGSMAbilitySet_AttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGSMAbilitySet_AttributeSet\n *\n *\x09""Data used by the ability set to grant attribute sets.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGSMAbilitySet_AttributeSet\n\n    Data used by the ability set to grant attribute sets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilitySet_AttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilitySet_AttributeSet",
	Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::PropPointers),
	sizeof(FGSMAbilitySet_AttributeSet),
	alignof(FGSMAbilitySet_AttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet.InnerSingleton;
}
// End ScriptStruct FGSMAbilitySet_AttributeSet

// Begin ScriptStruct FGSMAbilitySet_GrantedHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles;
class UScriptStruct* FGSMAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilitySet_GrantedHandles>()
{
	return FGSMAbilitySet_GrantedHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FGSMAbilitySet_GrantedHandles\n *\n *\x09""Data used to store handles to what has been granted by the ability set.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGSMAbilitySet_GrantedHandles\n\n    Data used to store handles to what has been granted by the ability set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted abilities.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted gameplay effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointers to the granted attribute sets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to the granted attribute sets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandles_MetaData), NewProp_GameplayEffectHandles_MetaData) }; // 290910411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributeSets_MetaData), NewProp_GrantedAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FGSMAbilitySet_GrantedHandles),
	alignof(FGSMAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles.InnerSingleton;
}
// End ScriptStruct FGSMAbilitySet_GrantedHandles

// Begin Class UGSMAbilitySet
void UGSMAbilitySet::StaticRegisterNativesUGSMAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilitySet);
UClass* Z_Construct_UClass_UGSMAbilitySet_NoRegister()
{
	return UGSMAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGSMAbilitySet\n *\n *\x09Non-mutable data asset used to grant gameplay abilities and gameplay effects.\n */" },
#endif
		{ "IncludePath", "GSMAbilitySet.h" },
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGSMAbilitySet\n\n    Non-mutable data asset used to grant gameplay abilities and gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
		{ "TitleProperty", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attribute Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1006447709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 1006447709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect, METADATA_PARAMS(0, nullptr) }; // 1134022972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayEffects_MetaData), NewProp_GrantedGameplayEffects_MetaData) }; // 1134022972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet, METADATA_PARAMS(0, nullptr) }; // 3585252143
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 3585252143
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySet_Statics::NewProp_GrantedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilitySet_Statics::ClassParams = {
	&UGSMAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySet_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilitySet()
{
	if (!Z_Registration_Info_UClass_UGSMAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilitySet.OuterSingleton, Z_Construct_UClass_UGSMAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilitySet.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilitySet>()
{
	return UGSMAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilitySet);
UGSMAbilitySet::~UGSMAbilitySet() {}
// End Class UGSMAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSMAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("GSMAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilitySet_GameplayAbility), 1006447709U) },
		{ FGSMAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("GSMAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_GSMAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilitySet_GameplayEffect), 1134022972U) },
		{ FGSMAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("GSMAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_GSMAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilitySet_AttributeSet), 3585252143U) },
		{ FGSMAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("GSMAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_GSMAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilitySet_GrantedHandles), 4162080396U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilitySet, UGSMAbilitySet::StaticClass, TEXT("UGSMAbilitySet"), &Z_Registration_Info_UClass_UGSMAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilitySet), 556584236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_3224612862(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
