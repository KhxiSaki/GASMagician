// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMAbilityCooldown.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityCooldown() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCooldown();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCooldown_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilityCooldown
void UGSMAbilityCooldown::StaticRegisterNativesUGSMAbilityCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityCooldown);
UClass* Z_Construct_UClass_UGSMAbilityCooldown_NoRegister()
{
	return UGSMAbilityCooldown::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGSMAbilityCooldown\n *\n * Base class for cooldowns that a GSMGameplayAbility has.\n */" },
#endif
		{ "IncludePath", "GSMAbilityCooldown.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GSMAbilityCooldown.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGSMAbilityCooldown\n\nBase class for cooldowns that a GSMGameplayAbility has." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCooldownOnHit_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityCooldown.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCooldownOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCooldownOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGSMAbilityCooldown_Statics::NewProp_bOnlyApplyCooldownOnHit_SetBit(void* Obj)
{
	((UGSMAbilityCooldown*)Obj)->bOnlyApplyCooldownOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSMAbilityCooldown_Statics::NewProp_bOnlyApplyCooldownOnHit = { "bOnlyApplyCooldownOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSMAbilityCooldown), &Z_Construct_UClass_UGSMAbilityCooldown_Statics::NewProp_bOnlyApplyCooldownOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCooldownOnHit_MetaData), NewProp_bOnlyApplyCooldownOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilityCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityCooldown_Statics::NewProp_bOnlyApplyCooldownOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCooldown_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilityCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityCooldown_Statics::ClassParams = {
	&UGSMAbilityCooldown::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMAbilityCooldown_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCooldown_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityCooldown()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityCooldown.OuterSingleton, Z_Construct_UClass_UGSMAbilityCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityCooldown.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityCooldown>()
{
	return UGSMAbilityCooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityCooldown);
UGSMAbilityCooldown::~UGSMAbilityCooldown() {}
// End Class UGSMAbilityCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityCooldown, UGSMAbilityCooldown::StaticClass, TEXT("UGSMAbilityCooldown"), &Z_Registration_Info_UClass_UGSMAbilityCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityCooldown), 51354423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCooldown_h_2717485105(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
