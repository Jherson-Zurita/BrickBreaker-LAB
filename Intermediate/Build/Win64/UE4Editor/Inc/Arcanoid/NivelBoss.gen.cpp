// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/NivelBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelBoss() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UNivelBoss_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UNivelBoss();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void UNivelBoss::StaticRegisterNativesUNivelBoss()
	{
	}
	UClass* Z_Construct_UClass_UNivelBoss_NoRegister()
	{
		return UNivelBoss::StaticClass();
	}
	struct Z_Construct_UClass_UNivelBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNivelBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNivelBoss_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "NivelBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNivelBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INivelBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNivelBoss_Statics::ClassParams = {
		&UNivelBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNivelBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNivelBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNivelBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNivelBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNivelBoss, 3271546578);
	template<> ARCANOID_API UClass* StaticClass<UNivelBoss>()
	{
		return UNivelBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNivelBoss(Z_Construct_UClass_UNivelBoss, &UNivelBoss::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UNivelBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNivelBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
