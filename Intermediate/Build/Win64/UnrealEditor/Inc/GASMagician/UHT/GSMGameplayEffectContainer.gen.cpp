// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMGameplayEffectContainer.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayEffectContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMTargetType_NoRegister();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainer();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FGSMGameplayEffectContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer;
class UScriptStruct* FGSMGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMGameplayEffectContainer>()
{
	return FGSMGameplayEffectContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a list of gameplay effects, a tag, and targeting info\n * These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "GASMagician|GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the way that targeting happens */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the way that targeting happens" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GASMagician|GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMGameplayEffectContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMGameplayEffectContainer, TargetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSMTargetType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectClasses_MetaData), NewProp_TargetGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMGameplayEffectContainer",
	Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::PropPointers),
	sizeof(FGSMGameplayEffectContainer),
	alignof(FGSMGameplayEffectContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainer()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer.InnerSingleton;
}
// End ScriptStruct FGSMGameplayEffectContainer

// Begin ScriptStruct FGSMGameplayEffectContainerSpec
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec;
class UScriptStruct* FGSMGameplayEffectContainerSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMGameplayEffectContainerSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMGameplayEffectContainerSpec>()
{
	return FGSMGameplayEffectContainerSpec::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A \"processed\" version of GSMGameplayEffectContainer that can be passed around and eventually applied */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"processed\" version of GSMGameplayEffectContainer that can be passed around and eventually applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "Category", "GASMagician|GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computed target data */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computed target data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GASMagician|GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/GSMGameplayEffectContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMGameplayEffectContainerSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectSpecs_MetaData), NewProp_TargetGameplayEffectSpecs_MetaData) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMGameplayEffectContainerSpec",
	Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::PropPointers),
	sizeof(FGSMGameplayEffectContainerSpec),
	alignof(FGSMGameplayEffectContainerSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec()
{
	if (!Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.InnerSingleton, Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec.InnerSingleton;
}
// End ScriptStruct FGSMGameplayEffectContainerSpec

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSMGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FGSMGameplayEffectContainer_Statics::NewStructOps, TEXT("GSMGameplayEffectContainer"), &Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMGameplayEffectContainer), 381989606U) },
		{ FGSMGameplayEffectContainerSpec::StaticStruct, Z_Construct_UScriptStruct_FGSMGameplayEffectContainerSpec_Statics::NewStructOps, TEXT("GSMGameplayEffectContainerSpec"), &Z_Registration_Info_UScriptStruct_GSMGameplayEffectContainerSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMGameplayEffectContainerSpec), 3217815265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectContainer_h_1628998450(TEXT("/Script/GASMagician"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayEffectContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
