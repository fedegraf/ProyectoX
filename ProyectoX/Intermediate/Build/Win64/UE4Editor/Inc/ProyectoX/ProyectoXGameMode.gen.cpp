// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProyectoX/ProyectoXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectoXGameMode() {}
// Cross Module References
	PROYECTOX_API UClass* Z_Construct_UClass_AProyectoXGameMode_NoRegister();
	PROYECTOX_API UClass* Z_Construct_UClass_AProyectoXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProyectoX();
// End Cross Module References
	void AProyectoXGameMode::StaticRegisterNativesAProyectoXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProyectoXGameMode_NoRegister()
	{
		return AProyectoXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProyectoXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectoXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProyectoX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectoXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProyectoXGameMode.h" },
		{ "ModuleRelativePath", "ProyectoXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectoXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectoXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectoXGameMode_Statics::ClassParams = {
		&AProyectoXGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProyectoXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectoXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectoXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectoXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectoXGameMode, 744324620);
	template<> PROYECTOX_API UClass* StaticClass<AProyectoXGameMode>()
	{
		return AProyectoXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectoXGameMode(Z_Construct_UClass_AProyectoXGameMode, &AProyectoXGameMode::StaticClass, TEXT("/Script/ProyectoX"), TEXT("AProyectoXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectoXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
