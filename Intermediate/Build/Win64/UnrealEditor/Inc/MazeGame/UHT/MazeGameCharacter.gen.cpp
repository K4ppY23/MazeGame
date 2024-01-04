// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/MazeGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGameCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_AMazeGameCharacter();
	MAZEGAME_API UClass* Z_Construct_UClass_AMazeGameCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	void AMazeGameCharacter::StaticRegisterNativesAMazeGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeGameCharacter);
	UClass* Z_Construct_UClass_AMazeGameCharacter_NoRegister()
	{
		return AMazeGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MazeGameCharacter.h" },
		{ "ModuleRelativePath", "MazeGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
#endif
		{ "ModuleRelativePath", "MazeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeGameCharacter, TurnRateGamepad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData), Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_TurnRateGamepad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeGameCharacter_Statics::ClassParams = {
		&AMazeGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMazeGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeGameCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMazeGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AMazeGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeGameCharacter.OuterSingleton, Z_Construct_UClass_AMazeGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMazeGameCharacter.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<AMazeGameCharacter>()
	{
		return AMazeGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGameCharacter);
	AMazeGameCharacter::~AMazeGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_MazeGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_MazeGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMazeGameCharacter, AMazeGameCharacter::StaticClass, TEXT("AMazeGameCharacter"), &Z_Registration_Info_UClass_AMazeGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeGameCharacter), 1784396376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_MazeGameCharacter_h_2255526618(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_MazeGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ksule_Documents_Unreal_Projects_MazeGame_5_3_Source_MazeGame_MazeGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
