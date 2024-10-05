// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilitySystemGlobals() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemGlobals();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemGlobals_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilitySystemGlobals
void UGSMAbilitySystemGlobals::StaticRegisterNativesUGSMAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilitySystemGlobals);
UClass* Z_Construct_UClass_UGSMAbilitySystemGlobals_NoRegister()
{
	return UGSMAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GSMAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/GSMAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::ClassParams = {
	&UGSMAbilitySystemGlobals::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UGSMAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UGSMAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilitySystemGlobals.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilitySystemGlobals>()
{
	return UGSMAbilitySystemGlobals::StaticClass();
}
UGSMAbilitySystemGlobals::UGSMAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilitySystemGlobals);
UGSMAbilitySystemGlobals::~UGSMAbilitySystemGlobals() {}
// End Class UGSMAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilitySystemGlobals, UGSMAbilitySystemGlobals::StaticClass, TEXT("UGSMAbilitySystemGlobals"), &Z_Registration_Info_UClass_UGSMAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilitySystemGlobals), 3290966556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySystemGlobals_h_1759076439(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
