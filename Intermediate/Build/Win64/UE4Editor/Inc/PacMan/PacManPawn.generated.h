// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_PacManPawn_generated_h
#error "PacManPawn.generated.h already included, missing '#pragma once' in PacManPawn.h"
#endif
#define PACMAN_PacManPawn_generated_h

#define PacMan_Source_PacMan_PacManPawn_h_12_SPARSE_DATA
#define PacMan_Source_PacMan_PacManPawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverLapBegin); \
	DECLARE_FUNCTION(execSetFrozen);


#define PacMan_Source_PacMan_PacManPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverLapBegin); \
	DECLARE_FUNCTION(execSetFrozen);


#define PacMan_Source_PacMan_PacManPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManPawn(); \
	friend struct Z_Construct_UClass_APacManPawn_Statics; \
public: \
	DECLARE_CLASS(APacManPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManPawn)


#define PacMan_Source_PacMan_PacManPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPacManPawn(); \
	friend struct Z_Construct_UClass_APacManPawn_Statics; \
public: \
	DECLARE_CLASS(APacManPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManPawn)


#define PacMan_Source_PacMan_PacManPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManPawn(APacManPawn&&); \
	NO_API APacManPawn(const APacManPawn&); \
public:


#define PacMan_Source_PacMan_PacManPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManPawn(APacManPawn&&); \
	NO_API APacManPawn(const APacManPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacManPawn)


#define PacMan_Source_PacMan_PacManPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Frozen() { return STRUCT_OFFSET(APacManPawn, Frozen); }


#define PacMan_Source_PacMan_PacManPawn_h_9_PROLOG
#define PacMan_Source_PacMan_PacManPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacManPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacManPawn_h_12_SPARSE_DATA \
	PacMan_Source_PacMan_PacManPawn_h_12_RPC_WRAPPERS \
	PacMan_Source_PacMan_PacManPawn_h_12_INCLASS \
	PacMan_Source_PacMan_PacManPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_PacManPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacManPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacManPawn_h_12_SPARSE_DATA \
	PacMan_Source_PacMan_PacManPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacManPawn_h_12_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacManPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacManPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_PacManPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
