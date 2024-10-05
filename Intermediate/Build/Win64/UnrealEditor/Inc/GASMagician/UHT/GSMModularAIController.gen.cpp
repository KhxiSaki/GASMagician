// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularAIController();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularAIController
void AGSMModularAIController::StaticRegisterNativesAGSMModularAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularAIController);
UClass* Z_Construct_UClass_AGSMModularAIController_NoRegister()
{
	return AGSMModularAIController::StaticClass();
}
struct Z_Construct_UClass_AGSMModularAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularAIController_Statics::ClassParams = {
	&AGSMModularAIController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularAIController()
{
	if (!Z_Registration_Info_UClass_AGSMModularAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularAIController.OuterSingleton, Z_Construct_UClass_AGSMModularAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularAIController.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularAIController>()
{
	return AGSMModularAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularAIController);
AGSMModularAIController::~AGSMModularAIController() {}
// End Class AGSMModularAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularAIController, AGSMModularAIController::StaticClass, TEXT("AGSMModularAIController"), &Z_Registration_Info_UClass_AGSMModularAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularAIController), 3315148496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularAIController_h_1064949292(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
