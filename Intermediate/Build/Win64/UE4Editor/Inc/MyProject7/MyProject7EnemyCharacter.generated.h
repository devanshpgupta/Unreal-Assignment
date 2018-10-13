// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYPROJECT7_MyProject7EnemyCharacter_generated_h
#error "MyProject7EnemyCharacter.generated.h already included, missing '#pragma once' in MyProject7EnemyCharacter.h"
#endif
#define MYPROJECT7_MyProject7EnemyCharacter_generated_h

#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject7EnemyCharacter(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7EnemyCharacter(); \
public: \
	DECLARE_CLASS(AMyProject7EnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7EnemyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject7EnemyCharacter(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7EnemyCharacter(); \
public: \
	DECLARE_CLASS(AMyProject7EnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7EnemyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject7EnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject7EnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7EnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7EnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7EnemyCharacter(AMyProject7EnemyCharacter&&); \
	NO_API AMyProject7EnemyCharacter(const AMyProject7EnemyCharacter&); \
public:


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7EnemyCharacter(AMyProject7EnemyCharacter&&); \
	NO_API AMyProject7EnemyCharacter(const AMyProject7EnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7EnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7EnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject7EnemyCharacter)


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, MeshComp); } \
	FORCEINLINE static uint32 __PPO__FirstPatrolPoint() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, FirstPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__SecondPatrolPoint() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, SecondPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__ThirdPatrolPoint() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, ThirdPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__FourthPatrolPoint() { return STRUCT_OFFSET(AMyProject7EnemyCharacter, FourthPatrolPoint); }


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_11_PROLOG
#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_RPC_WRAPPERS \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_INCLASS \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject7_Source_MyProject7_MyProject7EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
