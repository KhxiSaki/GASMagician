// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Libraries/GSMGameplayStatics.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GASMagician/Public/GSMGameplayEffectContainer.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameplayStatics();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayStatics();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayStatics_NoRegister();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameplayStatics Function AddTargetsToEffectContainerSpec
struct Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics
{
	struct GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
		TArray<FGameplayAbilityTargetDataHandle> TargetData;
		TArray<FHitResult> HitResults;
		TArray<AActor*> TargetActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "TargetData, HitResults, TargetActors" },
		{ "Category", "Ability|Container" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds targets to a copy of the passed in effect container spec and returns it */" },
#endif
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds targets to a copy of the passed in effect container spec and returns it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 3217815265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetData_Inner = { "TargetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms, TargetData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResults_MetaData), NewProp_HitResults_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActors_MetaData), NewProp_TargetActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_ContainerSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_HitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::NewProp_TargetActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayStatics, nullptr, "AddTargetsToEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::GSMGameplayStatics_eventAddTargetsToEffectContainerSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayStatics::execAddTargetsToEffectContainerSpec)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_GET_TARRAY_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGSMGameplayStatics::AddTargetsToEffectContainerSpec(Z_Param_Out_ContainerSpec,Z_Param_Out_TargetData,Z_Param_Out_HitResults,Z_Param_Out_TargetActors);
	P_NATIVE_END;
}
// End Class UGSMGameplayStatics Function AddTargetsToEffectContainerSpec

// Begin Class UGSMGameplayStatics Function ApplyExternalEffectContainerSpec
struct Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics
{
	struct GSMGameplayStatics_eventApplyExternalEffectContainerSpec_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
		TArray<FActiveGameplayEffectHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Container" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies container spec that was made from an ability */" },
#endif
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies container spec that was made from an ability" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventApplyExternalEffectContainerSpec_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerSpec_MetaData), NewProp_ContainerSpec_MetaData) }; // 3217815265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventApplyExternalEffectContainerSpec_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ContainerSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayStatics, nullptr, "ApplyExternalEffectContainerSpec", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::GSMGameplayStatics_eventApplyExternalEffectContainerSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::GSMGameplayStatics_eventApplyExternalEffectContainerSpec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayStatics::execApplyExternalEffectContainerSpec)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=UGSMGameplayStatics::ApplyExternalEffectContainerSpec(Z_Param_Out_ContainerSpec);
	P_NATIVE_END;
}
// End Class UGSMGameplayStatics Function ApplyExternalEffectContainerSpec

// Begin Class UGSMGameplayStatics Function ClearEffectContainerSpecTargets
struct Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics
{
	struct GSMGameplayStatics_eventClearEffectContainerSpecTargets_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Container" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears spec's targets\n" },
#endif
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears spec's targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventClearEffectContainerSpecTargets_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(0, nullptr) }; // 3217815265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::NewProp_ContainerSpec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayStatics, nullptr, "ClearEffectContainerSpecTargets", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::GSMGameplayStatics_eventClearEffectContainerSpecTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::GSMGameplayStatics_eventClearEffectContainerSpecTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayStatics::execClearEffectContainerSpecTargets)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGSMGameplayStatics::ClearEffectContainerSpecTargets(Z_Param_Out_ContainerSpec);
	P_NATIVE_END;
}
// End Class UGSMGameplayStatics Function ClearEffectContainerSpecTargets

// Begin Class UGSMGameplayStatics Function DoesEffectContainerSpecHaveEffects
struct Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics
{
	struct GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if spec has any effects */" },
#endif
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if spec has any effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerSpec_MetaData), NewProp_ContainerSpec_MetaData) }; // 3217815265
void Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms), &Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ContainerSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayStatics, nullptr, "DoesEffectContainerSpecHaveEffects", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::GSMGameplayStatics_eventDoesEffectContainerSpecHaveEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayStatics::execDoesEffectContainerSpecHaveEffects)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGSMGameplayStatics::DoesEffectContainerSpecHaveEffects(Z_Param_Out_ContainerSpec);
	P_NATIVE_END;
}
// End Class UGSMGameplayStatics Function DoesEffectContainerSpecHaveEffects

