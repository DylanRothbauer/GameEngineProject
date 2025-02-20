// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldDesignUpdateProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WORLDDESIGNUPDATE_WorldDesignUpdateProjectile_generated_h
#error "WorldDesignUpdateProjectile.generated.h already included, missing '#pragma once' in WorldDesignUpdateProjectile.h"
#endif
#define WORLDDESIGNUPDATE_WorldDesignUpdateProjectile_generated_h

#define FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldDesignUpdateProjectile(); \
	friend struct Z_Construct_UClass_AWorldDesignUpdateProjectile_Statics; \
public: \
	DECLARE_CLASS(AWorldDesignUpdateProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldDesignUpdate"), NO_API) \
	DECLARE_SERIALIZER(AWorldDesignUpdateProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldDesignUpdateProjectile(AWorldDesignUpdateProjectile&&); \
	AWorldDesignUpdateProjectile(const AWorldDesignUpdateProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDesignUpdateProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDesignUpdateProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldDesignUpdateProjectile) \
	NO_API virtual ~AWorldDesignUpdateProjectile();


#define FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_12_PROLOG
#define FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDDESIGNUPDATE_API UClass* StaticClass<class AWorldDesignUpdateProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorldDesignUpdate_Source_WorldDesignUpdate_WorldDesignUpdateProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
