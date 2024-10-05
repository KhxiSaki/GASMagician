// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Projectile/GSMProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMProjectile();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMProjectile
void AGSMProjectile::StaticRegisterNativesAGSMProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMProjectile);
UClass* Z_Construct_UClass_AGSMProjectile_NoRegister()
{
	return AGSMProjectile::StaticClass();
}
struct Z_Construct_UClass_AGSMProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile/GSMProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectile/GSMProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMProjectile_Statics::ClassParams = {
	&AGSMProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMProjectile()
{
	if (!Z_Registration_Info_UClass_AGSMProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMProjectile.OuterSingleton, Z_Construct_UClass_AGSMProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMProjectile.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMProjectile>()
{
	return AGSMProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMProjectile);
AGSMProjectile::~AGSMProjectile() {}
// End Class AGSMProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMProjectile, AGSMProjectile::StaticClass, TEXT("AGSMProjectile"), &Z_Registration_Info_UClass_AGSMProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMProjectile), 88538451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_2596508587(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
