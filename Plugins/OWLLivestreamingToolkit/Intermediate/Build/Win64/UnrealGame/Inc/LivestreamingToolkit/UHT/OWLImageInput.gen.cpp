// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Public/Tools/OWLImageInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLImageInput() {}
// Cross Module References
	LIVESTREAMINGTOOLKIT_API UEnum* Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLOutputType;
	static UEnum* EOWLOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType, (UObject*)Z_Construct_UPackage__Script_LivestreamingToolkit(), TEXT("EOWLOutputType"));
		}
		return Z_Registration_Info_UEnum_EOWLOutputType.OuterSingleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UEnum* StaticEnum<EOWLOutputType>()
	{
		return EOWLOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enumerators[] = {
		{ "EOWLOutputType::OT_Media", (int64)EOWLOutputType::OT_Media },
		{ "EOWLOutputType::OT_VirtualWebcam", (int64)EOWLOutputType::OT_VirtualWebcam },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/OWLImageInput.h" },
		{ "OT_Media.Name", "EOWLOutputType::OT_Media" },
		{ "OT_VirtualWebcam.Name", "EOWLOutputType::OT_VirtualWebcam" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
		nullptr,
		"EOWLOutputType",
		"EOWLOutputType",
		Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType()
	{
		if (!Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton, Z_Construct_UEnum_LivestreamingToolkit_EOWLOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLOutputType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics::EnumInfo[] = {
		{ EOWLOutputType_StaticEnum, TEXT("EOWLOutputType"), &Z_Registration_Info_UEnum_EOWLOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1939822597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_890433850(TEXT("/Script/LivestreamingToolkit"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Public_Tools_OWLImageInput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
