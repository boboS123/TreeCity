// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TreeCity/TreeCityGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeCityGameModeBase() {}
// Cross Module References
	TREECITY_API UClass* Z_Construct_UClass_ATreeCityGameModeBase_NoRegister();
	TREECITY_API UClass* Z_Construct_UClass_ATreeCityGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TreeCity();
// End Cross Module References
	void ATreeCityGameModeBase::StaticRegisterNativesATreeCityGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATreeCityGameModeBase_NoRegister()
	{
		return ATreeCityGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATreeCityGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreeCityGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TreeCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreeCityGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TreeCityGameModeBase.h" },
		{ "ModuleRelativePath", "TreeCityGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreeCityGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreeCityGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATreeCityGameModeBase_Statics::ClassParams = {
		&ATreeCityGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATreeCityGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreeCityGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreeCityGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATreeCityGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeCityGameModeBase, 265799340);
	template<> TREECITY_API UClass* StaticClass<ATreeCityGameModeBase>()
	{
		return ATreeCityGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeCityGameModeBase(Z_Construct_UClass_ATreeCityGameModeBase, &ATreeCityGameModeBase::StaticClass, TEXT("/Script/TreeCity"), TEXT("ATreeCityGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeCityGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
