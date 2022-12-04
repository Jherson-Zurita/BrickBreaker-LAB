// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_NivelBoss_generated_h
#error "NivelBoss.generated.h already included, missing '#pragma once' in NivelBoss.h"
#endif
#define ARCANOID_NivelBoss_generated_h

#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_SPARSE_DATA
#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_RPC_WRAPPERS
#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UNivelBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNivelBoss) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UNivelBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNivelBoss); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UNivelBoss(UNivelBoss&&); \
	ARCANOID_API UNivelBoss(const UNivelBoss&); \
public:


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UNivelBoss(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UNivelBoss(UNivelBoss&&); \
	ARCANOID_API UNivelBoss(const UNivelBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UNivelBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNivelBoss); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNivelBoss)


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNivelBoss(); \
	friend struct Z_Construct_UClass_UNivelBoss_Statics; \
public: \
	DECLARE_CLASS(UNivelBoss, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arcanoid"), ARCANOID_API) \
	DECLARE_SERIALIZER(UNivelBoss)


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INivelBoss() {} \
public: \
	typedef UNivelBoss UClassType; \
	typedef INivelBoss ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~INivelBoss() {} \
public: \
	typedef UNivelBoss UClassType; \
	typedef INivelBoss ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_10_PROLOG
#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_SPARSE_DATA \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_RPC_WRAPPERS \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid_master_Source_Arcanoid_NivelBoss_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_SPARSE_DATA \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid_master_Source_Arcanoid_NivelBoss_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UNivelBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid_master_Source_Arcanoid_NivelBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
