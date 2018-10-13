// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProject7EnemyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject7EnemyPawn() {}
// Cross Module References
	MYPROJECT7_API UClass* Z_Construct_UClass_AMyProject7EnemyPawn_NoRegister();
	MYPROJECT7_API UClass* Z_Construct_UClass_AMyProject7EnemyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyProject7();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyProject7EnemyPawn::StaticRegisterNativesAMyProject7EnemyPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyProject7EnemyPawn_NoRegister()
	{
		return AMyProject7EnemyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProject7EnemyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject7,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyProject7EnemyPawn.h" },
				{ "ModuleRelativePath", "MyProject7EnemyPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupFX_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "MyProject7EnemyPawn.h" },
				{ "ToolTip", "void PlayEffects();" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupFX = { UE4CodeGen_Private::EPropertyClass::Object, "PickupFX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyPawn, PickupFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_PickupFX_MetaData, ARRAY_COUNT(NewProp_PickupFX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[] = {
				{ "Category", "Movement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyProject7EnemyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovement = { UE4CodeGen_Private::EPropertyClass::Object, "PawnMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyPawn, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(NewProp_PawnMovement_MetaData, ARRAY_COUNT(NewProp_PawnMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyProject7EnemyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyPawn, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PickupFX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyProject7EnemyPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyProject7EnemyPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject7EnemyPawn, 1983796843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject7EnemyPawn(Z_Construct_UClass_AMyProject7EnemyPawn, &AMyProject7EnemyPawn::StaticClass, TEXT("/Script/MyProject7"), TEXT("AMyProject7EnemyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject7EnemyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
