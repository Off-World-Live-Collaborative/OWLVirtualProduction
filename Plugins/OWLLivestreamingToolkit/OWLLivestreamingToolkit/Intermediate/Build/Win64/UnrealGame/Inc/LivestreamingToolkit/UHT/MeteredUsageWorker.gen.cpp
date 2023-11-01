// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/ServerAuth/MeteredUsageWorker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteredUsageWorker() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DummyStruct;
class UScriptStruct* FDummyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummyStruct, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("DummyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DummyStruct.OuterSingleton;
}
template<> LIVESTREAMINGTOOLKIT_API UScriptStruct* StaticStruct<FDummyStruct>()
{
	return FDummyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDummyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This struct is a hack to allow declaring dynamic delegates in the raw class\n *(we need generated.h file to declare the dynamic delegate and we can only have a dynamic delegate if we have a ustruct of uclass)*/" },
		{ "ModuleRelativePath", "Private/ServerAuth/MeteredUsageWorker.h" },
		{ "ToolTip", "This struct is a hack to allow declaring dynamic delegates in the raw class\n(we need generated.h file to declare the dynamic delegate and we can only have a dynamic delegate if we have a ustruct of uclass)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDummyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		&NewStructOps,
		"DummyStruct",
		sizeof(FDummyStruct),
		alignof(FDummyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDummyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton, Z_Construct_UScriptStruct_FDummyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DummyStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics::ScriptStructInfo[] = {
		{ FDummyStruct::StaticStruct, Z_Construct_UScriptStruct_FDummyStruct_Statics::NewStructOps, TEXT("DummyStruct"), &Z_Registration_Info_UScriptStruct_DummyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDummyStruct), 3613796913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_2023952827(TEXT("/Script/LivestreamingToolkit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_ServerAuth_MeteredUsageWorker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
