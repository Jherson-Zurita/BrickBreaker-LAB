// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Singleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleton() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ASingleton_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ASingleton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UClass* Z_Construct_UClass_APaddle_NoRegister();
// End Cross Module References
	void ASingleton::StaticRegisterNativesASingleton()
	{
	}
	UClass* Z_Construct_UClass_ASingleton_NoRegister()
	{
		return ASingleton::StaticClass();
	}
	struct Z_Construct_UClass_ASingleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Singleton.h" },
		{ "ModuleRelativePath", "Singleton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingleton_Statics::NewProp_Paddle_MetaData[] = {
		{ "Comment", "//The Inventory of this Actor\n" },
		{ "ModuleRelativePath", "Singleton.h" },
		{ "ToolTip", "The Inventory of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingleton_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingleton, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingleton_Statics::NewProp_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleton_Statics::NewProp_Paddle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingleton_Statics::NewProp_Paddle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingleton_Statics::ClassParams = {
		&ASingleton::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingleton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingleton_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingleton, 4127088843);
	template<> ARCANOID_API UClass* StaticClass<ASingleton>()
	{
		return ASingleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingleton(Z_Construct_UClass_ASingleton, &ASingleton::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ASingleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
