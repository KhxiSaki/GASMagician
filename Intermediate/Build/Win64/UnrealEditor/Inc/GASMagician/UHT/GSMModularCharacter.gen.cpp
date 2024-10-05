// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/ModularGameplayActors/GSMModularCharacter.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMModularCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularCharacter();
GASMAGICIAN_API UClass* Z_Construct_UClass_AGSMModularCharacter_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class AGSMModularCharacter Function CalculateUpdatedDamage
struct GSMModularCharacter_eventCalculateUpdatedDamage_Parms
{
	float OriginalDamage;
	const UGSMAttributeSet* SourceAttributes;
	FGameplayTagContainer EffectTags;
	float NewDamage;
};
static const FName NAME_AGSMModularCharacter_CalculateUpdatedDamage = FName(TEXT("CalculateUpdatedDamage"));
void AGSMModularCharacter::CalculateUpdatedDamage(float OriginalDamage, const UGSMAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage)
{
	GSMModularCharacter_eventCalculateUpdatedDamage_Parms Parms;
	Parms.OriginalDamage=OriginalDamage;
	Parms.SourceAttributes=SourceAttributes;
	Parms.EffectTags=EffectTags;
	Parms.NewDamage=NewDamage;
	UFunction* Func = FindFunctionChecked(NAME_AGSMModularCharacter_CalculateUpdatedDamage);
	ProcessEvent(Func,&Parms);
	NewDamage=Parms.NewDamage;
}
struct Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End AActor Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage = { "OriginalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventCalculateUpdatedDamage_Parms, OriginalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventCalculateUpdatedDamage_Parms, SourceAttributes), Z_Construct_UClass_UGSMAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributes_MetaData), NewProp_SourceAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_EffectTags = { "EffectTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventCalculateUpdatedDamage_Parms, EffectTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventCalculateUpdatedDamage_Parms, NewDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_EffectTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::NewProp_NewDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGSMModularCharacter, nullptr, "CalculateUpdatedDamage", nullptr, nullptr, Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::PropPointers), sizeof(GSMModularCharacter_eventCalculateUpdatedDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMModularCharacter_eventCalculateUpdatedDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGSMModularCharacter Function CalculateUpdatedDamage

// Begin Class AGSMModularCharacter Function OnDeath
static const FName NAME_AGSMModularCharacter_OnDeath = FName(TEXT("OnDeath"));
void AGSMModularCharacter::OnDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_AGSMModularCharacter_OnDeath);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGSMModularCharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGSMModularCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGSMModularCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGSMModularCharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGSMModularCharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGSMModularCharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGSMModularCharacter Function OnDeath

// Begin Class AGSMModularCharacter Function OnInflictDamage
struct GSMModularCharacter_eventOnInflictDamage_Parms
{
	AGSMModularCharacter* WhoWasDamaged;
	float DamageAmount;
};
static const FName NAME_AGSMModularCharacter_OnInflictDamage = FName(TEXT("OnInflictDamage"));
void AGSMModularCharacter::OnInflictDamage(AGSMModularCharacter* WhoWasDamaged, float DamageAmount)
{
	GSMModularCharacter_eventOnInflictDamage_Parms Parms;
	Parms.WhoWasDamaged=WhoWasDamaged;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_AGSMModularCharacter_OnInflictDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoWasDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::NewProp_WhoWasDamaged = { "WhoWasDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventOnInflictDamage_Parms, WhoWasDamaged), Z_Construct_UClass_AGSMModularCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventOnInflictDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::NewProp_WhoWasDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGSMModularCharacter, nullptr, "OnInflictDamage", nullptr, nullptr, Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::PropPointers), sizeof(GSMModularCharacter_eventOnInflictDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMModularCharacter_eventOnInflictDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGSMModularCharacter Function OnInflictDamage

// Begin Class AGSMModularCharacter Function OnTakeDamage
struct GSMModularCharacter_eventOnTakeDamage_Parms
{
	AGSMModularCharacter* WhoAttackedMe;
	float DamageAmount;
};
static const FName NAME_AGSMModularCharacter_OnTakeDamage = FName(TEXT("OnTakeDamage"));
void AGSMModularCharacter::OnTakeDamage(AGSMModularCharacter* WhoAttackedMe, float DamageAmount)
{
	GSMModularCharacter_eventOnTakeDamage_Parms Parms;
	Parms.WhoAttackedMe=WhoAttackedMe;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_AGSMModularCharacter_OnTakeDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoAttackedMe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::NewProp_WhoAttackedMe = { "WhoAttackedMe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventOnTakeDamage_Parms, WhoAttackedMe), Z_Construct_UClass_AGSMModularCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMModularCharacter_eventOnTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::NewProp_WhoAttackedMe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGSMModularCharacter, nullptr, "OnTakeDamage", nullptr, nullptr, Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::PropPointers), sizeof(GSMModularCharacter_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(GSMModularCharacter_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGSMModularCharacter Function OnTakeDamage

// Begin Class AGSMModularCharacter
void AGSMModularCharacter::StaticRegisterNativesAGSMModularCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSMModularCharacter);
UClass* Z_Construct_UClass_AGSMModularCharacter_NoRegister()
{
	return AGSMModularCharacter::StaticClass();
}
struct Z_Construct_UClass_AGSMModularCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularGameplayActors/GSMModularCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSMModularCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGSMModularCharacter_CalculateUpdatedDamage, "CalculateUpdatedDamage" }, // 3098379274
		{ &Z_Construct_UFunction_AGSMModularCharacter_OnDeath, "OnDeath" }, // 1055777931
		{ &Z_Construct_UFunction_AGSMModularCharacter_OnInflictDamage, "OnInflictDamage" }, // 2707191299
		{ &Z_Construct_UFunction_AGSMModularCharacter_OnTakeDamage, "OnTakeDamage" }, // 2532566077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSMModularCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGSMModularCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSMModularCharacter, AbilitySystemComponent), Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSMModularCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSMModularCharacter_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGSMModularCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGSMModularCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularCharacter, IGameplayCueInterface), false },  // 881046121
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGSMModularCharacter, IGameplayTagAssetInterface), false },  // 2592985258
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSMModularCharacter_Statics::ClassParams = {
	&AGSMModularCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGSMModularCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSMModularCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSMModularCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGSMModularCharacter()
{
	if (!Z_Registration_Info_UClass_AGSMModularCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSMModularCharacter.OuterSingleton, Z_Construct_UClass_AGSMModularCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGSMModularCharacter.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<AGSMModularCharacter>()
{
	return AGSMModularCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGSMModularCharacter);
AGSMModularCharacter::~AGSMModularCharacter() {}
// End Class AGSMModularCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGSMModularCharacter, AGSMModularCharacter::StaticClass, TEXT("AGSMModularCharacter"), &Z_Registration_Info_UClass_AGSMModularCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSMModularCharacter), 4264566543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_1473507301(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_ModularGameplayActors_GSMModularCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
