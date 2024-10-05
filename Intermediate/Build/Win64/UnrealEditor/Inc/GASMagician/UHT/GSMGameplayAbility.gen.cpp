// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMGameplayAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GASMagician/Public/GSMGameplayEffectContainer.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCooldown_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCost_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayAbility();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayAbility_NoRegister();
GASMAGICIAN_API UEnum* Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainer();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Enum EGSMAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy;
static UEnum* EGSMAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("EGSMAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.OuterSingleton;
}
template<> GASMAGICIAN_API UEnum* StaticEnum<EGSMAbilityActivationPolicy>()
{
	return EGSMAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGSMAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EGSMAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "EGSMAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGSMAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
#endif
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "EGSMAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGSMAbilityActivationPolicy::OnInputTriggered", (int64)EGSMAbilityActivationPolicy::OnInputTriggered },
		{ "EGSMAbilityActivationPolicy::WhileInputActive", (int64)EGSMAbilityActivationPolicy::WhileInputActive },
		{ "EGSMAbilityActivationPolicy::OnSpawn", (int64)EGSMAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	"EGSMAbilityActivationPolicy",
	"EGSMAbilityActivationPolicy",
	Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy.InnerSingleton;
}
// End Enum EGSMAbilityActivationPolicy

// Begin Class UGSMGameplayAbility Function ApplyEffectContainer
struct Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics
{
	struct GSMGameplayAbility_eventApplyEffectContainer_Parms
	{
		FGameplayTag ContainerTag;
		FGameplayEventData EventData;
		int32 OverrideGameplayLevel;
		TArray<FActiveGameplayEffectHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a gameplay effect container, by creating and then applying the spec */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a gameplay effect container, by creating and then applying the spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainer_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ContainerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_OverrideGameplayLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "ApplyEffectContainer", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::GSMGameplayAbility_eventApplyEffectContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::GSMGameplayAbility_eventApplyEffectContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execApplyEffectContainer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
	P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainer(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function ApplyEffectContainer

// Begin Class UGSMGameplayAbility Function ApplyEffectContainerSpec
struct Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics
{
	struct GSMGameplayAbility_eventApplyEffectContainerSpec_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
		TArray<FActiveGameplayEffectHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a gameplay effect container spec that was previously created */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a gameplay effect container spec that was previously created" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerSpec_MetaData), NewProp_ContainerSpec_MetaData) }; // 3217815265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventApplyEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ContainerSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "ApplyEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::GSMGameplayAbility_eventApplyEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::GSMGameplayAbility_eventApplyEffectContainerSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execApplyEffectContainerSpec)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->ApplyEffectContainerSpec(Z_Param_Out_ContainerSpec);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function ApplyEffectContainerSpec

// Begin Class UGSMGameplayAbility Function K2_OnAbilityAdded
static const FName NAME_UGSMGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void UGSMGameplayAbility::K2_OnAbilityAdded()
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMGameplayAbility_K2_OnAbilityAdded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGSMGameplayAbility Function K2_OnAbilityAdded

// Begin Class UGSMGameplayAbility Function K2_OnAbilityRemoved
static const FName NAME_UGSMGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void UGSMGameplayAbility::K2_OnAbilityRemoved()
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMGameplayAbility_K2_OnAbilityRemoved);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGSMGameplayAbility Function K2_OnAbilityRemoved

// Begin Class UGSMGameplayAbility Function K2_OnPawnAvatarSet
static const FName NAME_UGSMGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
void UGSMGameplayAbility::K2_OnPawnAvatarSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMGameplayAbility_K2_OnPawnAvatarSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
#endif
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGSMGameplayAbility Function K2_OnPawnAvatarSet

// Begin Class UGSMGameplayAbility Function MakeEffectContainerSpec
struct Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics
{
	struct GSMGameplayAbility_eventMakeEffectContainerSpec_Parms
	{
		FGameplayTag ContainerTag;
		FGameplayEventData EventData;
		int32 OverrideGameplayLevel;
		FGSMGameplayEffectContainerSpec ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpec_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpec_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpec_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 3217815265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ContainerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_OverrideGameplayLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "MakeEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::GSMGameplayAbility_eventMakeEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::GSMGameplayAbility_eventMakeEffectContainerSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execMakeEffectContainerSpec)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
	P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGSMGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpec(Z_Param_ContainerTag,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function MakeEffectContainerSpec

// Begin Class UGSMGameplayAbility Function MakeEffectContainerSpecFromContainer
struct Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics
{
	struct GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms
	{
		FGSMGameplayEffectContainer Container;
		FGameplayEventData EventData;
		int32 OverrideGameplayLevel;
		FGSMGameplayEffectContainerSpec ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventData" },
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make gameplay effect container spec to be applied later, using the passed in container */" },
#endif
		{ "CPP_Default_OverrideGameplayLevel", "-1" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make gameplay effect container spec to be applied later, using the passed in container" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Container;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideGameplayLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, Container), Z_Construct_UScriptStruct_FGSMGameplayEffectContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) }; // 381989606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventData_MetaData), NewProp_EventData_MetaData) }; // 1231635826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel = { "OverrideGameplayLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, OverrideGameplayLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 3217815265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_OverrideGameplayLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "MakeEffectContainerSpecFromContainer", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::GSMGameplayAbility_eventMakeEffectContainerSpecFromContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execMakeEffectContainerSpecFromContainer)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainer,Z_Param_Out_Container);
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_EventData);
	P_GET_PROPERTY(FIntProperty,Z_Param_OverrideGameplayLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGSMGameplayEffectContainerSpec*)Z_Param__Result=P_THIS->MakeEffectContainerSpecFromContainer(Z_Param_Out_Container,Z_Param_Out_EventData,Z_Param_OverrideGameplayLevel);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function MakeEffectContainerSpecFromContainer

// Begin Class UGSMGameplayAbility Function MakeGameplayAbilityTargetDataHandleFromActorArray
struct Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics
{
	struct GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromActorArray_Parms
	{
		TArray<AActor*> TargetActors;
		FGameplayAbilityTargetDataHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromActorArray_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActors_MetaData), NewProp_TargetActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromActorArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_TargetActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_TargetActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "MakeGameplayAbilityTargetDataHandleFromActorArray", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromActorArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromActorArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execMakeGameplayAbilityTargetDataHandleFromActorArray)
{
	P_GET_TARRAY(AActor*,Z_Param_TargetActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityTargetDataHandle*)Z_Param__Result=P_THIS->MakeGameplayAbilityTargetDataHandleFromActorArray(Z_Param_TargetActors);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function MakeGameplayAbilityTargetDataHandleFromActorArray

// Begin Class UGSMGameplayAbility Function MakeGameplayAbilityTargetDataHandleFromHitResults
struct Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics
{
	struct GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromHitResults_Parms
	{
		TArray<FHitResult> HitResults;
		FGameplayAbilityTargetDataHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromHitResults_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResults_MetaData), NewProp_HitResults_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromHitResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_HitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayAbility, nullptr, "MakeGameplayAbilityTargetDataHandleFromHitResults", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromHitResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::GSMGameplayAbility_eventMakeGameplayAbilityTargetDataHandleFromHitResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayAbility::execMakeGameplayAbilityTargetDataHandleFromHitResults)
{
	P_GET_TARRAY(FHitResult,Z_Param_HitResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityTargetDataHandle*)Z_Param__Result=P_THIS->MakeGameplayAbilityTargetDataHandleFromHitResults(Z_Param_HitResults);
	P_NATIVE_END;
}
// End Class UGSMGameplayAbility Function MakeGameplayAbilityTargetDataHandleFromHitResults

// Begin Class UGSMGameplayAbility
void UGSMGameplayAbility::StaticRegisterNativesUGSMGameplayAbility()
{
	UClass* Class = UGSMGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffectContainer", &UGSMGameplayAbility::execApplyEffectContainer },
		{ "ApplyEffectContainerSpec", &UGSMGameplayAbility::execApplyEffectContainerSpec },
		{ "MakeEffectContainerSpec", &UGSMGameplayAbility::execMakeEffectContainerSpec },
		{ "MakeEffectContainerSpecFromContainer", &UGSMGameplayAbility::execMakeEffectContainerSpecFromContainer },
		{ "MakeGameplayAbilityTargetDataHandleFromActorArray", &UGSMGameplayAbility::execMakeGameplayAbilityTargetDataHandleFromActorArray },
		{ "MakeGameplayAbilityTargetDataHandleFromHitResults", &UGSMGameplayAbility::execMakeGameplayAbilityTargetDataHandleFromHitResults },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayAbility);
UClass* Z_Construct_UClass_UGSMGameplayAbility_NoRegister()
{
	return UGSMGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GSMGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContainerMap_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of gameplay tags to gameplay effect containers */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of gameplay tags to gameplay effect containers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "GASMagician|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "GASMagician|Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "GASMagician|Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCooldowns_Inner_MetaData[] = {
		{ "Category", "GASMagician|Cooldowns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCooldowns_MetaData[] = {
		{ "Category", "GASMagician|Cooldowns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GSMGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EffectContainerMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCooldowns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCooldowns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainer, "ApplyEffectContainer" }, // 3635166079
		{ &Z_Construct_UFunction_UGSMGameplayAbility_ApplyEffectContainerSpec, "ApplyEffectContainerSpec" }, // 3958552800
		{ &Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 3913846148
		{ &Z_Construct_UFunction_UGSMGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 2025031860
		{ &Z_Construct_UFunction_UGSMGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 556451930
		{ &Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpec, "MakeEffectContainerSpec" }, // 631254644
		{ &Z_Construct_UFunction_UGSMGameplayAbility_MakeEffectContainerSpecFromContainer, "MakeEffectContainerSpecFromContainer" }, // 2123304827
		{ &Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray, "MakeGameplayAbilityTargetDataHandleFromActorArray" }, // 625858738
		{ &Z_Construct_UFunction_UGSMGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults, "MakeGameplayAbilityTargetDataHandleFromHitResults" }, // 3345968292
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGSMGameplayEffectContainer, METADATA_PARAMS(0, nullptr) }; // 381989606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp = { "EffectContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap = { "EffectContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameplayAbility, EffectContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContainerMap_MetaData), NewProp_EffectContainerMap_MetaData) }; // 1298103297 381989606
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameplayAbility, ActivationPolicy), Z_Construct_UEnum_GASMagician_EGSMAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 4056252640
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGSMAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCooldowns_Inner = { "AdditionalCooldowns", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGSMAbilityCooldown_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCooldowns_Inner_MetaData), NewProp_AdditionalCooldowns_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCooldowns = { "AdditionalCooldowns", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameplayAbility, AdditionalCooldowns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCooldowns_MetaData), NewProp_AdditionalCooldowns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_EffectContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCooldowns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbility_Statics::NewProp_AdditionalCooldowns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayAbility_Statics::ClassParams = {
	&UGSMGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayAbility.OuterSingleton, Z_Construct_UClass_UGSMGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayAbility.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameplayAbility>()
{
	return UGSMGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayAbility);
UGSMGameplayAbility::~UGSMGameplayAbility() {}
// End Class UGSMGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGSMAbilityActivationPolicy_StaticEnum, TEXT("EGSMAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EGSMAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4056252640U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayAbility, UGSMGameplayAbility::StaticClass, TEXT("UGSMGameplayAbility"), &Z_Registration_Info_UClass_UGSMGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayAbility), 3013521062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_1973929874(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
