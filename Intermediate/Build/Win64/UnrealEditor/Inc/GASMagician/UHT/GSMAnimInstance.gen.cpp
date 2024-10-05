// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Animations/GSMAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAnimInstance();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAnimInstance Function ReceiveAbilitySystem
struct GSMAnimInstance_eventReceiveAbilitySystem_Parms
{
	UAbilitySystemComponent* AbilitySystem;
};
static const FName NAME_UGSMAnimInstance_ReceiveAbilitySystem = FName(TEXT("ReceiveAbilitySystem"));
void UGSMAnimInstance::ReceiveAbilitySystem(UAbilitySystemComponent* AbilitySystem)
{
	GSMAnimInstance_eventReceiveAbilitySystem_Parms Parms;
	Parms.AbilitySystem=AbilitySystem;
	UFunction* Func = FindFunctionChecked(NAME_UGSMAnimInstance_ReceiveAbilitySystem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GASMagician" },
		{ "DisplayName", "Initialize with Ability System (GAS Magician)" },
		{ "ModuleRelativePath", "Public/Animations/GSMAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAnimInstance_eventReceiveAbilitySystem_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::NewProp_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAnimInstance, nullptr, "ReceiveAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::PropPointers), sizeof(GSMAnimInstance_eventReceiveAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMAnimInstance_eventReceiveAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGSMAnimInstance Function ReceiveAbilitySystem

// Begin Class UGSMAnimInstance
void UGSMAnimInstance::StaticRegisterNativesUGSMAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAnimInstance);
UClass* Z_Construct_UClass_UGSMAnimInstance_NoRegister()
{
	return UGSMAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGSMAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/GSMAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/GSMAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GASMagician" },
		{ "ModuleRelativePath", "Public/Animations/GSMAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAnimInstance_ReceiveAbilitySystem, "ReceiveAbilitySystem" }, // 549548404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAnimInstance_Statics::ClassParams = {
	&UGSMAnimInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAnimInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGSMAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAnimInstance.OuterSingleton, Z_Construct_UClass_UGSMAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAnimInstance.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAnimInstance>()
{
	return UGSMAnimInstance::StaticClass();
}
UGSMAnimInstance::UGSMAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAnimInstance);
UGSMAnimInstance::~UGSMAnimInstance() {}
// End Class UGSMAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAnimInstance, UGSMAnimInstance::StaticClass, TEXT("UGSMAnimInstance"), &Z_Registration_Info_UClass_UGSMAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAnimInstance), 4160899508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_3697281288(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Animations_GSMAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
