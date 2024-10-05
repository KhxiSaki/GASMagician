// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMCheatManager.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMCheatManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMCheatManager();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMCheatManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMCheatManager
void UGSMCheatManager::StaticRegisterNativesUGSMCheatManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMCheatManager);
UClass* Z_Construct_UClass_UGSMCheatManager_NoRegister()
{
	return UGSMCheatManager::StaticClass();
}
struct Z_Construct_UClass_UGSMCheatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GSMCheatManager.h" },
		{ "ModuleRelativePath", "Public/GSMCheatManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMCheatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMCheatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMCheatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMCheatManager_Statics::ClassParams = {
	&UGSMCheatManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMCheatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMCheatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMCheatManager()
{
	if (!Z_Registration_Info_UClass_UGSMCheatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMCheatManager.OuterSingleton, Z_Construct_UClass_UGSMCheatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMCheatManager.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMCheatManager>()
{
	return UGSMCheatManager::StaticClass();
}
UGSMCheatManager::UGSMCheatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMCheatManager);
UGSMCheatManager::~UGSMCheatManager() {}
// End Class UGSMCheatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMCheatManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMCheatManager, UGSMCheatManager::StaticClass, TEXT("UGSMCheatManager"), &Z_Registration_Info_UClass_UGSMCheatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMCheatManager), 303100415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMCheatManager_h_340800994(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMCheatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMCheatManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
