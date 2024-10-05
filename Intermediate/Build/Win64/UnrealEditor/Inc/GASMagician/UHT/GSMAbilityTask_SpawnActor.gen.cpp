// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityTasks/GSMAbilityTask_SpawnActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityTask_SpawnActor() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnActor();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilityTask_SpawnActor
void UGSMAbilityTask_SpawnActor::StaticRegisterNativesUGSMAbilityTask_SpawnActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityTask_SpawnActor);
UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnActor_NoRegister()
{
	return UGSMAbilityTask_SpawnActor::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityTasks/GSMAbilityTask_SpawnActor.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMAbilityTask_SpawnActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityTask_SpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::ClassParams = {
	&UGSMAbilityTask_SpawnActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityTask_SpawnActor()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityTask_SpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityTask_SpawnActor.OuterSingleton, Z_Construct_UClass_UGSMAbilityTask_SpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityTask_SpawnActor.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityTask_SpawnActor>()
{
	return UGSMAbilityTask_SpawnActor::StaticClass();
}
UGSMAbilityTask_SpawnActor::UGSMAbilityTask_SpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityTask_SpawnActor);
UGSMAbilityTask_SpawnActor::~UGSMAbilityTask_SpawnActor() {}
// End Class UGSMAbilityTask_SpawnActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityTask_SpawnActor, UGSMAbilityTask_SpawnActor::StaticClass, TEXT("UGSMAbilityTask_SpawnActor"), &Z_Registration_Info_UClass_UGSMAbilityTask_SpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityTask_SpawnActor), 3146503418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnActor_h_268483529(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMAbilityTask_SpawnActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
