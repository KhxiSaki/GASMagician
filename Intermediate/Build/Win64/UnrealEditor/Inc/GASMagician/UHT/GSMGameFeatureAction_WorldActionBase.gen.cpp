// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GameFeatures/GSMGameFeatureAction_WorldActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameFeatureAction_WorldActionBase() {}

// Begin Cross Module References
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameFeatureAction_WorldActionBase
void UGSMGameFeatureAction_WorldActionBase::StaticRegisterNativesUGSMGameFeatureAction_WorldActionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameFeatureAction_WorldActionBase);
UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_NoRegister()
{
	return UGSMGameFeatureAction_WorldActionBase::StaticClass();
}
struct Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for GameFeatureActions that wish to do something world specific.\n */" },
#endif
		{ "IncludePath", "GameFeatures/GSMGameFeatureAction_WorldActionBase.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSMGameFeatureAction_WorldActionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for GameFeatureActions that wish to do something world specific." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameFeatureAction_WorldActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::ClassParams = {
	&UGSMGameFeatureAction_WorldActionBase::StaticClass,
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
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase()
{
	if (!Z_Registration_Info_UClass_UGSMGameFeatureAction_WorldActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameFeatureAction_WorldActionBase.OuterSingleton, Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameFeatureAction_WorldActionBase.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameFeatureAction_WorldActionBase>()
{
	return UGSMGameFeatureAction_WorldActionBase::StaticClass();
}
UGSMGameFeatureAction_WorldActionBase::UGSMGameFeatureAction_WorldActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameFeatureAction_WorldActionBase);
UGSMGameFeatureAction_WorldActionBase::~UGSMGameFeatureAction_WorldActionBase() {}
// End Class UGSMGameFeatureAction_WorldActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_WorldActionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameFeatureAction_WorldActionBase, UGSMGameFeatureAction_WorldActionBase::StaticClass, TEXT("UGSMGameFeatureAction_WorldActionBase"), &Z_Registration_Info_UClass_UGSMGameFeatureAction_WorldActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameFeatureAction_WorldActionBase), 1972542182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_WorldActionBase_h_2841330552(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_WorldActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GameFeatures_GSMGameFeatureAction_WorldActionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
