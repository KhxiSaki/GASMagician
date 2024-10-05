// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagicianEditor/Public/Factories/GSMAbilityTagRelationshipFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityTagRelationshipFactory() {}

// Begin Cross Module References
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipFactory();
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GASMagicianEditor();
// End Cross Module References

// Begin Class UGSMAbilityTagRelationshipFactory
void UGSMAbilityTagRelationshipFactory::StaticRegisterNativesUGSMAbilityTagRelationshipFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityTagRelationshipFactory);
UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_NoRegister()
{
	return UGSMAbilityTagRelationshipFactory::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/GSMAbilityTagRelationshipFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/GSMAbilityTagRelationshipFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityTagRelationshipFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagicianEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::ClassParams = {
	&UGSMAbilityTagRelationshipFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipFactory()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityTagRelationshipFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityTagRelationshipFactory.OuterSingleton, Z_Construct_UClass_UGSMAbilityTagRelationshipFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityTagRelationshipFactory.OuterSingleton;
}
template<> GASMAGICIANEDITOR_API UClass* StaticClass<UGSMAbilityTagRelationshipFactory>()
{
	return UGSMAbilityTagRelationshipFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityTagRelationshipFactory);
UGSMAbilityTagRelationshipFactory::~UGSMAbilityTagRelationshipFactory() {}
// End Class UGSMAbilityTagRelationshipFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilityTagRelationshipFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityTagRelationshipFactory, UGSMAbilityTagRelationshipFactory::StaticClass, TEXT("UGSMAbilityTagRelationshipFactory"), &Z_Registration_Info_UClass_UGSMAbilityTagRelationshipFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityTagRelationshipFactory), 3292272245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilityTagRelationshipFactory_h_846963324(TEXT("/Script/GASMagicianEditor"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilityTagRelationshipFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMAbilityTagRelationshipFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
