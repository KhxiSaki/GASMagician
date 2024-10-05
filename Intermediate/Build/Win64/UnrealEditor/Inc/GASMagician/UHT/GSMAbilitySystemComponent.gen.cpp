// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Components/GSMAbilitySystemComponent.h"
#include "GASMagician/Public/GSMAbilitySet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMAbilitySystemComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySet_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_NoRegister();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility();
GASMAGICIAN_API UScriptStruct* Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMAbilitySystemComponent Function OnPawnControllerChanged
struct Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics
{
	struct GSMAbilitySystemComponent_eventOnPawnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UFunction to be able to bind with dynamic delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFunction to be able to bind with dynamic delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilitySystemComponent_eventOnPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMAbilitySystemComponent_eventOnPawnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMAbilitySystemComponent, nullptr, "OnPawnControllerChanged", nullptr, nullptr, Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::GSMAbilitySystemComponent_eventOnPawnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::GSMAbilitySystemComponent_eventOnPawnControllerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMAbilitySystemComponent::execOnPawnControllerChanged)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnControllerChanged(Z_Param_Pawn,Z_Param_NewController);
	P_NATIVE_END;
}
// End Class UGSMAbilitySystemComponent Function OnPawnControllerChanged

// Begin Class UGSMAbilitySystemComponent
void UGSMAbilitySystemComponent::StaticRegisterNativesUGSMAbilitySystemComponent()
{
	UClass* Class = UGSMAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPawnControllerChanged", &UGSMAbilitySystemComponent::execOnPawnControllerChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMAbilitySystemComponent);
UClass* Z_Construct_UClass_UGSMAbilitySystemComponent_NoRegister()
{
	return UGSMAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGSMAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/GSMAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "GASMagician|Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "GASMagician|Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "GASMagician|Attribute Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[] = {
		{ "Category", "GASMagician|Ability Sets" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "AbilitySet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "GASMagician|TagRelationship" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "TagRelationship" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGameplayTags_MetaData[] = {
		{ "Category", "GASMagician|GameplayTags" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "GameplayTags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagResponseTables_MetaData[] = {
		{ "Category", "GASMagician|GameplayTags" },
		{ "ModuleRelativePath", "Public/Components/GSMAbilitySystemComponent.h" },
		{ "TitleProperty", "GameplayTags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterGameplayTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagResponseTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagResponseTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMAbilitySystemComponent_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 3647405239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1006447709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 1006447709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_GameplayEffect, METADATA_PARAMS(0, nullptr) }; // 1134022972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayEffects_MetaData), NewProp_GrantedGameplayEffects_MetaData) }; // 1134022972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSMAbilitySet_AttributeSet, METADATA_PARAMS(0, nullptr) }; // 3585252143
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 3585252143
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGSMAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilitySets_MetaData), NewProp_GrantedAbilitySets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_UGSMAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_CharacterGameplayTags = { "CharacterGameplayTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, CharacterGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGameplayTags_MetaData), NewProp_CharacterGameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagResponseTables_Inner = { "TagResponseTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTagReponseTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagResponseTables = { "TagResponseTables", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMAbilitySystemComponent, TagResponseTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagResponseTables_MetaData), NewProp_TagResponseTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_GrantedAbilitySets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_CharacterGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagResponseTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::NewProp_TagResponseTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::ClassParams = {
	&UGSMAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGSMAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGSMAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMAbilitySystemComponent.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMAbilitySystemComponent>()
{
	return UGSMAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMAbilitySystemComponent);
UGSMAbilitySystemComponent::~UGSMAbilitySystemComponent() {}
// End Class UGSMAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMAbilitySystemComponent, UGSMAbilitySystemComponent::StaticClass, TEXT("UGSMAbilitySystemComponent"), &Z_Registration_Info_UClass_UGSMAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMAbilitySystemComponent), 565274320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_2850346850(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Components_GSMAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
