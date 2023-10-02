// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFPS_Rifle_generated_h
#error "Rifle.generated.h already included, missing '#pragma once' in Rifle.h"
#endif
#define UNREALFPS_Rifle_generated_h

#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_SPARSE_DATA
#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_RPC_WRAPPERS
#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public:


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifle)


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ARifle, Mesh); }


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_9_PROLOG
#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_RPC_WRAPPERS \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_INCLASS \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_INCLASS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALFPS_API UClass* StaticClass<class ARifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealFPS_Source_UnrealFPS_Weapon_Rifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
