// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMPlayAnimAndWaitForAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_NoRegister();
GASMAGICIAN_API UFunction* Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Delegate FPlayAnimWaitForAnimNotifySimpleDelegate
struct Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASMagician, nullptr, "PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayAnimWaitForAnimNotifySimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayAnimWaitForAnimNotifySimpleDelegate)
{
	PlayAnimWaitForAnimNotifySimpleDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPlayAnimWaitForAnimNotifySimpleDelegate

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function CreatePlayAnimAndWaitProxy
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics
{
	struct GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAnimSequence* AnimSequence;
		FName SlotName;
		float BlendInTime;
		float BlendOutTime;
		float InPlayRate;
		float StartTimeSeconds;
		bool bStopWhenAbilityEnds;
		float AnimRootMotionTranslationScale;
		FName AnimNotifyName;
		UGSMPlayAnimAndWaitForAnimNotify* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Start playing an animation montage on the avatar actor and wait for it to finish\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param StartSection If not empty, named montage section to start from\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n\x09 * @param AnimNotifyName\n\x09 */" },
#endif
		{ "CPP_Default_AnimNotifyName", "None" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_BlendInTime", "0.250000" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_SlotName", "None" },
		{ "CPP_Default_StartTimeSeconds", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "PlayAnimAndWaitForAnimNotify" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing an animation montage on the avatar actor and wait for it to finish\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param Rate Change to play the montage faster or slower\n@param StartSection If not empty, named montage section to start from\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n@param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n@param AnimNotifyName" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, BlendInTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, StartTimeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms), &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimNotifyName = { "AnimNotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, AnimNotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms, ReturnValue), Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_BlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_StartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_AnimNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "CreatePlayAnimAndWaitProxy", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::GSMPlayAnimAndWaitForAnimNotify_eventCreatePlayAnimAndWaitProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execCreatePlayAnimAndWaitProxy)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeSeconds);
	P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimNotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGSMPlayAnimAndWaitForAnimNotify**)Z_Param__Result=UGSMPlayAnimAndWaitForAnimNotify::CreatePlayAnimAndWaitProxy(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_AnimSequence,Z_Param_SlotName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_StartTimeSeconds,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_AnimNotifyName);
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function CreatePlayAnimAndWaitProxy

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function OnAnimationNotifyBeginReceived
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics
{
	struct GSMPlayAnimAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointPayload_MetaData), NewProp_BranchingPointPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::NewProp_BranchingPointPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "OnAnimationNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnAnimationNotifyBeginReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execOnAnimationNotifyBeginReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnimationNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function OnAnimationNotifyBeginReceived

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageBlendedIn
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics
{
	struct GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms
	{
		UAnimMontage* Montage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "OnMontageBlendedIn", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execOnMontageBlendedIn)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendedIn(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageBlendedIn

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageBlendingOut
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics
{
	struct GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "OnMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execOnMontageBlendingOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageBlendingOut

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageEnded
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics
{
	struct GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::GSMPlayAnimAndWaitForAnimNotify_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageEnded

// Begin Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageInterrupted
struct Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, nullptr, "OnMontageInterrupted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGSMPlayAnimAndWaitForAnimNotify::execOnMontageInterrupted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageInterrupted();
	P_NATIVE_END;
}
// End Class UGSMPlayAnimAndWaitForAnimNotify Function OnMontageInterrupted

// Begin Class UGSMPlayAnimAndWaitForAnimNotify
void UGSMPlayAnimAndWaitForAnimNotify::StaticRegisterNativesUGSMPlayAnimAndWaitForAnimNotify()
{
	UClass* Class = UGSMPlayAnimAndWaitForAnimNotify::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayAnimAndWaitProxy", &UGSMPlayAnimAndWaitForAnimNotify::execCreatePlayAnimAndWaitProxy },
		{ "OnAnimationNotifyBeginReceived", &UGSMPlayAnimAndWaitForAnimNotify::execOnAnimationNotifyBeginReceived },
		{ "OnMontageBlendedIn", &UGSMPlayAnimAndWaitForAnimNotify::execOnMontageBlendedIn },
		{ "OnMontageBlendingOut", &UGSMPlayAnimAndWaitForAnimNotify::execOnMontageBlendingOut },
		{ "OnMontageEnded", &UGSMPlayAnimAndWaitForAnimNotify::execOnMontageEnded },
		{ "OnMontageInterrupted", &UGSMPlayAnimAndWaitForAnimNotify::execOnMontageInterrupted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMPlayAnimAndWaitForAnimNotify);
UClass* Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_NoRegister()
{
	return UGSMPlayAnimAndWaitForAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTasks/GSMPlayAnimAndWaitForAnimNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendIn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimNotify;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequenceToPlay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_CreatePlayAnimAndWaitProxy, "CreatePlayAnimAndWaitProxy" }, // 1009653580
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnAnimationNotifyBeginReceived, "OnAnimationNotifyBeginReceived" }, // 2399193298
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendedIn, "OnMontageBlendedIn" }, // 2986043282
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 1931858415
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageEnded, "OnMontageEnded" }, // 2071262972
		{ &Z_Construct_UFunction_UGSMPlayAnimAndWaitForAnimNotify_OnMontageInterrupted, "OnMontageInterrupted" }, // 847494618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMPlayAnimAndWaitForAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnCompleted), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 338771046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnBlendOut), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_MetaData), NewProp_OnBlendOut_MetaData) }; // 338771046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnBlendIn = { "OnBlendIn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnBlendIn), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendIn_MetaData), NewProp_OnBlendIn_MetaData) }; // 338771046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnInterrupted), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterrupted_MetaData), NewProp_OnInterrupted_MetaData) }; // 338771046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnCancelled), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 338771046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnAnimNotify = { "OnAnimNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, OnAnimNotify), Z_Construct_UDelegateFunction_GASMagician_PlayAnimWaitForAnimNotifySimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimNotify_MetaData), NewProp_OnAnimNotify_MetaData) }; // 338771046
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_AnimSequenceToPlay = { "AnimSequenceToPlay", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, AnimSequenceToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequenceToPlay_MetaData), NewProp_AnimSequenceToPlay_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_AnimNotifyName = { "AnimNotifyName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSMPlayAnimAndWaitForAnimNotify, AnimNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifyName_MetaData), NewProp_AnimNotifyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnBlendIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_OnAnimNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_AnimSequenceToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::NewProp_AnimNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::ClassParams = {
	&UGSMPlayAnimAndWaitForAnimNotify::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify()
{
	if (!Z_Registration_Info_UClass_UGSMPlayAnimAndWaitForAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMPlayAnimAndWaitForAnimNotify.OuterSingleton, Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMPlayAnimAndWaitForAnimNotify.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMPlayAnimAndWaitForAnimNotify>()
{
	return UGSMPlayAnimAndWaitForAnimNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMPlayAnimAndWaitForAnimNotify);
UGSMPlayAnimAndWaitForAnimNotify::~UGSMPlayAnimAndWaitForAnimNotify() {}
// End Class UGSMPlayAnimAndWaitForAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMPlayAnimAndWaitForAnimNotify, UGSMPlayAnimAndWaitForAnimNotify::StaticClass, TEXT("UGSMPlayAnimAndWaitForAnimNotify"), &Z_Registration_Info_UClass_UGSMPlayAnimAndWaitForAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMPlayAnimAndWaitForAnimNotify), 3459100228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_3364752010(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_AbilityTasks_GSMPlayAnimAndWaitForAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
