// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManager();
	MAZEGAME_API UClass* Z_Construct_UClass_USpawnManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	DEFINE_FUNCTION(USpawnManager::execCollectTargetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectTargetPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpawnManager::execSpawnActorsAtRandomPoints)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumActorsToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorsAtRandomPoints(Z_Param_ActorClass,Z_Param_NumActorsToSpawn);
		P_NATIVE_END;
	}
	void USpawnManager::StaticRegisterNativesUSpawnManager()
	{
		UClass* Class = USpawnManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectTargetPoints", &USpawnManager::execCollectTargetPoints },
			{ "SpawnActorsAtRandomPoints", &USpawnManager::execSpawnActorsAtRandomPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManager, nullptr, "CollectTargetPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USpawnManager_CollectTargetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManager_CollectTargetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics
	{
		struct SpawnManager_eventSpawnActorsAtRandomPoints_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			int32 NumActorsToSpawn;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActorsToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManager_eventSpawnActorsAtRandomPoints_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::NewProp_NumActorsToSpawn = { "NumActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManager_eventSpawnActorsAtRandomPoints_Parms, NumActorsToSpawn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::NewProp_NumActorsToSpawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to spawn actors randomly at target points\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to spawn actors randomly at target points" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManager, nullptr, "SpawnActorsAtRandomPoints", nullptr, nullptr, Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::SpawnManager_eventSpawnActorsAtRandomPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::SpawnManager_eventSpawnActorsAtRandomPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManager);
	UClass* Z_Construct_UClass_USpawnManager_NoRegister()
	{
		return USpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_USpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BonusBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpawnManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnManager_CollectTargetPoints, "CollectTargetPoints" }, // 486262203
		{ &Z_Construct_UFunction_USpawnManager_SpawnActorsAtRandomPoints, "SpawnActorsAtRandomPoints" }, // 3006757667
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array to store reference to target points\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array to store reference to target points" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManager, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints_MetaData), Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManager_Statics::NewProp_BonusBlueprint_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Bonus Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Bonus Blueprint" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpawnManager_Statics::NewProp_BonusBlueprint = { "BonusBlueprint", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnManager, BonusBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::NewProp_BonusBlueprint_MetaData), Z_Construct_UClass_USpawnManager_Statics::NewProp_BonusBlueprint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManager_Statics::NewProp_TargetPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnManager_Statics::NewProp_BonusBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnManager_Statics::ClassParams = {
		&USpawnManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpawnManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnManager()
	{
		if (!Z_Registration_Info_UClass_USpawnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnManager.OuterSingleton, Z_Construct_UClass_USpawnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnManager.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<USpawnManager>()
	{
		return USpawnManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnManager);
	USpawnManager::~USpawnManager() {}
	struct Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnManager, USpawnManager::StaticClass, TEXT("USpawnManager"), &Z_Registration_Info_UClass_USpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManager), 1025654389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManager_h_1044507206(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_Public_SpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
