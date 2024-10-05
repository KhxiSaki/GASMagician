// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularActor();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularActor_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularActor
void AGSMModularActor::StaticRegisterNativesAGSMModularActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularActor);
UClass* Z_Construct_UClass_AGSMModularActor_NoRegister()
{
	return AGSMModularActor::StaticClass();
}
struct Z_Construct_UClass_AGSMModularActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModularGameplayActors/GSMModularActor.h" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGSMModularActor_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSMModularActor, AbilitySystemComponent), Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSMModularActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSMModularActor_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGSMModularActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGSMModularActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularActor, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularActor, IGameplayCueInterface), false },  // 881046121
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularActor, IGameplayTagAssetInterface), false },  // 2592985258
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularActor_Statics::ClassParams = {
	&AGSMModularActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGSMModularActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularActor()
{
	if (!Z_Registration_Info_UClass_AGSMModularActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularActor.OuterSingleton, Z_Construct_UClass_AGSMModularActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularActor.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularActor>()
{
	return AGSMModularActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularActor);
AGSMModularActor::~AGSMModularActor() {}
// End Class AGSMModularActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularActor, AGSMModularActor::StaticClass, TEXT("AGSMModularActor"), &Z_Registration_Info_UClass_AGSMModularActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularActor), 3668320488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_3566284087(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
