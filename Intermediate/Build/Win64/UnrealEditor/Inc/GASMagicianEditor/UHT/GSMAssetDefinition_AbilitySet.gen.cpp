// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagicianEditor/Public/AssetDefinitions/GSMAssetDefinition_AbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAssetDefinition_AbilitySet() {}

// Begin Cross Module References
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAssetDefinition_AbilitySet();
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_GASMagicianEditor();
// End Cross Module References

// Begin Class UGSMAssetDefinition_AbilitySet
void UGSMAssetDefinition_AbilitySet::StaticRegisterNativesUGSMAssetDefinition_AbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAssetDefinition_AbilitySet);
UClass* Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_NoRegister()
{
	return UGSMAssetDefinition_AbilitySet::StaticClass();
}
struct Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetDefinitions/GSMAssetDefinition_AbilitySet.h" },
		{ "ModuleRelativePath", "Public/AssetDefinitions/GSMAssetDefinition_AbilitySet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAssetDefinition_AbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagicianEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::ClassParams = {
	&UGSMAssetDefinition_AbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAssetDefinition_AbilitySet()
{
	if (!Z_Registration_Info_UClass_UGSMAssetDefinition_AbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAssetDefinition_AbilitySet.OuterSingleton, Z_Construct_UClass_UGSMAssetDefinition_AbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAssetDefinition_AbilitySet.OuterSingleton;
}
template<> GASMAGICIANEDITOR_API UClass* StaticClass<UGSMAssetDefinition_AbilitySet>()
{
	return UGSMAssetDefinition_AbilitySet::StaticClass();
}
UGSMAssetDefinition_AbilitySet::UGSMAssetDefinition_AbilitySet() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAssetDefinition_AbilitySet);
UGSMAssetDefinition_AbilitySet::~UGSMAssetDefinition_AbilitySet() {}
// End Class UGSMAssetDefinition_AbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_AbilitySet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAssetDefinition_AbilitySet, UGSMAssetDefinition_AbilitySet::StaticClass, TEXT("UGSMAssetDefinition_AbilitySet"), &Z_Registration_Info_UClass_UGSMAssetDefinition_AbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAssetDefinition_AbilitySet), 307269273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_AbilitySet_h_3282484587(TEXT("/Script/GASMagicianEditor"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_AbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_AbilitySet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
