// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_PacManController_generated_h
#error "PacManController.generated.h already included, missing '#pragma once' in PacManController.h"
#endif
#define PACMAN_PacManController_generated_h

#define PacMan_Source_PacMan_PacManController_h_14_SPARSE_DATA
#define PacMan_Source_PacMan_PacManController_h_14_RPC_WRAPPERS
#define PacMan_Source_PacMan_PacManController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PacMan_Source_PacMan_PacManController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacManController(); \
	friend struct Z_Construct_UClass_APacManController_Statics; \
public: \
	DECLARE_CLASS(APacManController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManController)


#define PacMan_Source_PacMan_PacManController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPacManController(); \
	friend struct Z_Construct_UClass_APacManController_Statics; \
public: \
	DECLARE_CLASS(APacManController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan"), NO_API) \
	DECLARE_SERIALIZER(APacManController)


#define PacMan_Source_PacMan_PacManController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManController(APacManController&&); \
	NO_API APacManController(const APacManController&); \
public:


#define PacMan_Source_PacMan_PacManController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacManController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacManController(APacManController&&); \
	NO_API APacManController(const APacManController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacManController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacManController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacManController)


#define PacMan_Source_PacMan_PacManController_h_14_PRIVATE_PROPERTY_OFFSET
#define PacMan_Source_PacMan_PacManController_h_11_PROLOG
#define PacMan_Source_PacMan_PacManController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacManController_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacManController_h_14_SPARSE_DATA \
	PacMan_Source_PacMan_PacManController_h_14_RPC_WRAPPERS \
	PacMan_Source_PacMan_PacManController_h_14_INCLASS \
	PacMan_Source_PacMan_PacManController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PacMan_Source_PacMan_PacManController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PacMan_Source_PacMan_PacManController_h_14_PRIVATE_PROPERTY_OFFSET \
	PacMan_Source_PacMan_PacManController_h_14_SPARSE_DATA \
	PacMan_Source_PacMan_PacManController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacManController_h_14_INCLASS_NO_PURE_DECLS \
	PacMan_Source_PacMan_PacManController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacManController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PacMan_Source_PacMan_PacManController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
