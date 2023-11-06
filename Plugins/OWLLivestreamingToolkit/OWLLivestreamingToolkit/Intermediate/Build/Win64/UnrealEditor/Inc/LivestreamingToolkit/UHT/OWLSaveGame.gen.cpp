// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/OWLSaveGame.h"
#include "LivestreamingToolkit/Private/SaveGameData/ServerConfigSaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	void UOWLSaveGame::StaticRegisterNativesUOWLSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLSaveGame);
	UClass* Z_Construct_UClass_UOWLSaveGame_NoRegister()
	{
		return UOWLSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UOWLSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginUpdateSaveFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginUpdateSaveGameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginUpdateSaveGameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginSettingsSaveFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettingsSaveGameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginSettingsSaveGameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGameData/OWLSaveGame.h" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "UserData" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName = { "PluginUpdateSaveFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveFileName), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData[] = {
		{ "Category", "ServerConfigSave" },
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData = { "PluginUpdateSaveGameData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSaveGame, PluginUpdateSaveGameData), Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData_MetaData)) }; // 2232507503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName = { "PluginSettingsSaveFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveFileName), METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/OWLSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData = { "PluginSettingsSaveGameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSaveGame, PluginSettingsSaveGameData), Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData_MetaData)) }; // 2723866986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginUpdateSaveGameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSaveGame_Statics::NewProp_PluginSettingsSaveGameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams = {
		&UOWLSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLSaveGame()
	{
		if (!Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton, Z_Construct_UClass_UOWLSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLSaveGame.OuterSingleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UOWLSaveGame>()
	{
		return UOWLSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSaveGame);
	UOWLSaveGame::~UOWLSaveGame() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSaveGame, UOWLSaveGame::StaticClass, TEXT("UOWLSaveGame"), &Z_Registration_Info_UClass_UOWLSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSaveGame), 2161824532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_1899071025(TEXT("/Script/LivestreamingToolkit"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_OWLSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
