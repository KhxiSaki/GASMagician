// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityTasks/GSMAbilityTask_SpawnProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityTask_SpawnProjectile() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilityTask_SpawnProjectile
void UGSMAbilityTask_SpawnProjectile::StaticRegisterNativesUGSMAbilityTask_SpawnProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityTask_SpawnProjectile);
UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_NoRegister()
{
	return UGSMAbilityTask_SpawnProjectile::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityTasks/GSMAbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMAbilityTask_SpawnProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityTask_SpawnProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::ClassParams = {
	&UGSMAbilityTask_SpawnProjectile::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityTask_SpawnProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityTask_SpawnProjectile.OuterSingleton, Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityTask_SpawnProjectile.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityTask_SpawnProjectile>()
{
	return UGSMAbilityTask_SpawnProjectile::StaticClass();
}
UGSMAbilityTask_SpawnProjectile::UGSMAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityTask_SpawnProjectile);
UGSMAbilityTask_SpawnProjectile::~UGSMAbilityTask_SpawnProjectile() {}
// End Class UGSMAbilityTask_SpawnProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityTask_SpawnProjectile, UGSMAbilityTask_SpawnProjectile::StaticClass, TEXT("UGSMAbilityTask_SpawnProjectile"), &Z_Registration_Info_UClass_UGSMAbilityTask_SpawnProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityTask_SpawnProjectile), 1721481137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnProjectile_h_2631635303(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
