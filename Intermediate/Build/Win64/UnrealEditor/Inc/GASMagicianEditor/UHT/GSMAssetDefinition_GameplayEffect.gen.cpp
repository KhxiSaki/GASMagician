// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagicianEditor/Public/AssetDefinitions/GSMAssetDefinition_GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAssetDefinition_GameplayEffect() {}

// Begin Cross Module References
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect();
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
UPackage* Z_Construct_UPackage__Script_GASMagicianEditor();
// End Cross Module References

// Begin Class UGSMAssetDefinition_GameplayEffect
void UGSMAssetDefinition_GameplayEffect::StaticRegisterNativesUGSMAssetDefinition_GameplayEffect()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAssetDefinition_GameplayEffect);
UClass* Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_NoRegister()
{
	return UGSMAssetDefinition_GameplayEffect::StaticClass();
}
struct Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetDefinitions/GSMAssetDefinition_GameplayEffect.h" },
		{ "ModuleRelativePath", "Public/AssetDefinitions/GSMAssetDefinition_GameplayEffect.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAssetDefinition_GameplayEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagicianEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::ClassParams = {
	&UGSMAssetDefinition_GameplayEffect::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect()
{
	if (!Z_Registration_Info_UClass_UGSMAssetDefinition_GameplayEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAssetDefinition_GameplayEffect.OuterSingleton, Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAssetDefinition_GameplayEffect.OuterSingleton;
}
template<> GASMAGICIANEDITOR_API UClass* StaticClass<UGSMAssetDefinition_GameplayEffect>()
{
	return UGSMAssetDefinition_GameplayEffect::StaticClass();
}
UGSMAssetDefinition_GameplayEffect::UGSMAssetDefinition_GameplayEffect() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAssetDefinition_GameplayEffect);
UGSMAssetDefinition_GameplayEffect::~UGSMAssetDefinition_GameplayEffect() {}
// End Class UGSMAssetDefinition_GameplayEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_GameplayEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAssetDefinition_GameplayEffect, UGSMAssetDefinition_GameplayEffect::StaticClass, TEXT("UGSMAssetDefinition_GameplayEffect"), &Z_Registration_Info_UClass_UGSMAssetDefinition_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAssetDefinition_GameplayEffect), 427256492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_GameplayEffect_h_2540887193(TEXT("/Script/GASMagicianEditor"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_GameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_AssetDefinitions_GSMAssetDefinition_GameplayEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
