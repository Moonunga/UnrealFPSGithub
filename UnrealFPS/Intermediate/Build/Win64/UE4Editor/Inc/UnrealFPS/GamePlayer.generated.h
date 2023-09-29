// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFPS_GamePlayer_generated_h
#error "GamePlayer.generated.h already included, missing '#pragma once' in GamePlayer.h"
#endif
#define UNREALFPS_GamePlayer_generated_h

#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_SPARSE_DATA
#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_RPC_WRAPPERS
#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePlayer(); \
	friend struct Z_Construct_UClass_AGamePlayer_Statics; \
public: \
	DECLARE_CLASS(AGamePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(AGamePlayer)


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGamePlayer(); \
	friend struct Z_Construct_UClass_AGamePlayer_Statics; \
public: \
	DECLARE_CLASS(AGamePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealFPS"), NO_API) \
	DECLARE_SERIALIZER(AGamePlayer)


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGamePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGamePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePlayer(AGamePlayer&&); \
	NO_API AGamePlayer(const AGamePlayer&); \
public:


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePlayer(AGamePlayer&&); \
	NO_API AGamePlayer(const AGamePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamePlayer)


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AGamePlayer, Camera); }


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_9_PROLOG
#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_RPC_WRAPPERS \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_INCLASS \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_SPARSE_DATA \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_INCLASS_NO_PURE_DECLS \
	UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALFPS_API UClass* StaticClass<class AGamePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealFPS_Source_UnrealFPS_Player_GamePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
