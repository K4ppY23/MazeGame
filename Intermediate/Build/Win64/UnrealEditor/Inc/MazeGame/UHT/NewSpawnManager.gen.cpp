// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/NewSpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewSpawnManager() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_UNewSpawnManager();
	MAZEGAME_API UClass* Z_Construct_UClass_UNewSpawnManager_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManager();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	void UNewSpawnManager::StaticRegisterNativesUNewSpawnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewSpawnManager);
	UClass* Z_Construct_UClass_UNewSpawnManager_NoRegister()
	{
		return UNewSpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_UNewSpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewSpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewSpawnManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewSpawnManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NewSpawnManager.h" },
		{ "ModuleRelativePath", "Public/NewSpawnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewSpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewSpawnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewSpawnManager_Statics::ClassParams = {
		&UNewSpawnManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewSpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewSpawnManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNewSpawnManager()
	{
		if (!Z_Registration_Info_UClass_UNewSpawnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewSpawnManager.OuterSingleton, Z_Construct_UClass_UNewSpawnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewSpawnManager.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<UNewSpawnManager>()
	{
		return UNewSpawnManager::StaticClass();
	}
	UNewSpawnManager::UNewSpawnManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewSpawnManager);
	UNewSpawnManager::~UNewSpawnManager() {}
	struct Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_NewSpawnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_NewSpawnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewSpawnManager, UNewSpawnManager::StaticClass, TEXT("UNewSpawnManager"), &Z_Registration_Info_UClass_UNewSpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewSpawnManager), 3660659782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_NewSpawnManager_h_3499428759(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_NewSpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_NewSpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
