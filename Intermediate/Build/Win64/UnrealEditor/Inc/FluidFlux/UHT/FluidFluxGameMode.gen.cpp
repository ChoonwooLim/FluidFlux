// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FluidFlux/FluidFluxGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFluidFluxGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FLUIDFLUX_API UClass* Z_Construct_UClass_AFluidFluxGameMode();
FLUIDFLUX_API UClass* Z_Construct_UClass_AFluidFluxGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FluidFlux();
// End Cross Module References

// Begin Class AFluidFluxGameMode
void AFluidFluxGameMode::StaticRegisterNativesAFluidFluxGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFluidFluxGameMode);
UClass* Z_Construct_UClass_AFluidFluxGameMode_NoRegister()
{
	return AFluidFluxGameMode::StaticClass();
}
struct Z_Construct_UClass_AFluidFluxGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FluidFluxGameMode.h" },
		{ "ModuleRelativePath", "FluidFluxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFluidFluxGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFluidFluxGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FluidFlux,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFluidFluxGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFluidFluxGameMode_Statics::ClassParams = {
	&AFluidFluxGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFluidFluxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFluidFluxGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFluidFluxGameMode()
{
	if (!Z_Registration_Info_UClass_AFluidFluxGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFluidFluxGameMode.OuterSingleton, Z_Construct_UClass_AFluidFluxGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFluidFluxGameMode.OuterSingleton;
}
template<> FLUIDFLUX_API UClass* StaticClass<AFluidFluxGameMode>()
{
	return AFluidFluxGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFluidFluxGameMode);
AFluidFluxGameMode::~AFluidFluxGameMode() {}
// End Class AFluidFluxGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_UnrealWork_FluidFlux_Source_FluidFlux_FluidFluxGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFluidFluxGameMode, AFluidFluxGameMode::StaticClass, TEXT("AFluidFluxGameMode"), &Z_Registration_Info_UClass_AFluidFluxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFluidFluxGameMode), 3858420660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_UnrealWork_FluidFlux_Source_FluidFlux_FluidFluxGameMode_h_1241997839(TEXT("/Script/FluidFlux"),
	Z_CompiledInDeferFile_FID_00_UnrealWork_FluidFlux_Source_FluidFlux_FluidFluxGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_UnrealWork_FluidFlux_Source_FluidFlux_FluidFluxGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
