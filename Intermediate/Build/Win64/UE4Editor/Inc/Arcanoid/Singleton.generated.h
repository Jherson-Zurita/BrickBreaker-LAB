// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Singleton_generated_h
#error "Singleton.generated.h already included, missing '#pragma once' in Singleton.h"
#endif
#define ARCANOID_Singleton_generated_h

#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_SPARSE_DATA
#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_RPC_WRAPPERS
#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingleton(); \
	friend struct Z_Construct_UClass_ASingleton_Statics; \
public: \
	DECLARE_CLASS(ASingleton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ASingleton)


#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASingleton(); \
	friend struct Z_Construct_UClass_ASingleton_Statics; \
public: \
	DECLARE_CLASS(ASingleton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ASingleton)


#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASingleton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleton(ASingleton&&); \
	NO_API ASingleton(const ASingleton&); \
public:


#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleton(ASingleton&&); \
	NO_API ASingleton(const ASingleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingleton)


#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Paddle() { return STRUCT_OFFSET(ASingleton, Paddle); }


#define Arcanoid_master_Source_Arcanoid_Singleton_h_9_PROLOG
#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_SPARSE_DATA \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_RPC_WRAPPERS \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_INCLASS \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_master_Source_Arcanoid_Singleton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_SPARSE_DATA \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_INCLASS_NO_PURE_DECLS \
	Arcanoid_master_Source_Arcanoid_Singleton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ASingleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid_master_Source_Arcanoid_Singleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
