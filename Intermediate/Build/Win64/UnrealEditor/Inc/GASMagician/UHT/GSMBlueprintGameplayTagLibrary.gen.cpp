// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Libraries/GSMBlueprintGameplayTagLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMBlueprintGameplayTagLibrary() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMBlueprintGameplayTagLibrary
void UGSMBlueprintGameplayTagLibrary::StaticRegisterNativesUGSMBlueprintGameplayTagLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMBlueprintGameplayTagLibrary);
UClass* Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_NoRegister()
{
	return UGSMBlueprintGameplayTagLibrary::StaticClass();
}
struct Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Libraries/GSMBlueprintGameplayTagLibrary.h" },
		{ "ModuleRelativePath", "Public/Libraries/GSMBlueprintGameplayTagLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMBlueprintGameplayTagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::ClassParams = {
	&UGSMBlueprintGameplayTagLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary()
{
	if (!Z_Registration_Info_UClass_UGSMBlueprintGameplayTagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMBlueprintGameplayTagLibrary.OuterSingleton, Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMBlueprintGameplayTagLibrary.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMBlueprintGameplayTagLibrary>()
{
	return UGSMBlueprintGameplayTagLibrary::StaticClass();
}
UGSMBlueprintGameplayTagLibrary::UGSMBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMBlueprintGameplayTagLibrary);
UGSMBlueprintGameplayTagLibrary::~UGSMBlueprintGameplayTagLibrary() {}
// End Class UGSMBlueprintGameplayTagLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMBlueprintGameplayTagLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMBlueprintGameplayTagLibrary, UGSMBlueprintGameplayTagLibrary::StaticClass, TEXT("UGSMBlueprintGameplayTagLibrary"), &Z_Registration_Info_UClass_UGSMBlueprintGameplayTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMBlueprintGameplayTagLibrary), 340173789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMBlueprintGameplayTagLibrary_h_2825075752(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMBlueprintGameplayTagLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Libraries_GSMBlueprintGameplayTagLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
