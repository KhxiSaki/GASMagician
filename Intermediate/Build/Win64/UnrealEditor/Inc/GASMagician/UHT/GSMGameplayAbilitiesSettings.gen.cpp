// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/DeveloperSettings/GSMGameplayAbilitiesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMGameplayAbilitiesSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayAbilitiesSettings();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMGameplayAbilitiesSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMGameplayAbilitiesSettings
void UGSMGameplayAbilitiesSettings::StaticRegisterNativesUGSMGameplayAbilitiesSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMGameplayAbilitiesSettings);
UClass* Z_Construct_UClass_UGSMGameplayAbilitiesSettings_NoRegister()
{
	return UGSMGameplayAbilitiesSettings::StaticClass();
}
struct Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeveloperSettings/GSMGameplayAbilitiesSettings.h" },
		{ "ModuleRelativePath", "Public/DeveloperSettings/GSMGameplayAbilitiesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledAutomaticLoadingOfGameplayCue_MetaData[] = {
		{ "Category", "GameplayCues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This makes it so GameplayCues will load the first time that they're requested (or use your AssetManager to manually load them).\n// By default it loads *every* GameplayCue in the project and all of their referenced assets when the map starts. In a large game\n// with lots of GCs, this could be hundreds of megabytes or more of unused assets loaded in RAM if particular GCs are not used in\n// the current map.\n" },
#endif
		{ "ModuleRelativePath", "Public/DeveloperSettings/GSMGameplayAbilitiesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This makes it so GameplayCues will load the first time that they're requested (or use your AssetManager to manually load them).\nBy default it loads *every* GameplayCue in the project and all of their referenced assets when the map starts. In a large game\nwith lots of GCs, this could be hundreds of megabytes or more of unused assets loaded in RAM if particular GCs are not used in\nthe current map." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabledAutomaticLoadingOfGameplayCue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledAutomaticLoadingOfGameplayCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMGameplayAbilitiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::NewProp_bEnabledAutomaticLoadingOfGameplayCue_SetBit(void* Obj)
{
	((UGSMGameplayAbilitiesSettings*)Obj)->bEnabledAutomaticLoadingOfGameplayCue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::NewProp_bEnabledAutomaticLoadingOfGameplayCue = { "bEnabledAutomaticLoadingOfGameplayCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSMGameplayAbilitiesSettings), &Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::NewProp_bEnabledAutomaticLoadingOfGameplayCue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabledAutomaticLoadingOfGameplayCue_MetaData), NewProp_bEnabledAutomaticLoadingOfGameplayCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::NewProp_bEnabledAutomaticLoadingOfGameplayCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::ClassParams = {
	&UGSMGameplayAbilitiesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMGameplayAbilitiesSettings()
{
	if (!Z_Registration_Info_UClass_UGSMGameplayAbilitiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMGameplayAbilitiesSettings.OuterSingleton, Z_Construct_UClass_UGSMGameplayAbilitiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMGameplayAbilitiesSettings.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMGameplayAbilitiesSettings>()
{
	return UGSMGameplayAbilitiesSettings::StaticClass();
}
UGSMGameplayAbilitiesSettings::UGSMGameplayAbilitiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMGameplayAbilitiesSettings);
UGSMGameplayAbilitiesSettings::~UGSMGameplayAbilitiesSettings() {}
// End Class UGSMGameplayAbilitiesSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_DeveloperSettings_GSMGameplayAbilitiesSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMGameplayAbilitiesSettings, UGSMGameplayAbilitiesSettings::StaticClass, TEXT("UGSMGameplayAbilitiesSettings"), &Z_Registration_Info_UClass_UGSMGameplayAbilitiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMGameplayAbilitiesSettings), 596396512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_DeveloperSettings_GSMGameplayAbilitiesSettings_h_4099363040(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_DeveloperSettings_GSMGameplayAbilitiesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_DeveloperSettings_GSMGameplayAbilitiesSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
