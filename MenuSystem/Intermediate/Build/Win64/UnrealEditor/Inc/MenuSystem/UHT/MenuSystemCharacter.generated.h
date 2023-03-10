// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MenuSystemCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MENUSYSTEM_MenuSystemCharacter_generated_h
#error "MenuSystemCharacter.generated.h already included, missing '#pragma once' in MenuSystemCharacter.h"
#endif
#define MENUSYSTEM_MenuSystemCharacter_generated_h

#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_SPARSE_DATA
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_RPC_WRAPPERS
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_ACCESSORS
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuSystemCharacter(); \
	friend struct Z_Construct_UClass_AMenuSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AMenuSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), NO_API) \
	DECLARE_SERIALIZER(AMenuSystemCharacter)


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMenuSystemCharacter(); \
	friend struct Z_Construct_UClass_AMenuSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AMenuSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), NO_API) \
	DECLARE_SERIALIZER(AMenuSystemCharacter)


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenuSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenuSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuSystemCharacter(AMenuSystemCharacter&&); \
	NO_API AMenuSystemCharacter(const AMenuSystemCharacter&); \
public: \
	NO_API virtual ~AMenuSystemCharacter();


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuSystemCharacter(AMenuSystemCharacter&&); \
	NO_API AMenuSystemCharacter(const AMenuSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMenuSystemCharacter) \
	NO_API virtual ~AMenuSystemCharacter();


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_12_PROLOG
#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_SPARSE_DATA \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_RPC_WRAPPERS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_ACCESSORS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_INCLASS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_SPARSE_DATA \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_ACCESSORS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MENUSYSTEM_API UClass* StaticClass<class AMenuSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Source_MenuSystem_MenuSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
