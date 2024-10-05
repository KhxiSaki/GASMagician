// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASMagician/Public/Projectile/GSMProjectileMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSMProjectileMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMProjectileMovementComponent();
GASMAGICIAN_API UClass* Z_Construct_UClass_UGSMProjectileMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASMagician();
// End Cross Module References

// Begin Class UGSMProjectileMovementComponent
void UGSMProjectileMovementComponent::StaticRegisterNativesUGSMProjectileMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSMProjectileMovementComponent);
UClass* Z_Construct_UClass_UGSMProjectileMovementComponent_NoRegister()
{
	return UGSMProjectileMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UGSMProjectileMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Projectile/GSMProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Projectile/GSMProjectileMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSMProjectileMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GASMagician,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::ClassParams = {
	&UGSMProjectileMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGSMProjectileMovementComponent()
{
	if (!Z_Registration_Info_UClass_UGSMProjectileMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSMProjectileMovementComponent.OuterSingleton, Z_Construct_UClass_UGSMProjectileMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGSMProjectileMovementComponent.OuterSingleton;
}
template<> GASMAGICIAN_API UClass* StaticClass<UGSMProjectileMovementComponent>()
{
	return UGSMProjectileMovementComponent::StaticClass();
}
UGSMProjectileMovementComponent::UGSMProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGSMProjectileMovementComponent);
UGSMProjectileMovementComponent::~UGSMProjectileMovementComponent() {}
// End Class UGSMProjectileMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGSMProjectileMovementComponent, UGSMProjectileMovementComponent::StaticClass, TEXT("UGSMProjectileMovementComponent"), &Z_Registration_Info_UClass_UGSMProjectileMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSMProjectileMovementComponent), 1437376721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_2055575869(TEXT("/Script/GASMagician"),
	Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EOC_Plugins_GASMagician_Source_GASMagician_Public_Projectile_GSMProjectileMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