// Begin Class UGSMGameplayStatics Function DoesEffectContainerSpecHaveTargets
struct Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics
{
	struct GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms
	{
		FGSMGameplayEffectContainerSpec ContainerSpec;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if spec has any targets */" },
#endif
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if spec has any targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerSpec;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec = { "ContainerSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms, ContainerSpec), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerSpec_MetaData), NewProp_ContainerSpec_MetaData) }; // 3217815265
void Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms), &Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ContainerSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMGameplayStatics, nullptr, "DoesEffectContainerSpecHaveTargets", nullptr, nullptr, Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::GSMGameplayStatics_eventDoesEffectContainerSpecHaveTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMGameplayStatics::execDoesEffectContainerSpecHaveTargets)
{
	P_GET_STRUCT_REF(FGSMGameplayEffectContainerSpec,Z_Param_Out_ContainerSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGSMGameplayStatics::DoesEffectContainerSpecHaveTargets(Z_Param_Out_ContainerSpec);
	P_NATIVE_END;
}
// End Class UGSMGameplayStatics Function DoesEffectContainerSpecHaveTargets

// Begin Class UGSMGameplayStatics
void UGSMGameplayStatics::StaticRegisterNativesUGSMGameplayStatics()
{
	UClass* Class = UGSMGameplayStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTargetsToEffectContainerSpec", &UGSMGameplayStatics::execAddTargetsToEffectContainerSpec },
		{ "ApplyExternalEffectContainerSpec", &UGSMGameplayStatics::execApplyExternalEffectContainerSpec },
		{ "ClearEffectContainerSpecTargets", &UGSMGameplayStatics::execClearEffectContainerSpecTargets },
		{ "DoesEffectContainerSpecHaveEffects", &UGSMGameplayStatics::execDoesEffectContainerSpecHaveEffects },
		{ "DoesEffectContainerSpecHaveTargets", &UGSMGameplayStatics::execDoesEffectContainerSpecHaveTargets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayStatics);
UClass* Z_Construct_UClass_UGSMGameplayStatics_NoRegister()
{
	return UGSMGameplayStatics::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Libraries/GSMGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMGameplayStatics_AddTargetsToEffectContainerSpec, "AddTargetsToEffectContainerSpec" }, // 2267481175
		{ &Z_Construct_UFunction_UGSMGameplayStatics_ApplyExternalEffectContainerSpec, "ApplyExternalEffectContainerSpec" }, // 767079978
		{ &Z_Construct_UFunction_UGSMGameplayStatics_ClearEffectContainerSpecTargets, "ClearEffectContainerSpecTargets" }, // 117563734
		{ &Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveEffects, "DoesEffectContainerSpecHaveEffects" }, // 254144651
		{ &Z_Construct_UFunction_UGSMGameplayStatics_DoesEffectContainerSpecHaveTargets, "DoesEffectContainerSpecHaveTargets" }, // 2673519496
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameplayStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayStatics,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayStatics_Statics::ClassParams = {
	&UGSMGameplayStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayStatics()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayStatics.OuterSingleton, Z_Construct_UClass_UGSMGameplayStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayStatics.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameplayStatics>()
{
	return UGSMGameplayStatics::StaticClass();
}
UGSMGameplayStatics::UGSMGameplayStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayStatics);
UGSMGameplayStatics::~UGSMGameplayStatics() {}
// End Class UGSMGameplayStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayStatics, UGSMGameplayStatics::StaticClass, TEXT("UGSMGameplayStatics"), &Z_Registration_Info_UClass_UGSMGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayStatics), 3673116539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_1527339293(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
