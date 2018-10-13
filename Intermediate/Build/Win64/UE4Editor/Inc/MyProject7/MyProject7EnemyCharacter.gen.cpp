// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProject7EnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject7EnemyCharacter() {}
// Cross Module References
	MYPROJECT7_API UClass* Z_Construct_UClass_AMyProject7EnemyCharacter_NoRegister();
	MYPROJECT7_API UClass* Z_Construct_UClass_AMyProject7EnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject7();
	MYPROJECT7_API UFunction* Z_Construct_UFunction_AMyProject7EnemyCharacter_OnPawnSeen();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AMyProject7EnemyCharacter::StaticRegisterNativesAMyProject7EnemyCharacter()
	{
		UClass* Class = AMyProject7EnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnSeen", &AMyProject7EnemyCharacter::execOnPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyProject7EnemyCharacter_OnPawnSeen()
	{
		struct MyProject7EnemyCharacter_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn = { UE4CodeGen_Private::EPropertyClass::Object, "SeenPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProject7EnemyCharacter_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeenPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProject7EnemyCharacter, "OnPawnSeen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(MyProject7EnemyCharacter_eventOnPawnSeen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProject7EnemyCharacter_NoRegister()
	{
		return AMyProject7EnemyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProject7EnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject7,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyProject7EnemyCharacter_OnPawnSeen, "OnPawnSeen" }, // 695996169
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyProject7EnemyCharacter.h" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourthPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FourthPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "FourthPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, FourthPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_FourthPatrolPoint_MetaData, ARRAY_COUNT(NewProp_FourthPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThirdPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "ThirdPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, ThirdPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ThirdPatrolPoint_MetaData, ARRAY_COUNT(NewProp_ThirdPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "SecondPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, SecondPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_SecondPatrolPoint_MetaData, ARRAY_COUNT(NewProp_SecondPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, FirstPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_FirstPatrolPoint_MetaData, ARRAY_COUNT(NewProp_FirstPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyProject7EnemyCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp = { UE4CodeGen_Private::EPropertyClass::Object, "PawnSensingComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AMyProject7EnemyCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_PawnSensingComp_MetaData, ARRAY_COUNT(NewProp_PawnSensingComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FourthPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThirdPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnSensingComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyProject7EnemyCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyProject7EnemyCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AMyProject7EnemyCharacter, 3883861435);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject7EnemyCharacter(Z_Construct_UClass_AMyProject7EnemyCharacter, &AMyProject7EnemyCharacter::StaticClass, TEXT("/Script/MyProject7"), TEXT("AMyProject7EnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject7EnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
