// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldDesignUpdate/WorldDesignUpdateGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldDesignUpdateGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WorldDesignUpdate();
WORLDDESIGNUPDATE_API UClass* Z_Construct_UClass_AWorldDesignUpdateGameMode();
WORLDDESIGNUPDATE_API UClass* Z_Construct_UClass_AWorldDesignUpdateGameMode_NoRegister();
// End Cross Module References

// Begin Class AWorldDesignUpdateGameMode
void AWorldDesignUpdateGameMode::StaticRegisterNativesAWorldDesignUpdateGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldDesignUpdateGameMode);
UClass* Z_Construct_UClass_AWorldDesignUpdateGameMode_NoRegister()
{
	return AWorldDesignUpdateGameMode::StaticClass();
}
struct Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldDesignUpdateGameMode.h" },
		{ "ModuleRelativePath", "WorldDesignUpdateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldDesignUpdateGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldDesignUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::ClassParams = {
	&AWorldDesignUpdateGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldDesignUpdateGameMode()
{
	if (!Z_Registration_Info_UClass_AWorldDesignUpdateGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldDesignUpdateGameMode.OuterSingleton, Z_Construct_UClass_AWorldDesignUpdateGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldDesignUpdateGameMode.OuterSingleton;
}
template<> WORLDDESIGNUPDATE_API UClass* StaticClass<AWorldDesignUpdateGameMode>()
{
	return AWorldDesignUpdateGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldDesignUpdateGameMode);
AWorldDesignUpdateGameMode::~AWorldDesignUpdateGameMode() {}
// End Class AWorldDesignUpdateGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldDesignUpdateGameMode, AWorldDesignUpdateGameMode::StaticClass, TEXT("AWorldDesignUpdateGameMode"), &Z_Registration_Info_UClass_AWorldDesignUpdateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldDesignUpdateGameMode), 188960517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateGameMode_h_3716304289(TEXT("/Script/WorldDesignUpdate"),
	Z_CompiledInDeferFile_FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
