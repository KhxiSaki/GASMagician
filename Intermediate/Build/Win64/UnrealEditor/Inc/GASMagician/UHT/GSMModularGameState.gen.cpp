// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameState();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameState_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameStateBase();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularGameStateBase
void AGSMModularGameStateBase::StaticRegisterNativesAGSMModularGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularGameStateBase);
UClass* Z_Construct_UClass_AGSMModularGameStateBase_NoRegister()
{
	return AGSMModularGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AGSMModularGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a GSMModularGameModeBase */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a GSMModularGameModeBase" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularGameStateBase_Statics::ClassParams = {
	&AGSMModularGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularGameStateBase()
{
	if (!Z_Registration_Info_UClass_AGSMModularGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularGameStateBase.OuterSingleton, Z_Construct_UClass_AGSMModularGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularGameStateBase.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularGameStateBase>()
{
	return AGSMModularGameStateBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularGameStateBase);
AGSMModularGameStateBase::~AGSMModularGameStateBase() {}
// End Class AGSMModularGameStateBase

// Begin Class AGSMModularGameState
void AGSMModularGameState::StaticRegisterNativesAGSMModularGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularGameState);
UClass* Z_Construct_UClass_AGSMModularGameState_NoRegister()
{
	return AGSMModularGameState::StaticClass();
}
struct Z_Construct_UClass_AGSMModularGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularGameState_Statics::ClassParams = {
	&AGSMModularGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularGameState()
{
	if (!Z_Registration_Info_UClass_AGSMModularGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularGameState.OuterSingleton, Z_Construct_UClass_AGSMModularGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularGameState.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularGameState>()
{
	return AGSMModularGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularGameState);
AGSMModularGameState::~AGSMModularGameState() {}
// End Class AGSMModularGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularGameStateBase, AGSMModularGameStateBase::StaticClass, TEXT("AGSMModularGameStateBase"), &Z_Registration_Info_UClass_AGSMModularGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularGameStateBase), 2486289875U) },
		{ Z_Construct_UClass_AGSMModularGameState, AGSMModularGameState::StaticClass, TEXT("AGSMModularGameState"), &Z_Registration_Info_UClass_AGSMModularGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularGameState), 1885528769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameState_h_3751957395(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
