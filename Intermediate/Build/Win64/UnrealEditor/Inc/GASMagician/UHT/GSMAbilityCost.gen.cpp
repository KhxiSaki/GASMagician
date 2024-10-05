// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/GSMAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilityCost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCost();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilityCost
void UGSMAbilityCost::StaticRegisterNativesUGSMAbilityCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilityCost);
UClass* Z_Construct_UClass_UGSMAbilityCost_NoRegister()
{
	return UGSMAbilityCost::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGSMAbilityCost\n *\n * Base class for costs that a GSMGameplayAbility has (e.g., ammo or charges)\n */" },
#endif
		{ "IncludePath", "GSMAbilityCost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GSMAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGSMAbilityCost\n\nBase class for costs that a GSMGameplayAbility has (e.g., ammo or charges)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
#endif
		{ "ModuleRelativePath", "Public/GSMAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGSMAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
{
	((UGSMAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSMAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSMAbilityCost), &Z_Construct_UClass_UGSMAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCostOnHit_MetaData), NewProp_bOnlyApplyCostOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilityCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilityCost_Statics::ClassParams = {
	&UGSMAbilityCost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGSMAbilityCost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCost_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilityCost()
{
	if (!Z_Registration_Info_UClass_UGSMAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilityCost.OuterSingleton, Z_Construct_UClass_UGSMAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilityCost.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilityCost>()
{
	return UGSMAbilityCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilityCost);
UGSMAbilityCost::~UGSMAbilityCost() {}
// End Class UGSMAbilityCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilityCost, UGSMAbilityCost::StaticClass, TEXT("UGSMAbilityCost"), &Z_Registration_Info_UClass_UGSMAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilityCost), 2731953302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCost_h_1201879540(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_GSMAbilityCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
