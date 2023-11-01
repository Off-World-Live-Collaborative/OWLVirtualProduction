// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDIFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIFinder() {}
// Cross Module References
	OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FNDISource();
	UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDISource;
class UScriptStruct* FNDISource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDISource, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("NDISource"));
	}
	return Z_Registration_Info_UScriptStruct_NDISource.OuterSingleton;
}
template<> OWLNDI_API UScriptStruct* StaticStruct<FNDISource>()
{
	return FNDISource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDISource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDISource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDISource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDISource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NDISource" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDISource, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "NDISource" },
		{ "ModuleRelativePath", "Public/OWLNDIFinder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDISource, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDISource_Statics::NewProp_URL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDISource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
		nullptr,
		&NewStructOps,
		"NDISource",
		sizeof(FNDISource),
		alignof(FNDISource),
		Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDISource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDISource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDISource()
	{
		if (!Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton, Z_Construct_UScriptStruct_FNDISource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDISource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics::ScriptStructInfo[] = {
		{ FNDISource::StaticStruct, Z_Construct_UScriptStruct_FNDISource_Statics::NewStructOps, TEXT("NDISource"), &Z_Registration_Info_UScriptStruct_NDISource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDISource), 3763600194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_1906083497(TEXT("/Script/OWLNDI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIFinder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
