// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagicianEditor/Public/Factories/GSMGameplayEffectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayEffectFactory() {}

// Begin Cross Module References
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMGameplayEffectFactory();
GASMAGICIANEDITOR_API UClass* Z_Construct_UClass_UGSMGameplayEffectFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GASMagicianEditor();
// End Cross Module References

// Begin Class UGSMGameplayEffectFactory
void UGSMGameplayEffectFactory::StaticRegisterNativesUGSMGameplayEffectFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayEffectFactory);
UClass* Z_Construct_UClass_UGSMGameplayEffectFactory_NoRegister()
{
	return UGSMGameplayEffectFactory::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayEffectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/GSMGameplayEffectFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/GSMGameplayEffectFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayEffectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagicianEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::ClassParams = {
	&UGSMGameplayEffectFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayEffectFactory()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayEffectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayEffectFactory.OuterSingleton, Z_Construct_UClass_UGSMGameplayEffectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayEffectFactory.OuterSingleton;
}
template<> GASMAGICIANEDITOR_API UClass* StaticClass<UGSMGameplayEffectFactory>()
{
	return UGSMGameplayEffectFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayEffectFactory);
UGSMGameplayEffectFactory::~UGSMGameplayEffectFactory() {}
// End Class UGSMGameplayEffectFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMGameplayEffectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayEffectFactory, UGSMGameplayEffectFactory::StaticClass, TEXT("UGSMGameplayEffectFactory"), &Z_Registration_Info_UClass_UGSMGameplayEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayEffectFactory), 443080845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMGameplayEffectFactory_h_282000009(TEXT("/Script/GASMagicianEditor"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMGameplayEffectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagicianEditor_Public_Factories_GSMGameplayEffectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
