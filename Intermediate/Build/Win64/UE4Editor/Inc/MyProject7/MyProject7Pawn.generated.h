// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT7_MyProject7Pawn_generated_h
#error "MyProject7Pawn.generated.h already included, missing '#pragma once' in MyProject7Pawn.h"
#endif
#define MYPROJECT7_MyProject7Pawn_generated_h

#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_RPC_WRAPPERS
#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject7Pawn(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7Pawn(); \
public: \
	DECLARE_CLASS(AMyProject7Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject7Pawn(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7Pawn(); \
public: \
	DECLARE_CLASS(AMyProject7Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject7Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject7Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7Pawn(AMyProject7Pawn&&); \
	NO_API AMyProject7Pawn(const AMyProject7Pawn&); \
public:


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7Pawn(AMyProject7Pawn&&); \
	NO_API AMyProject7Pawn(const AMyProject7Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject7Pawn)


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AMyProject7Pawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMyProject7Pawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProject7Pawn, CameraBoom); }


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_9_PROLOG
#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_RPC_WRAPPERS \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_INCLASS \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject7_Source_MyProject7_MyProject7Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_INCLASS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject7_Source_MyProject7_MyProject7Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
