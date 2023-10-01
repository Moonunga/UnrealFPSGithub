// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealFPS/Animation/GamePlayerEventGraph.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePlayerEventGraph() {}
// Cross Module References
	UNREALFPS_API UClass* Z_Construct_UClass_UGamePlayerEventGraph_NoRegister();
	UNREALFPS_API UClass* Z_Construct_UClass_UGamePlayerEventGraph();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UnrealFPS();
// End Cross Module References
	void UGamePlayerEventGraph::StaticRegisterNativesUGamePlayerEventGraph()
	{
	}
	UClass* Z_Construct_UClass_UGamePlayerEventGraph_NoRegister()
	{
		return UGamePlayerEventGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGamePlayerEventGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamePlayerEventGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlayerEventGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/GamePlayerEventGraph.h" },
		{ "ModuleRelativePath", "Animation/GamePlayerEventGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "GamePlayerEventGraph" },
		{ "ModuleRelativePath", "Animation/GamePlayerEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGamePlayerEventGraph, Speed), METADATA_PARAMS(Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "GamePlayerEventGraph" },
		{ "ModuleRelativePath", "Animation/GamePlayerEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGamePlayerEventGraph, Direction), METADATA_PARAMS(Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGamePlayerEventGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamePlayerEventGraph_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamePlayerEventGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamePlayerEventGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamePlayerEventGraph_Statics::ClassParams = {
		&UGamePlayerEventGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGamePlayerEventGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlayerEventGraph_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGamePlayerEventGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGamePlayerEventGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamePlayerEventGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamePlayerEventGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamePlayerEventGraph, 785657465);
	template<> UNREALFPS_API UClass* StaticClass<UGamePlayerEventGraph>()
	{
		return UGamePlayerEventGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamePlayerEventGraph(Z_Construct_UClass_UGamePlayerEventGraph, &UGamePlayerEventGraph::StaticClass, TEXT("/Script/UnrealFPS"), TEXT("UGamePlayerEventGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamePlayerEventGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
