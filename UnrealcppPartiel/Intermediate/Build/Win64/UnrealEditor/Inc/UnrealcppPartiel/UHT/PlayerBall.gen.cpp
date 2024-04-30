// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealcppPartiel/PlayerBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALCPPPARTIEL_API UClass* Z_Construct_UClass_APlayerBall();
	UNREALCPPPARTIEL_API UClass* Z_Construct_UClass_APlayerBall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealcppPartiel();
// End Cross Module References
	void APlayerBall::StaticRegisterNativesAPlayerBall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerBall);
	UClass* Z_Construct_UClass_APlayerBall_NoRegister()
	{
		return APlayerBall::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealcppPartiel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerBall.h" },
		{ "ModuleRelativePath", "PlayerBall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBall_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "PlayerBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBall_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBall, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_APlayerBall_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBall_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBall_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBall, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_APlayerBall_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBall_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerBall_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBall, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_APlayerBall_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBall_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "PlayerBall" },
		{ "ModuleRelativePath", "PlayerBall.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerBall_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerBall, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_APlayerBall_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerBall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBall_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBall_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBall_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerBall_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBall_Statics::ClassParams = {
		&APlayerBall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerBall_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerBall()
	{
		if (!Z_Registration_Info_UClass_APlayerBall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBall.OuterSingleton, Z_Construct_UClass_APlayerBall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerBall.OuterSingleton;
	}
	template<> UNREALCPPPARTIEL_API UClass* StaticClass<APlayerBall>()
	{
		return APlayerBall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBall);
	APlayerBall::~APlayerBall() {}
	struct Z_CompiledInDeferFile_FID_Users_tdang_Documents_GitHub_UnrealCppPartiel_UnrealcppPartiel_Source_UnrealcppPartiel_PlayerBall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tdang_Documents_GitHub_UnrealCppPartiel_UnrealcppPartiel_Source_UnrealcppPartiel_PlayerBall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBall, APlayerBall::StaticClass, TEXT("APlayerBall"), &Z_Registration_Info_UClass_APlayerBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBall), 882849018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tdang_Documents_GitHub_UnrealCppPartiel_UnrealcppPartiel_Source_UnrealcppPartiel_PlayerBall_h_1562397333(TEXT("/Script/UnrealcppPartiel"),
		Z_CompiledInDeferFile_FID_Users_tdang_Documents_GitHub_UnrealCppPartiel_UnrealcppPartiel_Source_UnrealcppPartiel_PlayerBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tdang_Documents_GitHub_UnrealCppPartiel_UnrealcppPartiel_Source_UnrealcppPartiel_PlayerBall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
