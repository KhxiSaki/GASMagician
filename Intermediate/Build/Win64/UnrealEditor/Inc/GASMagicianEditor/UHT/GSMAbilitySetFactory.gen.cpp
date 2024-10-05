// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagicianEditor/Public/Factories/GSMAbilitySetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilitySetFactory() {}

// Begin Cross Module References
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAbilitySetFactory();
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAbilitySetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GASMagicianEditor();
// End Cross Module References

// Begin Class UGSMAbilitySetFactory
void UGSMAbilitySetFactory::StaticRegisterNativesUGSMAbilitySetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilitySetFactory);
UClass* Z_Construct_UClass_UGSMAbilitySetFactory_NoRegister()
{
	return UGSMAbilitySetFactory::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilitySetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/GSMAbilitySetFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/GSMAbilitySetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilitySetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAbilitySetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagicianEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilitySetFactory_Statics::ClassParams = {
	&UGSMAbilitySetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilitySetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilitySetFactory()
{
	if (!Z_Registration_Info_UClass_UGSMAbilitySetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilitySetFactory.OuterSingleton, Z_Construct_UClass_UGSMAbilitySetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilitySetFactory.OuterSingleton;
}
template<> GASMAGICIANEDITOR_API UClass* StaticClass<UGSMAbilitySetFactory>()
{
	return UGSMAbilitySetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilitySetFactory);
UGSMAbilitySetFactory::~UGSMAbilitySetFactory() {}
// End Class UGSMAbilitySetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilitySetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilitySetFactory, UGSMAbilitySetFactory::StaticClass, TEXT("UGSMAbilitySetFactory"), &Z_Registration_Info_UClass_UGSMAbilitySetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilitySetFactory), 2841649699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilitySetFactory_h_2463831180(TEXT("/Script/GASMagicianEditor"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilitySetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilitySetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
