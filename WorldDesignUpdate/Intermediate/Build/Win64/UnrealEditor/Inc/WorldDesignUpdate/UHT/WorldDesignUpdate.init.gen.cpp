// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldDesignUpdate_init() {}
	WORLDDESIGNUPDATE_API UFunction* Z_Construct_UDelegateFunction_WorldDesignUpdate_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WorldDesignUpdate;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WorldDesignUpdate()
	{
		if (!Z_Registration_Info_UPackage__Script_WorldDesignUpdate.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WorldDesignUpdate_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WorldDesignUpdate",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA50CFF1B,
				0xBCBD5B18,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WorldDesignUpdate.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WorldDesignUpdate.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WorldDesignUpdate(Z_Construct_UPackage__Script_WorldDesignUpdate, TEXT("/Script/WorldDesignUpdate"), Z_Registration_Info_UPackage__Script_WorldDesignUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA50CFF1B, 0xBCBD5B18));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
