// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMAbilityTagRelationshipMapping.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityTagRelationshipMapping() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipMapping();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_NoRegister();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilityTagRelationship();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin ScriptStruct FGSMAbilityTagRelationship
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship;
class UScriptStruct* FGSMAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSMAbilityTagRelationship, (UObject*)Z_Construct_UPackage__Script_GASMagician(), TEXT("GSMAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.OuterSingleton;
}
template<> GASMAGICIAN_API UScriptStruct* StaticStruct<FGSMAbilityTagRelationship>()
{
	return FGSMAbilityTagRelationship::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct that defines the relationship between different ability tags */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct that defines the relationship between different ability tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Gameplay.Action" },
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tag that this container relationship is about. Single tag, but abilities can have multiple of these */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tag that this container relationship is about. Single tag, but abilities can have multiple of these" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToBlock_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The other ability tags that will be blocked by any ability using this tag */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The other ability tags that will be blocked by any ability using this tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToCancel_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The other ability tags that will be canceled by any ability using this tag */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The other ability tags that will be canceled by any ability using this tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation required tags of the ability */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation required tags of the ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation blocked tags of the ability */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation blocked tags of the ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToBlock;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToCancel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSMAbilityTagRelationship>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityTagRelationship, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock = { "AbilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityTagRelationship, AbilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToBlock_MetaData), NewProp_AbilityTagsToBlock_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel = { "AbilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityTagRelationship, AbilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToCancel_MetaData), NewProp_AbilityTagsToCancel_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityTagRelationship, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRequiredTags_MetaData), NewProp_ActivationRequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSMAbilityTagRelationship, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationBlockedTags_MetaData), NewProp_ActivationBlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
	nullptr,
	&NewStructOps,
	"GSMAbilityTagRelationship",
	Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::PropPointers),
	sizeof(FGSMAbilityTagRelationship),
	alignof(FGSMAbilityTagRelationship),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilityTagRelationship()
{
	if (!Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship.InnerSingleton;
}
// End ScriptStruct FGSMAbilityTagRelationship

// Begin Class UGSMAbilityTagRelationshipMapping
void UGSMAbilityTagRelationshipMapping::StaticRegisterNativesUGSMAbilityTagRelationshipMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityTagRelationshipMapping);
UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_NoRegister()
{
	return UGSMAbilityTagRelationshipMapping::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of how ability tags block or cancel other abilities */" },
#endif
		{ "IncludePath", "GSMAbilityTagRelationshipMapping.h" },
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of how ability tags block or cancel other abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagRelationships_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The list of relationships between different gameplay tags (which ones block or cancel others) */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityTagRelationshipMapping.h" },
		{ "TitleProperty", "AbilityTag" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of relationships between different gameplay tags (which ones block or cancel others)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagRelationships_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTagRelationships;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityTagRelationshipMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilityTagRelationship, METADATA_PARAMS(0, nullptr) }; // 2558051854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilityTagRelationshipMapping, AbilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagRelationships_MetaData), NewProp_AbilityTagRelationships_MetaData) }; // 2558051854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::ClassParams = {
	&UGSMAbilityTagRelationshipMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipMapping()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityTagRelationshipMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityTagRelationshipMapping.OuterSingleton, Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityTagRelationshipMapping.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityTagRelationshipMapping>()
{
	return UGSMAbilityTagRelationshipMapping::StaticClass();
}
UGSMAbilityTagRelationshipMapping::UGSMAbilityTagRelationshipMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityTagRelationshipMapping);
UGSMAbilityTagRelationshipMapping::~UGSMAbilityTagRelationshipMapping() {}
// End Class UGSMAbilityTagRelationshipMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSMAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FGSMAbilityTagRelationship_Statics::NewStructOps, TEXT("GSMAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_GSMAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSMAbilityTagRelationship), 2558051854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityTagRelationshipMapping, UGSMAbilityTagRelationshipMapping::StaticClass, TEXT("UGSMAbilityTagRelationshipMapping"), &Z_Registration_Info_UClass_UGSMAbilityTagRelationshipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityTagRelationshipMapping), 309676573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_482202052(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
