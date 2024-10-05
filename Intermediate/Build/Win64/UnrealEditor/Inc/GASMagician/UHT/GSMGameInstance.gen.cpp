// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameInstance();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameInstance
void UGSMGameInstance::StaticRegisterNativesUGSMGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameInstance);
UClass* Z_Construct_UClass_UGSMGameInstance_NoRegister()
{
	return UGSMGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGSMGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GSMGameInstance.h" },
		{ "ModuleRelativePath", "Public/GSMGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameInstance_Statics::ClassParams = {
	&UGSMGameInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameInstance()
{
	if (!Z_Registration_Info_UClass_UGSMGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameInstance.OuterSingleton, Z_Construct_UClass_UGSMGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameInstance.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameInstance>()
{
	return UGSMGameInstance::StaticClass();
}
UGSMGameInstance::UGSMGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameInstance);
UGSMGameInstance::~UGSMGameInstance() {}
// End Class UGSMGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameInstance, UGSMGameInstance::StaticClass, TEXT("UGSMGameInstance"), &Z_Registration_Info_UClass_UGSMGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameInstance), 3960842896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_2414846648(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
