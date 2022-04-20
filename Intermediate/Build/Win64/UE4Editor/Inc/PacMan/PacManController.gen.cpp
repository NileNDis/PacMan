// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/PacManController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacManController() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacManController_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacManController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PacMan();
// End Cross Module References
	void APacManController::StaticRegisterNativesAPacManController()
	{
	}
	UClass* Z_Construct_UClass_APacManController_NoRegister()
	{
		return APacManController::StaticClass();
	}
	struct Z_Construct_UClass_APacManController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacManController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacManController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PacManController.h" },
		{ "ModuleRelativePath", "PacManController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacManController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacManController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacManController_Statics::ClassParams = {
		&APacManController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacManController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacManController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacManController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacManController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacManController, 4128143393);
	template<> PACMAN_API UClass* StaticClass<APacManController>()
	{
		return APacManController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacManController(Z_Construct_UClass_APacManController, &APacManController::StaticClass, TEXT("/Script/PacMan"), TEXT("APacManController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacManController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
