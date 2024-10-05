// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameMode();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameMode_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameModeBase();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularGameModeBase
void AGSMModularGameModeBase::StaticRegisterNativesAGSMModularGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularGameModeBase);
UClass* Z_Construct_UClass_AGSMModularGameModeBase_NoRegister()
{
	return AGSMModularGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AGSMModularGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a GSMModularGameStateBase */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a GSMModularGameStateBase" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularGameModeBase_Statics::ClassParams = {
	&AGSMModularGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularGameModeBase()
{
	if (!Z_Registration_Info_UClass_AGSMModularGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularGameModeBase.OuterSingleton, Z_Construct_UClass_AGSMModularGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularGameModeBase.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularGameModeBase>()
{
	return AGSMModularGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularGameModeBase);
AGSMModularGameModeBase::~AGSMModularGameModeBase() {}
// End Class AGSMModularGameModeBase

// Begin Class AGSMModularGameMode
void AGSMModularGameMode::StaticRegisterNativesAGSMModularGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularGameMode);
UClass* Z_Construct_UClass_AGSMModularGameMode_NoRegister()
{
	return AGSMModularGameMode::StaticClass();
}
struct Z_Construct_UClass_AGSMModularGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularGameMode_Statics::ClassParams = {
	&AGSMModularGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularGameMode()
{
	if (!Z_Registration_Info_UClass_AGSMModularGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularGameMode.OuterSingleton, Z_Construct_UClass_AGSMModularGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularGameMode.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularGameMode>()
{
	return AGSMModularGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularGameMode);
AGSMModularGameMode::~AGSMModularGameMode() {}
// End Class AGSMModularGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularGameModeBase, AGSMModularGameModeBase::StaticClass, TEXT("AGSMModularGameModeBase"), &Z_Registration_Info_UClass_AGSMModularGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularGameModeBase), 2449621349U) },
		{ Z_Construct_UClass_AGSMModularGameMode, AGSMModularGameMode::StaticClass, TEXT("AGSMModularGameMode"), &Z_Registration_Info_UClass_AGSMModularGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularGameMode), 4047269944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameMode_h_2597992601(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
