// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealFPS/UnrealFPSGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealFPSGameModeBase() {}
// Cross Module References
	UNREALFPS_API UClass* Z_Construct_UClass_AUnrealFPSGameModeBase_NoRegister();
	UNREALFPS_API UClass* Z_Construct_UClass_AUnrealFPSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealFPS();
// End Cross Module References
	void AUnrealFPSGameModeBase::StaticRegisterNativesAUnrealFPSGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealFPSGameModeBase_NoRegister()
	{
		return AUnrealFPSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealFPSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealFPSGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealFPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealFPSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::ClassParams = {
		&AUnrealFPSGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealFPSGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealFPSGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealFPSGameModeBase, 798176467);
	template<> UNREALFPS_API UClass* StaticClass<AUnrealFPSGameModeBase>()
	{
		return AUnrealFPSGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealFPSGameModeBase(Z_Construct_UClass_AUnrealFPSGameModeBase, &AUnrealFPSGameModeBase::StaticClass, TEXT("/Script/UnrealFPS"), TEXT("AUnrealFPSGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealFPSGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
