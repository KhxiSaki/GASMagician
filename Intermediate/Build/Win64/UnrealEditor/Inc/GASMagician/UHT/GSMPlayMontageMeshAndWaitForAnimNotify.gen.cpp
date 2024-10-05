// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMPlayMontageMeshAndWaitForAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FMontageMeshWaitForAnimNotifyDelegate
struct Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "MontageMeshWaitForAnimNotifyDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMontageMeshWaitForAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageMeshWaitForAnimNotifyDelegate)
{
	MontageMeshWaitForAnimNotifyDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FMontageMeshWaitForAnimNotifyDelegate

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function CreatePlayMontageAndWaitProxy
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics
{
	struct GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAnimMontage* MontageToPlay;
		USkeletalMeshComponent* SkeletalMeshComponent;
		float Rate;
		FName StartSection;
		bool bStopWhenAbilityEnds;
		float AnimRootMotionTranslationScale;
		float StartTimeSeconds;
		bool bAllowInterruptAfterBlendOut;
		FName AnimNotifyName;
		UGSMPlayMontageMeshAndWaitForAnimNotify* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Start playing an animation montage on the avatar actor and wait for it to finish\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param SkeletalMeshComponent\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param StartSection If not empty, named montage section to start from\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n\x09 * @param bAllowInterruptAfterBlendOut If true, you can receive OnInterrupted after an OnBlendOut started (otherwise OnInterrupted will not fire when interrupted, but you will not get OnComplete).\n\x09 * @param AnimNotifyName\n\x09 */" },
#endif
		{ "CPP_Default_AnimNotifyName", "None" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bAllowInterruptAfterBlendOut", "false" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "CPP_Default_StartTimeSeconds", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "PlayMontageMeshAndWaitForAnimNotify" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing an animation montage on the avatar actor and wait for it to finish\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param SkeletalMeshComponent\n@param Rate Change to play the montage faster or slower\n@param StartSection If not empty, named montage section to start from\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n@param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n@param bAllowInterruptAfterBlendOut If true, you can receive OnInterrupted after an OnBlendOut started (otherwise OnInterrupted will not fire when interrupted, but you will not get OnComplete).\n@param AnimNotifyName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
	static void NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterruptAfterBlendOut;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms), &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, StartTimeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj)
{
	((GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms*)Obj)->bAllowInterruptAfterBlendOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bAllowInterruptAfterBlendOut = { "bAllowInterruptAfterBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms), &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimNotifyName = { "AnimNotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, AnimNotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms, ReturnValue), Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_bAllowInterruptAfterBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "CreatePlayMontageAndWaitProxy", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventCreatePlayMontageAndWaitProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execCreatePlayMontageAndWaitProxy)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeSeconds);
	P_GET_UBOOL(Z_Param_bAllowInterruptAfterBlendOut);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimNotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGSMPlayMontageMeshAndWaitForAnimNotify**)Z_Param__Result=UGSMPlayMontageMeshAndWaitForAnimNotify::CreatePlayMontageAndWaitProxy(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_SkeletalMeshComponent,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_StartTimeSeconds,Z_Param_bAllowInterruptAfterBlendOut,Z_Param_AnimNotifyName);
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function CreatePlayMontageAndWaitProxy

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnAnimationNotifyBeginReceived
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics
{
	struct GSMPlayMontageMeshAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointPayload_MetaData), NewProp_BranchingPointPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_BranchingPointPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnAnimationNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnAnimationNotifyBeginReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnAnimationNotifyBeginReceived

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnGameplayAbilityCancelled
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback function for when the owning Gameplay Ability is cancelled */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback function for when the owning Gameplay Ability is cancelled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnGameplayAbilityCancelled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnGameplayAbilityCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayAbilityCancelled();
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnGameplayAbilityCancelled

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageBlendedIn
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics
{
	struct GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms
	{
		UAnimMontage* Montage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnMontageBlendedIn", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageBlendedIn)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendedIn(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageBlendedIn

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageBlendingOut
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics
{
	struct GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageBlendingOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageBlendingOut

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageEnded
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics
{
	struct GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::GSMPlayMontageMeshAndWaitForAnimNotify_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageEnded

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageInterrupted
struct Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, nullptr, "OnMontageInterrupted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageInterrupted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageInterrupted();
	P_NATIVE_END;
}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify Function OnMontageInterrupted

// Begin Class UGSMPlayMontageMeshAndWaitForAnimNotify
void UGSMPlayMontageMeshAndWaitForAnimNotify::StaticRegisterNativesUGSMPlayMontageMeshAndWaitForAnimNotify()
{
	UClass* Class = UGSMPlayMontageMeshAndWaitForAnimNotify::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayMontageAndWaitProxy", &UGSMPlayMontageMeshAndWaitForAnimNotify::execCreatePlayMontageAndWaitProxy },
		{ "OnAnimationNotifyBeginReceived", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnAnimationNotifyBeginReceived },
		{ "OnGameplayAbilityCancelled", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnGameplayAbilityCancelled },
		{ "OnMontageBlendedIn", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageBlendedIn },
		{ "OnMontageBlendingOut", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageBlendingOut },
		{ "OnMontageEnded", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageEnded },
		{ "OnMontageInterrupted", &UGSMPlayMontageMeshAndWaitForAnimNotify::execOnMontageInterrupted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMPlayMontageMeshAndWaitForAnimNotify);
UClass* Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_NoRegister()
{
	return UGSMPlayMontageMeshAndWaitForAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendedIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterruptAfterBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayMontageMeshAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendedIn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimNotify;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static void NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterruptAfterBlendOut;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_CreatePlayMontageAndWaitProxy, "CreatePlayMontageAndWaitProxy" }, // 1943429544
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnAnimationNotifyBeginReceived, "OnAnimationNotifyBeginReceived" }, // 1073554261
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnGameplayAbilityCancelled, "OnGameplayAbilityCancelled" }, // 2003078818
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendedIn, "OnMontageBlendedIn" }, // 3784420486
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 2129084753
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageEnded, "OnMontageEnded" }, // 1527919344
		{ &Z_Construct_UFunction_UGSMPlayMontageMeshAndWaitForAnimNotify_OnMontageInterrupted, "OnMontageInterrupted" }, // 3038270930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMPlayMontageMeshAndWaitForAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnCompleted), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2494822722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnBlendedIn = { "OnBlendedIn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnBlendedIn), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendedIn_MetaData), NewProp_OnBlendedIn_MetaData) }; // 2494822722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnBlendOut), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_MetaData), NewProp_OnBlendOut_MetaData) }; // 2494822722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnInterrupted), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterrupted_MetaData), NewProp_OnInterrupted_MetaData) }; // 2494822722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnCancelled), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 2494822722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnAnimNotify = { "OnAnimNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, OnAnimNotify), Z_Construct_UDelegateFunction_GASMagician_MontageMeshWaitForAnimNotifyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimNotify_MetaData), NewProp_OnAnimNotify_MetaData) }; // 2494822722
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSection_MetaData), NewProp_StartSection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimRootMotionTranslationScale_MetaData), NewProp_AnimRootMotionTranslationScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, StartTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTimeSeconds_MetaData), NewProp_StartTimeSeconds_MetaData) };
void Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((UGSMPlayMontageMeshAndWaitForAnimNotify*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSMPlayMontageMeshAndWaitForAnimNotify), &Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAbilityEnds_MetaData), NewProp_bStopWhenAbilityEnds_MetaData) };
void Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit(void* Obj)
{
	((UGSMPlayMontageMeshAndWaitForAnimNotify*)Obj)->bAllowInterruptAfterBlendOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bAllowInterruptAfterBlendOut = { "bAllowInterruptAfterBlendOut", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSMPlayMontageMeshAndWaitForAnimNotify), &Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bAllowInterruptAfterBlendOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInterruptAfterBlendOut_MetaData), NewProp_bAllowInterruptAfterBlendOut_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_AnimNotifyName = { "AnimNotifyName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayMontageMeshAndWaitForAnimNotify, AnimNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifyName_MetaData), NewProp_AnimNotifyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnBlendedIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_OnAnimNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_StartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_bAllowInterruptAfterBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::NewProp_AnimNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::ClassParams = {
	&UGSMPlayMontageMeshAndWaitForAnimNotify::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify()
{
	if (!Z_Registration_Info_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify.OuterSingleton, Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMPlayMontageMeshAndWaitForAnimNotify>()
{
	return UGSMPlayMontageMeshAndWaitForAnimNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMPlayMontageMeshAndWaitForAnimNotify);
UGSMPlayMontageMeshAndWaitForAnimNotify::~UGSMPlayMontageMeshAndWaitForAnimNotify() {}
// End Class UGSMPlayMontageMeshAndWaitForAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, UGSMPlayMontageMeshAndWaitForAnimNotify::StaticClass, TEXT("UGSMPlayMontageMeshAndWaitForAnimNotify"), &Z_Registration_Info_UClass_UGSMPlayMontageMeshAndWaitForAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMPlayMontageMeshAndWaitForAnimNotify), 753796823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_4282333483(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayMontageMeshAndWaitForAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
