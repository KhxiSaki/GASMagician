// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Libraries/GSMGameplayCueFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayCueFunctionLibrary() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayCueFunctionLibrary();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameplayCueFunctionLibrary
void UGSMGameplayCueFunctionLibrary::StaticRegisterNativesUGSMGameplayCueFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayCueFunctionLibrary);
UClass* Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_NoRegister()
{
	return UGSMGameplayCueFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Libraries/GSMGameplayCueFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/GSMGameplayCueFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayCueFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::ClassParams = {
	&UGSMGameplayCueFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayCueFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayCueFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayCueFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGSMGameplayCueFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayCueFunctionLibrary.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameplayCueFunctionLibrary>()
{
	return UGSMGameplayCueFunctionLibrary::StaticClass();
}
UGSMGameplayCueFunctionLibrary::UGSMGameplayCueFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayCueFunctionLibrary);
UGSMGameplayCueFunctionLibrary::~UGSMGameplayCueFunctionLibrary() {}
// End Class UGSMGameplayCueFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayCueFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayCueFunctionLibrary, UGSMGameplayCueFunctionLibrary::StaticClass, TEXT("UGSMGameplayCueFunctionLibrary"), &Z_Registration_Info_UClass_UGSMGameplayCueFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayCueFunctionLibrary), 1333201991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayCueFunctionLibrary_h_4075828500(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayCueFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMGameplayCueFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
