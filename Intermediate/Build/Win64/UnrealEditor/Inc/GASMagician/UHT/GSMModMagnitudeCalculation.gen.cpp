// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Calculations/GSMModMagnitudeCalculation.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModMagnitudeCalculation() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMModMagnitudeCalculation();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMModMagnitudeCalculation_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMModMagnitudeCalculation Function AttemptCalculateDurationFromDef
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics
{
	struct GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms
	{
		FGameplayEffectSpec Spec;
		float OutDefDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper function to attempt to calculate the duration of the spec from its GE definition\n\x09 * \n\x09 * @param OutDefDuration\x09""Computed duration of the spec from its GE definition; Not the actual duration of the spec\n\x09 * \n\x09 * @return True if the calculation was successful, false if it was not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to attempt to calculate the duration of the spec from its GE definition\n\n@param OutDefDuration        Computed duration of the spec from its GE definition; Not the actual duration of the spec\n\n@return True if the calculation was successful, false if it was not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDefDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_OutDefDuration = { "OutDefDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms, OutDefDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms), &Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_OutDefDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "AttemptCalculateDurationFromDef", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::GSMModMagnitudeCalculation_eventAttemptCalculateDurationFromDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execAttemptCalculateDurationFromDef)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDefDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AttemptCalculateDurationFromDef(Z_Param_Out_Spec,Z_Param_Out_OutDefDuration);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function AttemptCalculateDurationFromDef

// Begin Class UGSMModMagnitudeCalculation Function GetAllAssetTags
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics
{
	struct GSMModMagnitudeCalculation_eventGetAllAssetTags_Parms
	{
		FGameplayEffectSpec Spec;
		FGameplayTagContainer OutContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Appends all tags that apply to this gameplay effect spec */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Appends all tags that apply to this gameplay effect spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllAssetTags_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::NewProp_OutContainer = { "OutContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllAssetTags_Parms, OutContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::NewProp_OutContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetAllAssetTags", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::GSMModMagnitudeCalculation_eventGetAllAssetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::GSMModMagnitudeCalculation_eventGetAllAssetTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetAllAssetTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllAssetTags(Z_Param_Out_Spec,Z_Param_Out_OutContainer);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetAllAssetTags

// Begin Class UGSMModMagnitudeCalculation Function GetAllBlockedAbilityTags
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics
{
	struct GSMModMagnitudeCalculation_eventGetAllBlockedAbilityTags_Parms
	{
		FGameplayEffectSpec Spec;
		FGameplayTagContainer OutContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Appends all blocked ability tags granted by this gameplay effect spec */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Appends all blocked ability tags granted by this gameplay effect spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllBlockedAbilityTags_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::NewProp_OutContainer = { "OutContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllBlockedAbilityTags_Parms, OutContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::NewProp_OutContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetAllBlockedAbilityTags", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::GSMModMagnitudeCalculation_eventGetAllBlockedAbilityTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::GSMModMagnitudeCalculation_eventGetAllBlockedAbilityTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetAllBlockedAbilityTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllBlockedAbilityTags(Z_Param_Out_Spec,Z_Param_Out_OutContainer);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetAllBlockedAbilityTags

// Begin Class UGSMModMagnitudeCalculation Function GetAllGrantedTags
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics
{
	struct GSMModMagnitudeCalculation_eventGetAllGrantedTags_Parms
	{
		FGameplayEffectSpec Spec;
		FGameplayTagContainer OutContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Appends all tags granted by this gameplay effect spec */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Appends all tags granted by this gameplay effect spec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllGrantedTags_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::NewProp_OutContainer = { "OutContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetAllGrantedTags_Parms, OutContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::NewProp_OutContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetAllGrantedTags", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::GSMModMagnitudeCalculation_eventGetAllGrantedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::GSMModMagnitudeCalculation_eventGetAllGrantedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetAllGrantedTags)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllGrantedTags(Z_Param_Out_Spec,Z_Param_Out_OutContainer);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetAllGrantedTags

// Begin Class UGSMModMagnitudeCalculation Function GetContextFromEffectSpec
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics
{
	struct GSMModMagnitudeCalculation_eventGetContextFromEffectSpec_Parms
	{
		FGameplayEffectSpec Spec;
		FGameplayEffectContextHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetContextFromEffectSpec_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetContextFromEffectSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetContextFromEffectSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::GSMModMagnitudeCalculation_eventGetContextFromEffectSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::GSMModMagnitudeCalculation_eventGetContextFromEffectSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetContextFromEffectSpec)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectContextHandle*)Z_Param__Result=P_THIS->GetContextFromEffectSpec(Z_Param_Out_Spec);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetContextFromEffectSpec

// Begin Class UGSMModMagnitudeCalculation Function GetDuration
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics
{
	struct GSMModMagnitudeCalculation_eventGetDuration_Parms
	{
		FGameplayEffectSpec Spec;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetDuration_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::GSMModMagnitudeCalculation_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::GSMModMagnitudeCalculation_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetDuration)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDuration(Z_Param_Out_Spec);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetDuration

// Begin Class UGSMModMagnitudeCalculation Function GetModifierMagnitude
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics
{
	struct GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms
	{
		FGameplayEffectSpec Spec;
		int32 ModifierIdx;
		bool bFactorInStackCount;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the computed magnitude of the modifier on the spec with the specified index\n\x09 * \n\x09 * @param ModifierIndx\x09\x09\x09Modifier to get\n\x09 * @param bFactorInStackCount\x09If true, the calculation will include the stack count\n\x09 * \n\x09 * @return Computed magnitude\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the computed magnitude of the modifier on the spec with the specified index\n\n@param ModifierIndx                  Modifier to get\n@param bFactorInStackCount   If true, the calculation will include the stack count\n\n@return Computed magnitude" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModifierIdx;
	static void NewProp_bFactorInStackCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFactorInStackCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_ModifierIdx = { "ModifierIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms, ModifierIdx), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_bFactorInStackCount_SetBit(void* Obj)
{
	((GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms*)Obj)->bFactorInStackCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_bFactorInStackCount = { "bFactorInStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms), &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_bFactorInStackCount_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_ModifierIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_bFactorInStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetModifierMagnitude", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::GSMModMagnitudeCalculation_eventGetModifierMagnitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetModifierMagnitude)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_PROPERTY(FIntProperty,Z_Param_ModifierIdx);
	P_GET_UBOOL(Z_Param_bFactorInStackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetModifierMagnitude(Z_Param_Out_Spec,Z_Param_ModifierIdx,Z_Param_bFactorInStackCount);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetModifierMagnitude

// Begin Class UGSMModMagnitudeCalculation Function GetPeriod
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics
{
	struct GSMModMagnitudeCalculation_eventGetPeriod_Parms
	{
		FGameplayEffectSpec Spec;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetPeriod_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetPeriod_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetPeriod", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::GSMModMagnitudeCalculation_eventGetPeriod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::GSMModMagnitudeCalculation_eventGetPeriod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetPeriod)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPeriod(Z_Param_Out_Spec);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetPeriod

// Begin Class UGSMModMagnitudeCalculation Function GetStackCount
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics
{
	struct GSMModMagnitudeCalculation_eventGetStackCount_Parms
	{
		FGameplayEffectSpec Spec;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the stack count for this GE spec. */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stack count for this GE spec." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetStackCount_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventGetStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "GetStackCount", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::GSMModMagnitudeCalculation_eventGetStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::GSMModMagnitudeCalculation_eventGetStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execGetStackCount)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackCount(Z_Param_Out_Spec);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function GetStackCount

// Begin Class UGSMModMagnitudeCalculation Function HasValidCapturedAttributes
struct Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics
{
	struct GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms
	{
		FGameplayEffectSpec Spec;
		TArray<FGameplayEffectAttributeCaptureDefinition> InCaptureDefsToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines if the spec has capture specs with valid captures for all of the specified definitions.\n\x09 * \n\x09 * @param InCaptureDefsToCheck\x09""Capture definitions to check for\n\x09 * \n\x09 * @return True if the container has valid capture attributes for all of the specified definitions, false if it does not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if the spec has capture specs with valid captures for all of the specified definitions.\n\n@param InCaptureDefsToCheck  Capture definitions to check for\n\n@return True if the container has valid capture attributes for all of the specified definitions, false if it does not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCaptureDefsToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCaptureDefsToCheck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCaptureDefsToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_InCaptureDefsToCheck_Inner = { "InCaptureDefsToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(0, nullptr) }; // 4129537336
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_InCaptureDefsToCheck = { "InCaptureDefsToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms, InCaptureDefsToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCaptureDefsToCheck_MetaData), NewProp_InCaptureDefsToCheck_MetaData) }; // 4129537336
void Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms), &Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_InCaptureDefsToCheck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_InCaptureDefsToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMModMagnitudeCalculation, nullptr, "HasValidCapturedAttributes", nullptr, nullptr, Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::GSMModMagnitudeCalculation_eventHasValidCapturedAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMModMagnitudeCalculation::execHasValidCapturedAttributes)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_TARRAY_REF(FGameplayEffectAttributeCaptureDefinition,Z_Param_Out_InCaptureDefsToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidCapturedAttributes(Z_Param_Out_Spec,Z_Param_Out_InCaptureDefsToCheck);
	P_NATIVE_END;
}
// End Class UGSMModMagnitudeCalculation Function HasValidCapturedAttributes

// Begin Class UGSMModMagnitudeCalculation
void UGSMModMagnitudeCalculation::StaticRegisterNativesUGSMModMagnitudeCalculation()
{
	UClass* Class = UGSMModMagnitudeCalculation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttemptCalculateDurationFromDef", &UGSMModMagnitudeCalculation::execAttemptCalculateDurationFromDef },
		{ "GetAllAssetTags", &UGSMModMagnitudeCalculation::execGetAllAssetTags },
		{ "GetAllBlockedAbilityTags", &UGSMModMagnitudeCalculation::execGetAllBlockedAbilityTags },
		{ "GetAllGrantedTags", &UGSMModMagnitudeCalculation::execGetAllGrantedTags },
		{ "GetContextFromEffectSpec", &UGSMModMagnitudeCalculation::execGetContextFromEffectSpec },
		{ "GetDuration", &UGSMModMagnitudeCalculation::execGetDuration },
		{ "GetModifierMagnitude", &UGSMModMagnitudeCalculation::execGetModifierMagnitude },
		{ "GetPeriod", &UGSMModMagnitudeCalculation::execGetPeriod },
		{ "GetStackCount", &UGSMModMagnitudeCalculation::execGetStackCount },
		{ "HasValidCapturedAttributes", &UGSMModMagnitudeCalculation::execHasValidCapturedAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMModMagnitudeCalculation);
UClass* Z_Construct_UClass_UGSMModMagnitudeCalculation_NoRegister()
{
	return UGSMModMagnitudeCalculation::StaticClass();
}
struct Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Calculations/GSMModMagnitudeCalculation.h" },
		{ "ModuleRelativePath", "Public/Calculations/GSMModMagnitudeCalculation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_AttemptCalculateDurationFromDef, "AttemptCalculateDurationFromDef" }, // 2341788150
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllAssetTags, "GetAllAssetTags" }, // 1148791719
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllBlockedAbilityTags, "GetAllBlockedAbilityTags" }, // 4164705137
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetAllGrantedTags, "GetAllGrantedTags" }, // 2178698553
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetContextFromEffectSpec, "GetContextFromEffectSpec" }, // 1271743430
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetDuration, "GetDuration" }, // 2008774302
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetModifierMagnitude, "GetModifierMagnitude" }, // 719008835
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetPeriod, "GetPeriod" }, // 4103181870
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_GetStackCount, "GetStackCount" }, // 1207274902
		{ &Z_Construct_UFunction_UGSMModMagnitudeCalculation_HasValidCapturedAttributes, "HasValidCapturedAttributes" }, // 2444347037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMModMagnitudeCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::ClassParams = {
	&UGSMModMagnitudeCalculation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMModMagnitudeCalculation()
{
	if (!Z_Registration_Info_UClass_UGSMModMagnitudeCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMModMagnitudeCalculation.OuterSingleton, Z_Construct_UClass_UGSMModMagnitudeCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMModMagnitudeCalculation.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMModMagnitudeCalculation>()
{
	return UGSMModMagnitudeCalculation::StaticClass();
}
UGSMModMagnitudeCalculation::UGSMModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMModMagnitudeCalculation);
UGSMModMagnitudeCalculation::~UGSMModMagnitudeCalculation() {}
// End Class UGSMModMagnitudeCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMModMagnitudeCalculation, UGSMModMagnitudeCalculation::StaticClass, TEXT("UGSMModMagnitudeCalculation"), &Z_Registration_Info_UClass_UGSMModMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMModMagnitudeCalculation), 2816448150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_756409378(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Calculations_GSMModMagnitudeCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
