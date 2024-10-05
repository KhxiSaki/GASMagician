// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameFeatureAction_AddAbilities() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAttributeSet_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilityMapping();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAttributesMapping();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FGSMAbilityMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilityMapping;
class UScriptStruct* FGSMAbilityMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilityMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilityMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilityMapping, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilityMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilityMapping.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilityMapping>()
{
	return FGSMAbilityMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of ability to grant\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of ability to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input action to bind the ability to, if any (can be left unset)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input action to bind the ability to, if any (can be left unset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilityMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityMapping, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityType_MetaData), NewProp_AbilityType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::NewProp_AbilityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilityMapping",
	Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::PropPointers),
	sizeof(FGSMAbilityMapping),
	alignof(FGSMAbilityMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilityMapping()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilityMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilityMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilityMapping.InnerSingleton;
}
// End ScriptStruct FGSMAbilityMapping

// Begin ScriptStruct FGSMAttributesMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAttributesMapping;
class UScriptStruct* FGSMAttributesMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAttributesMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAttributesMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAttributesMapping, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAttributesMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAttributesMapping.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAttributesMapping>()
{
	return FGSMAttributesMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetType_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability set to grant\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability set to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data table referent to initialize the attributes with, if any (can be left unset)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSetType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAttributesMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::NewProp_AttributeSetType = { "AttributeSetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAttributesMapping, AttributeSetType), Z_Construct_UClass_UGSMAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetType_MetaData), NewProp_AttributeSetType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAttributesMapping, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationData_MetaData), NewProp_InitializationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::NewProp_AttributeSetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::NewProp_InitializationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAttributesMapping",
	Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::PropPointers),
	sizeof(FGSMAttributesMapping),
	alignof(FGSMAttributesMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAttributesMapping()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAttributesMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAttributesMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAttributesMapping.InnerSingleton;
}
// End ScriptStruct FGSMAttributesMapping

// Begin ScriptStruct FGameFeatureAbilitiesEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry;
class UScriptStruct* FGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGameFeatureAbilitiesEntry>()
{
	return FGameFeatureAbilitiesEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base actor class to add to\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base actor class to add to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of abilities to grant to actors of the specified class\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of attribute sets to grant to actors of the specified class \n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeatureAbilitiesEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilityMapping, METADATA_PARAMS(0, nullptr) }; // 828331915
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilities_MetaData), NewProp_GrantedAbilities_MetaData) }; // 828331915
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAttributesMapping, METADATA_PARAMS(0, nullptr) }; // 1815968043
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 1815968043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GameFeatureAbilitiesEntry",
	Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers),
	sizeof(FGameFeatureAbilitiesEntry),
	alignof(FGameFeatureAbilitiesEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton;
}
// End ScriptStruct FGameFeatureAbilitiesEntry

// Begin Class UGSMGameFeatureAction_AddAbilities
void UGSMGameFeatureAction_AddAbilities::StaticRegisterNativesUGSMGameFeatureAction_AddAbilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameFeatureAction_AddAbilities);
UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_NoRegister()
{
	return UGSMGameFeatureAction_AddAbilities::StaticClass();
}
struct Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
#endif
		{ "DisplayName", "Add Abilities (GASMagician)" },
		{ "IncludePath", "GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameFeatureAction_AddAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, METADATA_PARAMS(0, nullptr) }; // 898371418
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesList_MetaData), NewProp_AbilitiesList_MetaData) }; // 898371418
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::ClassParams = {
	&UGSMGameFeatureAction_AddAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities()
{
	if (!Z_Registration_Info_UClass_UGSMGameFeatureAction_AddAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameFeatureAction_AddAbilities.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameFeatureAction_AddAbilities>()
{
	return UGSMGameFeatureAction_AddAbilities::StaticClass();
}
UGSMGameFeatureAction_AddAbilities::UGSMGameFeatureAction_AddAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameFeatureAction_AddAbilities);
UGSMGameFeatureAction_AddAbilities::~UGSMGameFeatureAction_AddAbilities() {}
// End Class UGSMGameFeatureAction_AddAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSMAbilityMapping::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilityMapping_Statics::NewStructOps, TEXT("GSMAbilityMapping"), &Z_Registration_Info_UScriptStruct_GSMAbilityMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilityMapping), 828331915U) },
		{ FGSMAttributesMapping::StaticStruct, Z_Construct_UScriptStruct_FGSMAttributesMapping_Statics::NewStructOps, TEXT("GSMAttributesMapping"), &Z_Registration_Info_UScriptStruct_GSMAttributesMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAttributesMapping), 1815968043U) },
		{ FGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeatureAbilitiesEntry), 898371418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameFeatureAction_AddAbilities, UGSMGameFeatureAction_AddAbilities::StaticClass, TEXT("UGSMGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGSMGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameFeatureAction_AddAbilities), 77836372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_2209357292(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
