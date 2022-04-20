// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/PacManPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacManPawn() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacManPawn_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacManPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PacMan();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APacManPawn::execOnOverLapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_PlayerActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverLapBegin(Z_Param_PlayerActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacManPawn::execSetFrozen)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrozen(Z_Param_Value);
		P_NATIVE_END;
	}
	void APacManPawn::StaticRegisterNativesAPacManPawn()
	{
		UClass* Class = APacManPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverLapBegin", &APacManPawn::execOnOverLapBegin },
			{ "SetFrozen", &APacManPawn::execSetFrozen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics
	{
		struct PacManPawn_eventOnOverLapBegin_Parms
		{
			AActor* PlayerActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacManPawn_eventOnOverLapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacManPawn_eventOnOverLapBegin_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::NewProp_PlayerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacManPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacManPawn, nullptr, "OnOverLapBegin", nullptr, nullptr, sizeof(PacManPawn_eventOnOverLapBegin_Parms), Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacManPawn_OnOverLapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APacManPawn_OnOverLapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacManPawn_SetFrozen_Statics
	{
		struct PacManPawn_eventSetFrozen_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PacManPawn_eventSetFrozen_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PacManPawn_eventSetFrozen_Parms), &Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacManPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacManPawn, nullptr, "SetFrozen", nullptr, nullptr, sizeof(PacManPawn_eventSetFrozen_Parms), Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacManPawn_SetFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APacManPawn_SetFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APacManPawn_NoRegister()
	{
		return APacManPawn::StaticClass();
	}
	struct Z_Construct_UClass_APacManPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frozen_MetaData[];
#endif
		static void NewProp_Frozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Frozen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacManPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APacManPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APacManPawn_OnOverLapBegin, "OnOverLapBegin" }, // 590320297
		{ &Z_Construct_UFunction_APacManPawn_SetFrozen, "SetFrozen" }, // 530018968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacManPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacManPawn.h" },
		{ "ModuleRelativePath", "PacManPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen_MetaData[] = {
		{ "Category", "PacManPawn" },
		{ "ModuleRelativePath", "PacManPawn.h" },
	};
#endif
	void Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen_SetBit(void* Obj)
	{
		((APacManPawn*)Obj)->Frozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen = { "Frozen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APacManPawn), &Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacManPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacManPawn_Statics::NewProp_Frozen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacManPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacManPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacManPawn_Statics::ClassParams = {
		&APacManPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APacManPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APacManPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacManPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacManPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacManPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacManPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacManPawn, 1360180370);
	template<> PACMAN_API UClass* StaticClass<APacManPawn>()
	{
		return APacManPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacManPawn(Z_Construct_UClass_APacManPawn, &APacManPawn::StaticClass, TEXT("/Script/PacMan"), TEXT("APacManPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacManPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
