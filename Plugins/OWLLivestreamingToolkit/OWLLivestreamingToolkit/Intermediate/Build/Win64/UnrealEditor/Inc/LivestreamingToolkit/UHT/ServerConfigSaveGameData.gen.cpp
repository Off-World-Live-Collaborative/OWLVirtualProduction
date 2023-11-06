// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/SaveGameData/ServerConfigSaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerConfigSaveGameData() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData();
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData;
class UScriptStruct* FPluginUpdateSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginUpdateSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginUpdateSaveGameData>()
{
	return FPluginUpdateSaveGameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipPluginVersion_MetaData[];
#endif
		static void NewProp_SkipPluginVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipPluginVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkippedPluginVersionHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkippedPluginVersionHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginUpdateSaveGameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit(void* Obj)
	{
		((FPluginUpdateSaveGameData*)Obj)->SkipPluginVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion = { "SkipPluginVersion", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginUpdateSaveGameData), &Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData[] = {
		{ "Category", "OWL Plugin Update" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash = { "SkippedPluginVersionHash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginUpdateSaveGameData, SkippedPluginVersionHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkipPluginVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewProp_SkippedPluginVersionHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"PluginUpdateSaveGameData",
		sizeof(FPluginUpdateSaveGameData),
		alignof(FPluginUpdateSaveGameData),
		Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginUpdateSaveGameData()
	{
		if (!Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData;
class UScriptStruct* FPluginSettingsSaveGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("PluginSettingsSaveGameData"));
	}
	return Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FPluginSettingsSaveGameData>()
{
	return FPluginSettingsSaveGameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditorViewportRendering_MetaData[];
#endif
		static void NewProp_EnableEditorViewportRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditorViewportRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableRuntimeViewportRendering_MetaData[];
#endif
		static void NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRuntimeViewportRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginSettingsSaveGameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit(void* Obj)
	{
		((FPluginSettingsSaveGameData*)Obj)->EnableEditorViewportRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering = { "EnableEditorViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SaveGameData/ServerConfigSaveGameData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit(void* Obj)
	{
		((FPluginSettingsSaveGameData*)Obj)->EnableRuntimeViewportRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering = { "EnableRuntimeViewportRendering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginSettingsSaveGameData), &Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableEditorViewportRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewProp_EnableRuntimeViewportRendering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"PluginSettingsSaveGameData",
		sizeof(FPluginSettingsSaveGameData),
		alignof(FPluginSettingsSaveGameData),
		Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginSettingsSaveGameData()
	{
		if (!Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics::ScriptStructInfo[] = {
		{ FPluginUpdateSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginUpdateSaveGameData_Statics::NewStructOps, TEXT("PluginUpdateSaveGameData"), &Z_Registration_Info_UScriptStruct_PluginUpdateSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginUpdateSaveGameData), 2232507503U) },
		{ FPluginSettingsSaveGameData::StaticStruct, Z_Construct_UScriptStruct_FPluginSettingsSaveGameData_Statics::NewStructOps, TEXT("PluginSettingsSaveGameData"), &Z_Registration_Info_UScriptStruct_PluginSettingsSaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginSettingsSaveGameData), 2723866986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_3148883067(TEXT("/Script/LivestreamingToolkit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_SaveGameData_ServerConfigSaveGameData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
