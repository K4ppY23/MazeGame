// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/SpawnManagerEl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManagerEl() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManager();
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManagerEl();
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManagerEl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	void USpawnManagerEl::StaticRegisterNativesUSpawnManagerEl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManagerEl);
	UClass* Z_Construct_UClass_USpawnManagerEl_NoRegister()
	{
		return USpawnManagerEl::StaticClass();
	}
	struct Z_Construct_UClass_USpawnManagerEl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnManagerEl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerEl_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManagerEl_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpawnManagerEl.h" },
		{ "ModuleRelativePath", "Public/SpawnManagerEl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnManagerEl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnManagerEl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnManagerEl_Statics::ClassParams = {
		&USpawnManagerEl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManagerEl_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnManagerEl_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpawnManagerEl()
	{
		if (!Z_Registration_Info_UClass_USpawnManagerEl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnManagerEl.OuterSingleton, Z_Construct_UClass_USpawnManagerEl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnManagerEl.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<USpawnManagerEl>()
	{
		return USpawnManagerEl::StaticClass();
	}
	USpawnManagerEl::USpawnManagerEl() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnManagerEl);
	USpawnManagerEl::~USpawnManagerEl() {}
	struct Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManagerEl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManagerEl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnManagerEl, USpawnManagerEl::StaticClass, TEXT("USpawnManagerEl"), &Z_Registration_Info_UClass_USpawnManagerEl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManagerEl), 3208032680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManagerEl_h_3116265688(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManagerEl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManagerEl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
