// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFPS_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define UNREALFPS_Bullet_generated_h

#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_SPARSE_DATA
#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_RPC_WRAPPERS
#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collision() { return STRUCT_OFFSET(ABullet, Collision); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(ABullet, Movement); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABullet, Mesh); }


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_9_PROLOG
#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_RPC_WRAPPERS \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_INCLASS \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALFPS_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealFPS_Source_UnrealFPS_Weapon_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
