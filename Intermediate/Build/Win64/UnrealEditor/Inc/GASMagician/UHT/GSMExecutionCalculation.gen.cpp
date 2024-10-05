// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Calculations/GSMExecutionCalculation.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectExecutionCalculation.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMExecutionCalculation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMExecutionCalculation();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMExecutionCalculation_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMExecutionCalculation Function GetOwningSpec
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics
{
	struct GSMExecutionCalculation_eventGetOwningSpec_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayEffectSpec ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetOwningSpec_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetOwningSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1577102320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetOwningSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::GSMExecutionCalculation_eventGetOwningSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::GSMExecutionCalculation_eventGetOwningSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetOwningSpec)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectSpec*)Z_Param__Result=P_THIS->GetOwningSpec(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetOwningSpec

// Begin Class UGSMExecutionCalculation Function GetSourceAbilitySystemComponent
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics
{
	struct GSMExecutionCalculation_eventGetSourceAbilitySystemComponent_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		const UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceAbilitySystemComponent_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetSourceAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::GSMExecutionCalculation_eventGetSourceAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::GSMExecutionCalculation_eventGetSourceAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetSourceAbilitySystemComponent)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetSourceAbilitySystemComponent(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetSourceAbilitySystemComponent

// Begin Class UGSMExecutionCalculation Function GetSourceActor
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics
{
	struct GSMExecutionCalculation_eventGetSourceActor_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceActor_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetSourceActor", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::GSMExecutionCalculation_eventGetSourceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::GSMExecutionCalculation_eventGetSourceActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetSourceActor)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetSourceActor(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetSourceActor

// Begin Class UGSMExecutionCalculation Function GetSourceActorTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics
{
	struct GSMExecutionCalculation_eventGetSourceActorTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the source actor tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the source actor tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceActorTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetSourceActorTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::GSMExecutionCalculation_eventGetSourceActorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::GSMExecutionCalculation_eventGetSourceActorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetSourceActorTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceActorTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetSourceActorTags

// Begin Class UGSMExecutionCalculation Function GetSourceAggregatedTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics
{
	struct GSMExecutionCalculation_eventGetSourceAggregatedTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceAggregatedTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetSourceAggregatedTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::GSMExecutionCalculation_eventGetSourceAggregatedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::GSMExecutionCalculation_eventGetSourceAggregatedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetSourceAggregatedTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceAggregatedTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetSourceAggregatedTags

// Begin Class UGSMExecutionCalculation Function GetSourceSpecTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics
{
	struct GSMExecutionCalculation_eventGetSourceSpecTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the source spec tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the source spec tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceSpecTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetSourceSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetSourceSpecTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::GSMExecutionCalculation_eventGetSourceSpecTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::GSMExecutionCalculation_eventGetSourceSpecTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetSourceSpecTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceSpecTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetSourceSpecTags

// Begin Class UGSMExecutionCalculation Function GetTargetAbilitySystemComponent
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics
{
	struct GSMExecutionCalculation_eventGetTargetAbilitySystemComponent_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		const UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetAbilitySystemComponent_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetTargetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::GSMExecutionCalculation_eventGetTargetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::GSMExecutionCalculation_eventGetTargetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetTargetAbilitySystemComponent)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetTargetAbilitySystemComponent(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetTargetAbilitySystemComponent

// Begin Class UGSMExecutionCalculation Function GetTargetActor
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics
{
	struct GSMExecutionCalculation_eventGetTargetActor_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetActor_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetTargetActor", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::GSMExecutionCalculation_eventGetTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::GSMExecutionCalculation_eventGetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetTargetActor)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTargetActor(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetTargetActor

// Begin Class UGSMExecutionCalculation Function GetTargetActorTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics
{
	struct GSMExecutionCalculation_eventGetTargetActorTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the target actor tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the target actor tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetActorTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetTargetActorTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::GSMExecutionCalculation_eventGetTargetActorTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::GSMExecutionCalculation_eventGetTargetActorTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetTargetActorTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetActorTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetTargetActorTags

// Begin Class UGSMExecutionCalculation Function GetTargetAggregatedTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics
{
	struct GSMExecutionCalculation_eventGetTargetAggregatedTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetAggregatedTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetTargetAggregatedTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::GSMExecutionCalculation_eventGetTargetAggregatedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::GSMExecutionCalculation_eventGetTargetAggregatedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetTargetAggregatedTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetAggregatedTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetTargetAggregatedTags

// Begin Class UGSMExecutionCalculation Function GetTargetSpecTags
struct Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics
{
	struct GSMExecutionCalculation_eventGetTargetSpecTags_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the target spec tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the target spec tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetSpecTags_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventGetTargetSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "GetTargetSpecTags", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::GSMExecutionCalculation_eventGetTargetSpecTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::GSMExecutionCalculation_eventGetTargetSpecTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execGetTargetSpecTags)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetSpecTags(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function GetTargetSpecTags

// Begin Class UGSMExecutionCalculation Function K2_Execute
struct GSMExecutionCalculation_eventK2_Execute_Parms
{
	FGameplayEffectCustomExecutionParameters ExecutionParameters;
	FGameplayModifierEvaluatedData ReturnValue;
};
static const FName NAME_UGSMExecutionCalculation_K2_Execute = FName(TEXT("K2_Execute"));
FGameplayModifierEvaluatedData UGSMExecutionCalculation::K2_Execute(FGameplayEffectCustomExecutionParameters const& ExecutionParameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UGSMExecutionCalculation_K2_Execute);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		GSMExecutionCalculation_eventK2_Execute_Parms Parms;
		Parms.ExecutionParameters=ExecutionParameters;
		const_cast<UGSMExecutionCalculation*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UGSMExecutionCalculation*>(this)->K2_Execute_Implementation(ExecutionParameters);
	}
}
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Execute (GAS Magician)" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_Execute_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_Execute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, METADATA_PARAMS(0, nullptr) }; // 1669979306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_Execute", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::PropPointers), sizeof(GSMExecutionCalculation_eventK2_Execute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMExecutionCalculation_eventK2_Execute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_Execute)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayModifierEvaluatedData*)Z_Param__Result=P_THIS->K2_Execute_Implementation(Z_Param_Out_ExecutionParameters);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_Execute

// Begin Class UGSMExecutionCalculation Function K2_GetCapturedAttributeBonusMagnitude
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics
{
	struct GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayAttribute Attribute;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Captured Attribute Bonus Magnitude" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeBonusMagnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetCapturedAttributeBonusMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeBonusMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetCapturedAttributeBonusMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeBonusMagnitude(Z_Param_Out_ExecutionParameters,Z_Param_Attribute,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetCapturedAttributeBonusMagnitude

// Begin Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitude
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics
{
	struct GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayAttribute Attribute;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Captured Attribute Magnitude" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeMagnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetCapturedAttributeMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeMagnitude(Z_Param_Out_ExecutionParameters,Z_Param_Attribute,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitude

// Begin Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitudeBaseValue
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics
{
	struct GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayAttribute Attribute;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Captured Attribute Magnitude Base Value" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeMagnitudeBaseValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetCapturedAttributeMagnitudeBaseValue", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeBaseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitudeBaseValue)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeMagnitudeBaseValue(Z_Param_Out_ExecutionParameters,Z_Param_Attribute);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitudeBaseValue

// Begin Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitudeWithBase
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics
{
	struct GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayAttribute Attribute;
		float InBaseValue;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Captured Attribute Magnitude With Base" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeMagnitudeWithBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBaseValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_InBaseValue = { "InBaseValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, InBaseValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_InBaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetCapturedAttributeMagnitudeWithBase", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::GSMExecutionCalculation_eventK2_GetCapturedAttributeMagnitudeWithBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitudeWithBase)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBaseValue);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeMagnitudeWithBase(Z_Param_Out_ExecutionParameters,Z_Param_Attribute,Z_Param_InBaseValue,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetCapturedAttributeMagnitudeWithBase

// Begin Class UGSMExecutionCalculation Function K2_GetTransientAggregatorBaseValue
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics
{
	struct GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTag AggregatorIdentifier;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Transient Aggregator Base Value" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetTransientAggregatorBaseValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatorIdentifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_AggregatorIdentifier = { "AggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms, AggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatorIdentifier_MetaData), NewProp_AggregatorIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_AggregatorIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetTransientAggregatorBaseValue", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorBaseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetTransientAggregatorBaseValue)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AggregatorIdentifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetTransientAggregatorBaseValue(Z_Param_Out_ExecutionParameters,Z_Param_Out_AggregatorIdentifier);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetTransientAggregatorBaseValue

// Begin Class UGSMExecutionCalculation Function K2_GetTransientAggregatorBonusMagnitude
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics
{
	struct GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTag AggregatorIdentifier;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Transient Aggregator Bonus Magnitude" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetTransientAggregatorBonusMagnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatorIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_AggregatorIdentifier = { "AggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms, AggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatorIdentifier_MetaData), NewProp_AggregatorIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_AggregatorIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetTransientAggregatorBonusMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorBonusMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetTransientAggregatorBonusMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AggregatorIdentifier);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetTransientAggregatorBonusMagnitude(Z_Param_Out_ExecutionParameters,Z_Param_Out_AggregatorIdentifier,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetTransientAggregatorBonusMagnitude

// Begin Class UGSMExecutionCalculation Function K2_GetTransientAggregatorMagnitude
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics
{
	struct GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTag AggregatorIdentifier;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Transient Aggregator Magnitude" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetTransientAggregatorMagnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatorIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_AggregatorIdentifier = { "AggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms, AggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatorIdentifier_MetaData), NewProp_AggregatorIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_AggregatorIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetTransientAggregatorMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetTransientAggregatorMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AggregatorIdentifier);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetTransientAggregatorMagnitude(Z_Param_Out_ExecutionParameters,Z_Param_Out_AggregatorIdentifier,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetTransientAggregatorMagnitude

// Begin Class UGSMExecutionCalculation Function K2_GetTransientAggregatorMagnitudeWithBase
struct Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics
{
	struct GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParameters;
		FGameplayTag AggregatorIdentifier;
		float BaseValue;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Get Transient Aggregator Magnitude With Base" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
		{ "ScriptName", "GetTransientAggregatorMagnitudeWithBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatorIdentifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_ExecutionParameters = { "ExecutionParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, ExecutionParameters), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionParameters_MetaData), NewProp_ExecutionParameters_MetaData) }; // 2964209672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_AggregatorIdentifier = { "AggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, AggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggregatorIdentifier_MetaData), NewProp_AggregatorIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, BaseValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_ExecutionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_AggregatorIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_BaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMExecutionCalculation, nullptr, "K2_GetTransientAggregatorMagnitudeWithBase", nullptr, nullptr, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::GSMExecutionCalculation_eventK2_GetTransientAggregatorMagnitudeWithBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMExecutionCalculation::execK2_GetTransientAggregatorMagnitudeWithBase)
{
	P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParameters);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_AggregatorIdentifier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseValue);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetTransientAggregatorMagnitudeWithBase(Z_Param_Out_ExecutionParameters,Z_Param_Out_AggregatorIdentifier,Z_Param_BaseValue,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UGSMExecutionCalculation Function K2_GetTransientAggregatorMagnitudeWithBase

// Begin Class UGSMExecutionCalculation
void UGSMExecutionCalculation::StaticRegisterNativesUGSMExecutionCalculation()
{
	UClass* Class = UGSMExecutionCalculation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningSpec", &UGSMExecutionCalculation::execGetOwningSpec },
		{ "GetSourceAbilitySystemComponent", &UGSMExecutionCalculation::execGetSourceAbilitySystemComponent },
		{ "GetSourceActor", &UGSMExecutionCalculation::execGetSourceActor },
		{ "GetSourceActorTags", &UGSMExecutionCalculation::execGetSourceActorTags },
		{ "GetSourceAggregatedTags", &UGSMExecutionCalculation::execGetSourceAggregatedTags },
		{ "GetSourceSpecTags", &UGSMExecutionCalculation::execGetSourceSpecTags },
		{ "GetTargetAbilitySystemComponent", &UGSMExecutionCalculation::execGetTargetAbilitySystemComponent },
		{ "GetTargetActor", &UGSMExecutionCalculation::execGetTargetActor },
		{ "GetTargetActorTags", &UGSMExecutionCalculation::execGetTargetActorTags },
		{ "GetTargetAggregatedTags", &UGSMExecutionCalculation::execGetTargetAggregatedTags },
		{ "GetTargetSpecTags", &UGSMExecutionCalculation::execGetTargetSpecTags },
		{ "K2_Execute", &UGSMExecutionCalculation::execK2_Execute },
		{ "K2_GetCapturedAttributeBonusMagnitude", &UGSMExecutionCalculation::execK2_GetCapturedAttributeBonusMagnitude },
		{ "K2_GetCapturedAttributeMagnitude", &UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitude },
		{ "K2_GetCapturedAttributeMagnitudeBaseValue", &UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitudeBaseValue },
		{ "K2_GetCapturedAttributeMagnitudeWithBase", &UGSMExecutionCalculation::execK2_GetCapturedAttributeMagnitudeWithBase },
		{ "K2_GetTransientAggregatorBaseValue", &UGSMExecutionCalculation::execK2_GetTransientAggregatorBaseValue },
		{ "K2_GetTransientAggregatorBonusMagnitude", &UGSMExecutionCalculation::execK2_GetTransientAggregatorBonusMagnitude },
		{ "K2_GetTransientAggregatorMagnitude", &UGSMExecutionCalculation::execK2_GetTransientAggregatorMagnitude },
		{ "K2_GetTransientAggregatorMagnitudeWithBase", &UGSMExecutionCalculation::execK2_GetTransientAggregatorMagnitudeWithBase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMExecutionCalculation);
UClass* Z_Construct_UClass_UGSMExecutionCalculation_NoRegister()
{
	return UGSMExecutionCalculation::StaticClass();
}
struct Z_Construct_UClass_UGSMExecutionCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Calculations/GSMExecutionCalculation.h" },
		{ "ModuleRelativePath", "Public/Calculations/GSMExecutionCalculation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetOwningSpec, "GetOwningSpec" }, // 4215622141
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAbilitySystemComponent, "GetSourceAbilitySystemComponent" }, // 3941937844
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActor, "GetSourceActor" }, // 2966262502
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceActorTags, "GetSourceActorTags" }, // 2780878302
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceAggregatedTags, "GetSourceAggregatedTags" }, // 3876974544
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetSourceSpecTags, "GetSourceSpecTags" }, // 3106585692
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAbilitySystemComponent, "GetTargetAbilitySystemComponent" }, // 1162456948
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActor, "GetTargetActor" }, // 2585677240
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetActorTags, "GetTargetActorTags" }, // 2740573454
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetAggregatedTags, "GetTargetAggregatedTags" }, // 3717517015
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_GetTargetSpecTags, "GetTargetSpecTags" }, // 2505051886
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_Execute, "K2_Execute" }, // 481995435
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeBonusMagnitude, "K2_GetCapturedAttributeBonusMagnitude" }, // 2346249949
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitude, "K2_GetCapturedAttributeMagnitude" }, // 2588208907
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeBaseValue, "K2_GetCapturedAttributeMagnitudeBaseValue" }, // 3099504941
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetCapturedAttributeMagnitudeWithBase, "K2_GetCapturedAttributeMagnitudeWithBase" }, // 3778790227
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBaseValue, "K2_GetTransientAggregatorBaseValue" }, // 3298831265
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorBonusMagnitude, "K2_GetTransientAggregatorBonusMagnitude" }, // 1052703878
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitude, "K2_GetTransientAggregatorMagnitude" }, // 2480200955
		{ &Z_Construct_UFunction_UGSMExecutionCalculation_K2_GetTransientAggregatorMagnitudeWithBase, "K2_GetTransientAggregatorMagnitudeWithBase" }, // 2859155312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMExecutionCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMExecutionCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMExecutionCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMExecutionCalculation_Statics::ClassParams = {
	&UGSMExecutionCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMExecutionCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMExecutionCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMExecutionCalculation()
{
	if (!Z_Registration_Info_UClass_UGSMExecutionCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMExecutionCalculation.OuterSingleton, Z_Construct_UClass_UGSMExecutionCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMExecutionCalculation.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMExecutionCalculation>()
{
	return UGSMExecutionCalculation::StaticClass();
}
UGSMExecutionCalculation::UGSMExecutionCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMExecutionCalculation);
UGSMExecutionCalculation::~UGSMExecutionCalculation() {}
// End Class UGSMExecutionCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMExecutionCalculation, UGSMExecutionCalculation::StaticClass, TEXT("UGSMExecutionCalculation"), &Z_Registration_Info_UClass_UGSMExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMExecutionCalculation), 509686552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_2426181895(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMExecutionCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
