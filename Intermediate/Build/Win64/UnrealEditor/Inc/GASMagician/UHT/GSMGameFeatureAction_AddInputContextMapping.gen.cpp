// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GameFeatures/GSMGameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameFeatureAction_AddInputContextMapping() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameFeatureAction_AddInputContextMapping
void UGSMGameFeatureAction_AddInputContextMapping::StaticRegisterNativesUGSMGameFeatureAction_AddInputContextMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameFeatureAction_AddInputContextMapping);
UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_NoRegister()
{
	return UGSMGameFeatureAction_AddInputContextMapping::StaticClass();
}
struct Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Adds InputMappingContext to local players' EnhancedInput system. \n * Expects that local players are set up to use the EnhancedInput system.\n */" },
#endif
		{ "DisplayName", "Add Input Mapping (GASMagician)" },
		{ "IncludePath", "GameFeatures/GSMGameFeatureAction_AddInputContextMapping.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds InputMappingContext to local players' EnhancedInput system.\nExpects that local players are set up to use the EnhancedInput system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UObject interface\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddInputContextMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "GASMagician" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher priority input mappings will be prioritized over mappings with a lower priority.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher priority input mappings will be prioritized over mappings with a lower priority." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameFeatureAction_AddInputContextMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameFeatureAction_AddInputContextMapping, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMGameFeatureAction_AddInputContextMapping, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::ClassParams = {
	&UGSMGameFeatureAction_AddInputContextMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping()
{
	if (!Z_Registration_Info_UClass_UGSMGameFeatureAction_AddInputContextMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameFeatureAction_AddInputContextMapping.OuterSingleton, Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameFeatureAction_AddInputContextMapping.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameFeatureAction_AddInputContextMapping>()
{
	return UGSMGameFeatureAction_AddInputContextMapping::StaticClass();
}
UGSMGameFeatureAction_AddInputContextMapping::UGSMGameFeatureAction_AddInputContextMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameFeatureAction_AddInputContextMapping);
UGSMGameFeatureAction_AddInputContextMapping::~UGSMGameFeatureAction_AddInputContextMapping() {}
// End Class UGSMGameFeatureAction_AddInputContextMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddInputContextMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameFeatureAction_AddInputContextMapping, UGSMGameFeatureAction_AddInputContextMapping::StaticClass, TEXT("UGSMGameFeatureAction_AddInputContextMapping"), &Z_Registration_Info_UClass_UGSMGameFeatureAction_AddInputContextMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameFeatureAction_AddInputContextMapping), 1474229467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddInputContextMapping_h_2993865464(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
