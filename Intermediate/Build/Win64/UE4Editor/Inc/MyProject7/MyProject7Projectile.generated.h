// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT7_MyProject7Projectile_generated_h
#error "MyProject7Projectile.generated.h already included, missing '#pragma once' in MyProject7Projectile.h"
#endif
#define MYPROJECT7_MyProject7Projectile_generated_h

#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject7Projectile(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7Projectile(); \
public: \
	DECLARE_CLASS(AMyProject7Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject7Projectile(); \
	friend MYPROJECT7_API class UClass* Z_Construct_UClass_AMyProject7Projectile(); \
public: \
	DECLARE_CLASS(AMyProject7Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject7"), NO_API) \
	DECLARE_SERIALIZER(AMyProject7Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject7Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject7Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7Projectile(AMyProject7Projectile&&); \
	NO_API AMyProject7Projectile(const AMyProject7Projectile&); \
public:


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject7Projectile(AMyProject7Projectile&&); \
	NO_API AMyProject7Projectile(const AMyProject7Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject7Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject7Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject7Projectile)


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AMyProject7Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProject7Projectile, ProjectileMovement); }


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_12_PROLOG
#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_RPC_WRAPPERS \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_INCLASS \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject7_Source_MyProject7_MyProject7Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_INCLASS_NO_PURE_DECLS \
	MyProject7_Source_MyProject7_MyProject7Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject7_Source_MyProject7_MyProject7Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
