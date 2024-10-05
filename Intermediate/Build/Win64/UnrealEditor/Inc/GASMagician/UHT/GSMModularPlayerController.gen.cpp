// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularPlayerController();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularPlayerController
void AGSMModularPlayerController::StaticRegisterNativesAGSMModularPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularPlayerController);
UClass* Z_Construct_UClass_AGSMModularPlayerController_NoRegister()
{
	return AGSMModularPlayerController::StaticClass();
}
struct Z_Construct_UClass_AGSMModularPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGSMModularPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularPlayerController_Statics::ClassParams = {
	&AGSMModularPlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularPlayerController()
{
	if (!Z_Registration_Info_UClass_AGSMModularPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularPlayerController.OuterSingleton, Z_Construct_UClass_AGSMModularPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularPlayerController.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularPlayerController>()
{
	return AGSMModularPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularPlayerController);
AGSMModularPlayerController::~AGSMModularPlayerController() {}
// End Class AGSMModularPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularPlayerController, AGSMModularPlayerController::StaticClass, TEXT("AGSMModularPlayerController"), &Z_Registration_Info_UClass_AGSMModularPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularPlayerController), 1916259588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerController_h_1134357454(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
