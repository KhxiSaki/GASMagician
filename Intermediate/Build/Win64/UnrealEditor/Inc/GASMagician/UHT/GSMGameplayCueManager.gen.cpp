// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayCueManager() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayCueManager();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayCueManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameplayCueManager
void UGSMGameplayCueManager::StaticRegisterNativesUGSMGameplayCueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayCueManager);
UClass* Z_Construct_UClass_UGSMGameplayCueManager_NoRegister()
{
	return UGSMGameplayCueManager::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GSMGameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/GSMGameplayCueManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayCueManager_Statics::ClassParams = {
	&UGSMGameplayCueManager::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayCueManager.OuterSingleton, Z_Construct_UClass_UGSMGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayCueManager.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameplayCueManager>()
{
	return UGSMGameplayCueManager::StaticClass();
}
UGSMGameplayCueManager::UGSMGameplayCueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayCueManager);
UGSMGameplayCueManager::~UGSMGameplayCueManager() {}
// End Class UGSMGameplayCueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayCueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayCueManager, UGSMGameplayCueManager::StaticClass, TEXT("UGSMGameplayCueManager"), &Z_Registration_Info_UClass_UGSMGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayCueManager), 1692996615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayCueManager_h_1383231525(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameplayCueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
