// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/NDIEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIEnums() {}
// Cross Module References
	OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat();
	UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIVideoConversionFormat;
	static UEnum* ENDIVideoConversionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDIVideoConversionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDIVideoConversionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("ENDIVideoConversionFormat"));
		}
		return Z_Registration_Info_UEnum_ENDIVideoConversionFormat.OuterSingleton;
	}
	template<> OWLNDI_API UEnum* StaticEnum<ENDIVideoConversionFormat>()
	{
		return ENDIVideoConversionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enumerators[] = {
		{ "ENDIVideoConversionFormat::NDIVCF_BGRA", (int64)ENDIVideoConversionFormat::NDIVCF_BGRA },
		{ "ENDIVideoConversionFormat::NDIVCF_UYVY", (int64)ENDIVideoConversionFormat::NDIVCF_UYVY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "NDI Video Conversion Format" },
		{ "ModuleRelativePath", "Public/NDIEnums.h" },
		{ "NDIVCF_BGRA.DisplayName", "BGRA" },
		{ "NDIVCF_BGRA.Name", "ENDIVideoConversionFormat::NDIVCF_BGRA" },
		{ "NDIVCF_UYVY.DisplayName", "UYVY" },
		{ "NDIVCF_UYVY.Name", "ENDIVideoConversionFormat::NDIVCF_UYVY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLNDI,
		nullptr,
		"ENDIVideoConversionFormat",
		"ENDIVideoConversionFormat",
		Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat()
	{
		if (!Z_Registration_Info_UEnum_ENDIVideoConversionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIVideoConversionFormat.InnerSingleton, Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDIVideoConversionFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h_Statics::EnumInfo[] = {
		{ ENDIVideoConversionFormat_StaticEnum, TEXT("ENDIVideoConversionFormat"), &Z_Registration_Info_UEnum_ENDIVideoConversionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1521069760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h_3599137174(TEXT("/Script/OWLNDI"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_NDIEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
