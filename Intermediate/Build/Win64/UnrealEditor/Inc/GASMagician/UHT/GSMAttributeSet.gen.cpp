// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AttributeSets/GSMAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAttributeSet();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAttributeSet Function GSMGetHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics
{
	struct GSMAttributeSet_eventGSMGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::GSMAttributeSet_eventGSMGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::GSMAttributeSet_eventGSMGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetHealth();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetHealth

// Begin Class UGSMAttributeSet Function GSMGetHealthRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMGetHealthRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::GSMAttributeSet_eventGSMGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::GSMAttributeSet_eventGSMGetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetHealthRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetHealthRegenRate();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetHealthRegenRate

// Begin Class UGSMAttributeSet Function GSMGetMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics
{
	struct GSMAttributeSet_eventGSMGetMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::GSMAttributeSet_eventGSMGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::GSMAttributeSet_eventGSMGetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetMana();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetMana

// Begin Class UGSMAttributeSet Function GSMGetManaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMGetManaRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetManaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::GSMAttributeSet_eventGSMGetManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::GSMAttributeSet_eventGSMGetManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetManaRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetManaRegenRate();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetManaRegenRate

// Begin Class UGSMAttributeSet Function GSMGetMaxHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics
{
	struct GSMAttributeSet_eventGSMGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::GSMAttributeSet_eventGSMGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::GSMAttributeSet_eventGSMGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetMaxHealth();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetMaxHealth

// Begin Class UGSMAttributeSet Function GSMGetMaxMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics
{
	struct GSMAttributeSet_eventGSMGetMaxMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::GSMAttributeSet_eventGSMGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::GSMAttributeSet_eventGSMGetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetMaxMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetMaxMana();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetMaxMana

// Begin Class UGSMAttributeSet Function GSMGetMaxStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics
{
	struct GSMAttributeSet_eventGSMGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::GSMAttributeSet_eventGSMGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::GSMAttributeSet_eventGSMGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetMaxStamina();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetMaxStamina

// Begin Class UGSMAttributeSet Function GSMGetStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics
{
	struct GSMAttributeSet_eventGSMGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::GSMAttributeSet_eventGSMGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::GSMAttributeSet_eventGSMGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetStamina();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetStamina

// Begin Class UGSMAttributeSet Function GSMGetStaminaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMGetStaminaRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMGetStaminaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMGetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::GSMAttributeSet_eventGSMGetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::GSMAttributeSet_eventGSMGetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMGetStaminaRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GSMGetStaminaRegenRate();
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMGetStaminaRegenRate

// Begin Class UGSMAttributeSet Function GSMInitHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics
{
	struct GSMAttributeSet_eventGSMInitHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::GSMAttributeSet_eventGSMInitHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::GSMAttributeSet_eventGSMInitHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitHealth

// Begin Class UGSMAttributeSet Function GSMInitHealthRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMInitHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::GSMAttributeSet_eventGSMInitHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::GSMAttributeSet_eventGSMInitHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitHealthRegenRate

// Begin Class UGSMAttributeSet Function GSMInitMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics
{
	struct GSMAttributeSet_eventGSMInitMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::GSMAttributeSet_eventGSMInitMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::GSMAttributeSet_eventGSMInitMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitMana

// Begin Class UGSMAttributeSet Function GSMInitManaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMInitManaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitManaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::GSMAttributeSet_eventGSMInitManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::GSMAttributeSet_eventGSMInitManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitManaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitManaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitManaRegenRate

// Begin Class UGSMAttributeSet Function GSMInitMaxHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics
{
	struct GSMAttributeSet_eventGSMInitMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::GSMAttributeSet_eventGSMInitMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::GSMAttributeSet_eventGSMInitMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitMaxHealth

// Begin Class UGSMAttributeSet Function GSMInitMaxMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics
{
	struct GSMAttributeSet_eventGSMInitMaxMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitMaxMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitMaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::GSMAttributeSet_eventGSMInitMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::GSMAttributeSet_eventGSMInitMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitMaxMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitMaxMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitMaxMana

// Begin Class UGSMAttributeSet Function GSMInitMaxStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics
{
	struct GSMAttributeSet_eventGSMInitMaxStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitMaxStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::GSMAttributeSet_eventGSMInitMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::GSMAttributeSet_eventGSMInitMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitMaxStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitMaxStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitMaxStamina

// Begin Class UGSMAttributeSet Function GSMInitStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics
{
	struct GSMAttributeSet_eventGSMInitStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::GSMAttributeSet_eventGSMInitStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::GSMAttributeSet_eventGSMInitStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitStamina

// Begin Class UGSMAttributeSet Function GSMInitStaminaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMInitStaminaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMInitStaminaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMInitStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::GSMAttributeSet_eventGSMInitStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::GSMAttributeSet_eventGSMInitStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMInitStaminaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMInitStaminaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMInitStaminaRegenRate

// Begin Class UGSMAttributeSet Function GSMSetHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics
{
	struct GSMAttributeSet_eventGSMSetHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::GSMAttributeSet_eventGSMSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::GSMAttributeSet_eventGSMSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetHealth

// Begin Class UGSMAttributeSet Function GSMSetHealthRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMSetHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::GSMAttributeSet_eventGSMSetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::GSMAttributeSet_eventGSMSetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetHealthRegenRate

// Begin Class UGSMAttributeSet Function GSMSetMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics
{
	struct GSMAttributeSet_eventGSMSetMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::GSMAttributeSet_eventGSMSetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::GSMAttributeSet_eventGSMSetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetMana

// Begin Class UGSMAttributeSet Function GSMSetManaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMSetManaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetManaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::GSMAttributeSet_eventGSMSetManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::GSMAttributeSet_eventGSMSetManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetManaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetManaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetManaRegenRate

// Begin Class UGSMAttributeSet Function GSMSetMaxHealth
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics
{
	struct GSMAttributeSet_eventGSMSetMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::GSMAttributeSet_eventGSMSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::GSMAttributeSet_eventGSMSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetMaxHealth

// Begin Class UGSMAttributeSet Function GSMSetMaxMana
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics
{
	struct GSMAttributeSet_eventGSMSetMaxMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetMaxMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::GSMAttributeSet_eventGSMSetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::GSMAttributeSet_eventGSMSetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetMaxMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetMaxMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetMaxMana

// Begin Class UGSMAttributeSet Function GSMSetMaxStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics
{
	struct GSMAttributeSet_eventGSMSetMaxStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetMaxStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::GSMAttributeSet_eventGSMSetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::GSMAttributeSet_eventGSMSetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetMaxStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetMaxStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetMaxStamina

// Begin Class UGSMAttributeSet Function GSMSetStamina
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics
{
	struct GSMAttributeSet_eventGSMSetStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::GSMAttributeSet_eventGSMSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::GSMAttributeSet_eventGSMSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetStamina

// Begin Class UGSMAttributeSet Function GSMSetStaminaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics
{
	struct GSMAttributeSet_eventGSMSetStaminaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician|Attributes" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventGSMSetStaminaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "GSMSetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::GSMAttributeSet_eventGSMSetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::GSMAttributeSet_eventGSMSetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execGSMSetStaminaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GSMSetStaminaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function GSMSetStaminaRegenRate

// Begin Class UGSMAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics
{
	struct GSMAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::GSMAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::GSMAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_Health

// Begin Class UGSMAttributeSet Function OnRep_HealthRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics
{
	struct GSMAttributeSet_eventOnRep_HealthRegenRate_Parms
	{
		FGameplayAttributeData OldHealthRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegenRate_MetaData), NewProp_OldHealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::GSMAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::GSMAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_HealthRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_HealthRegenRate

// Begin Class UGSMAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics
{
	struct GSMAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::GSMAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::GSMAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_Mana

// Begin Class UGSMAttributeSet Function OnRep_ManaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics
{
	struct GSMAttributeSet_eventOnRep_ManaRegenRate_Parms
	{
		FGameplayAttributeData OldManaRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate = { "OldManaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_ManaRegenRate_Parms, OldManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldManaRegenRate_MetaData), NewProp_OldManaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_ManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::GSMAttributeSet_eventOnRep_ManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::GSMAttributeSet_eventOnRep_ManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_ManaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManaRegenRate(Z_Param_Out_OldManaRegenRate);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_ManaRegenRate

// Begin Class UGSMAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics
{
	struct GSMAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::GSMAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::GSMAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_MaxHealth

// Begin Class UGSMAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics
{
	struct GSMAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::GSMAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::GSMAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_MaxMana

// Begin Class UGSMAttributeSet Function OnRep_MaxStamina
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics
{
	struct GSMAttributeSet_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::GSMAttributeSet_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::GSMAttributeSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_MaxStamina

// Begin Class UGSMAttributeSet Function OnRep_Stamina
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics
{
	struct GSMAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::GSMAttributeSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::GSMAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_Stamina

// Begin Class UGSMAttributeSet Function OnRep_StaminaRegenRate
struct Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics
{
	struct GSMAttributeSet_eventOnRep_StaminaRegenRate_Parms
	{
		FGameplayAttributeData OldStaminaRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStaminaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStaminaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate = { "OldStaminaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAttributeSet_eventOnRep_StaminaRegenRate_Parms, OldStaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStaminaRegenRate_MetaData), NewProp_OldStaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAttributeSet, nullptr, "OnRep_StaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::GSMAttributeSet_eventOnRep_StaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::GSMAttributeSet_eventOnRep_StaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAttributeSet::execOnRep_StaminaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStaminaRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaRegenRate(Z_Param_Out_OldStaminaRegenRate);
	P_NATIVE_END;
}
// End Class UGSMAttributeSet Function OnRep_StaminaRegenRate

// Begin Class UGSMAttributeSet
void UGSMAttributeSet::StaticRegisterNativesUGSMAttributeSet()
{
	UClass* Class = UGSMAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GSMGetHealth", &UGSMAttributeSet::execGSMGetHealth },
		{ "GSMGetHealthRegenRate", &UGSMAttributeSet::execGSMGetHealthRegenRate },
		{ "GSMGetMana", &UGSMAttributeSet::execGSMGetMana },
		{ "GSMGetManaRegenRate", &UGSMAttributeSet::execGSMGetManaRegenRate },
		{ "GSMGetMaxHealth", &UGSMAttributeSet::execGSMGetMaxHealth },
		{ "GSMGetMaxMana", &UGSMAttributeSet::execGSMGetMaxMana },
		{ "GSMGetMaxStamina", &UGSMAttributeSet::execGSMGetMaxStamina },
		{ "GSMGetStamina", &UGSMAttributeSet::execGSMGetStamina },
		{ "GSMGetStaminaRegenRate", &UGSMAttributeSet::execGSMGetStaminaRegenRate },
		{ "GSMInitHealth", &UGSMAttributeSet::execGSMInitHealth },
		{ "GSMInitHealthRegenRate", &UGSMAttributeSet::execGSMInitHealthRegenRate },
		{ "GSMInitMana", &UGSMAttributeSet::execGSMInitMana },
		{ "GSMInitManaRegenRate", &UGSMAttributeSet::execGSMInitManaRegenRate },
		{ "GSMInitMaxHealth", &UGSMAttributeSet::execGSMInitMaxHealth },
		{ "GSMInitMaxMana", &UGSMAttributeSet::execGSMInitMaxMana },
		{ "GSMInitMaxStamina", &UGSMAttributeSet::execGSMInitMaxStamina },
		{ "GSMInitStamina", &UGSMAttributeSet::execGSMInitStamina },
		{ "GSMInitStaminaRegenRate", &UGSMAttributeSet::execGSMInitStaminaRegenRate },
		{ "GSMSetHealth", &UGSMAttributeSet::execGSMSetHealth },
		{ "GSMSetHealthRegenRate", &UGSMAttributeSet::execGSMSetHealthRegenRate },
		{ "GSMSetMana", &UGSMAttributeSet::execGSMSetMana },
		{ "GSMSetManaRegenRate", &UGSMAttributeSet::execGSMSetManaRegenRate },
		{ "GSMSetMaxHealth", &UGSMAttributeSet::execGSMSetMaxHealth },
		{ "GSMSetMaxMana", &UGSMAttributeSet::execGSMSetMaxMana },
		{ "GSMSetMaxStamina", &UGSMAttributeSet::execGSMSetMaxStamina },
		{ "GSMSetStamina", &UGSMAttributeSet::execGSMSetStamina },
		{ "GSMSetStaminaRegenRate", &UGSMAttributeSet::execGSMSetStaminaRegenRate },
		{ "OnRep_Health", &UGSMAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegenRate", &UGSMAttributeSet::execOnRep_HealthRegenRate },
		{ "OnRep_Mana", &UGSMAttributeSet::execOnRep_Mana },
		{ "OnRep_ManaRegenRate", &UGSMAttributeSet::execOnRep_ManaRegenRate },
		{ "OnRep_MaxHealth", &UGSMAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UGSMAttributeSet::execOnRep_MaxMana },
		{ "OnRep_MaxStamina", &UGSMAttributeSet::execOnRep_MaxStamina },
		{ "OnRep_Stamina", &UGSMAttributeSet::execOnRep_Stamina },
		{ "OnRep_StaminaRegenRate", &UGSMAttributeSet::execOnRep_StaminaRegenRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAttributeSet);
UClass* Z_Construct_UClass_UGSMAttributeSet_NoRegister()
{
	return UGSMAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UGSMAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AttributeSets/GSMAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HealthRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HealthRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mana\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxMana\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxMana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ManaRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ManaRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxStamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//StaminaRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StaminaRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "Category", "GASMagician|Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Healing (Its transient)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AttributeSets/GSMAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Healing (Its transient)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealth, "GSMGetHealth" }, // 214390798
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetHealthRegenRate, "GSMGetHealthRegenRate" }, // 2874272661
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetMana, "GSMGetMana" }, // 2695091081
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetManaRegenRate, "GSMGetManaRegenRate" }, // 1157385790
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxHealth, "GSMGetMaxHealth" }, // 2056893448
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxMana, "GSMGetMaxMana" }, // 1848581559
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetMaxStamina, "GSMGetMaxStamina" }, // 1642930573
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetStamina, "GSMGetStamina" }, // 3860726256
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMGetStaminaRegenRate, "GSMGetStaminaRegenRate" }, // 3708407921
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealth, "GSMInitHealth" }, // 453541537
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitHealthRegenRate, "GSMInitHealthRegenRate" }, // 2554276281
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitMana, "GSMInitMana" }, // 1372103928
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitManaRegenRate, "GSMInitManaRegenRate" }, // 2667789302
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxHealth, "GSMInitMaxHealth" }, // 4176024615
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxMana, "GSMInitMaxMana" }, // 4223464603
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitMaxStamina, "GSMInitMaxStamina" }, // 3140043645
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitStamina, "GSMInitStamina" }, // 800165964
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMInitStaminaRegenRate, "GSMInitStaminaRegenRate" }, // 1354775639
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealth, "GSMSetHealth" }, // 3828691087
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetHealthRegenRate, "GSMSetHealthRegenRate" }, // 3452334442
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetMana, "GSMSetMana" }, // 3822324279
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetManaRegenRate, "GSMSetManaRegenRate" }, // 2750403784
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxHealth, "GSMSetMaxHealth" }, // 919838870
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxMana, "GSMSetMaxMana" }, // 1779452383
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetMaxStamina, "GSMSetMaxStamina" }, // 4091814050
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetStamina, "GSMSetStamina" }, // 4176039446
		{ &Z_Construct_UFunction_UGSMAttributeSet_GSMSetStaminaRegenRate, "GSMSetStaminaRegenRate" }, // 2886787612
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_Health, "OnRep_Health" }, // 2304928868
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 775806598
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1582801851
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_ManaRegenRate, "OnRep_ManaRegenRate" }, // 1136418033
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2360191204
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 834376683
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 911032694
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 193935807
		{ &Z_Construct_UFunction_UGSMAttributeSet_OnRep_StaminaRegenRate, "OnRep_StaminaRegenRate" }, // 1931667800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", "OnRep_ManaRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, ManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", "OnRep_StaminaRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAttributeSet_Statics::NewProp_Healing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAttributeSet_Statics::ClassParams = {
	&UGSMAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGSMAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAttributeSet.OuterSingleton, Z_Construct_UClass_UGSMAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAttributeSet.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAttributeSet>()
{
	return UGSMAttributeSet::StaticClass();
}
void UGSMAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_ManaRegenRate(TEXT("ManaRegenRate"));
	static const FName Name_Stamina(TEXT("Stamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_StaminaRegenRate(TEXT("StaminaRegenRate"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_ManaRegenRate == ClassReps[(int32)ENetFields_Private::ManaRegenRate].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_StaminaRegenRate == ClassReps[(int32)ENetFields_Private::StaminaRegenRate].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGSMAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAttributeSet);
UGSMAttributeSet::~UGSMAttributeSet() {}
// End Class UGSMAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAttributeSet, UGSMAttributeSet::StaticClass, TEXT("UGSMAttributeSet"), &Z_Registration_Info_UClass_UGSMAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAttributeSet), 369949982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_261165265(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AttributeSets_GSMAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
