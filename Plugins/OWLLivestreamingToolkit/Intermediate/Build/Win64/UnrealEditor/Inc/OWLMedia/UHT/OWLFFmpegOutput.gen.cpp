// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLFFmpegOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLFFmpegOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLAudioSampleBlock();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLEncodedPacket();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions();
	UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLMediaOutputType;
	static UEnum* EOWLMediaOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLMediaOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLMediaOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("EOWLMediaOutputType"));
		}
		return Z_Registration_Info_UEnum_EOWLMediaOutputType.OuterSingleton;
	}
	template<> OWLMEDIA_API UEnum* StaticEnum<EOWLMediaOutputType>()
	{
		return EOWLMediaOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enumerators[] = {
		{ "EOWLMediaOutputType::T_SRT", (int64)EOWLMediaOutputType::T_SRT },
		{ "EOWLMediaOutputType::T_RTMP", (int64)EOWLMediaOutputType::T_RTMP },
		{ "EOWLMediaOutputType::T_FILEOUTPUT", (int64)EOWLMediaOutputType::T_FILEOUTPUT },
		{ "EOWLMediaOutputType::T_RTSP", (int64)EOWLMediaOutputType::T_RTSP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "T_FILEOUTPUT.DisplayName", "Save to File" },
		{ "T_FILEOUTPUT.Name", "EOWLMediaOutputType::T_FILEOUTPUT" },
		{ "T_RTMP.DisplayName", "Stream to RTMP" },
		{ "T_RTMP.Name", "EOWLMediaOutputType::T_RTMP" },
		{ "T_RTSP.DisplayName", "RTSP (Experimental)" },
		{ "T_RTSP.Name", "EOWLMediaOutputType::T_RTSP" },
		{ "T_RTSP.Tooltip", "Warning: Known issues when streaming to non-existent RTSP server" },
		{ "T_SRT.DisplayName", "Stream to SRT" },
		{ "T_SRT.Name", "EOWLMediaOutputType::T_SRT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		"EOWLMediaOutputType",
		"EOWLMediaOutputType",
		Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType()
	{
		if (!Z_Registration_Info_UEnum_EOWLMediaOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLMediaOutputType.InnerSingleton, Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLMediaOutputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLDestinationFormat;
	static UEnum* EOWLDestinationFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLDestinationFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLDestinationFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("EOWLDestinationFormat"));
		}
		return Z_Registration_Info_UEnum_EOWLDestinationFormat.OuterSingleton;
	}
	template<> OWLMEDIA_API UEnum* StaticEnum<EOWLDestinationFormat>()
	{
		return EOWLDestinationFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enumerators[] = {
		{ "EOWLDestinationFormat::F_MP4", (int64)EOWLDestinationFormat::F_MP4 },
		{ "EOWLDestinationFormat::F_MPEGTS", (int64)EOWLDestinationFormat::F_MPEGTS },
		{ "EOWLDestinationFormat::F_FLV", (int64)EOWLDestinationFormat::F_FLV },
		{ "EOWLDestinationFormat::F_RTSP", (int64)EOWLDestinationFormat::F_RTSP },
		{ "EOWLDestinationFormat::F_MKV", (int64)EOWLDestinationFormat::F_MKV },
		{ "EOWLDestinationFormat::F_AVI", (int64)EOWLDestinationFormat::F_AVI },
		{ "EOWLDestinationFormat::F_MOV", (int64)EOWLDestinationFormat::F_MOV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enum_MetaDataParams[] = {
		{ "F_AVI.DisplayName", "AVI container" },
		{ "F_AVI.Name", "EOWLDestinationFormat::F_AVI" },
		{ "F_FLV.DisplayName", "Flash Video container" },
		{ "F_FLV.Name", "EOWLDestinationFormat::F_FLV" },
		{ "F_MKV.DisplayName", "Matroska Video container" },
		{ "F_MKV.Name", "EOWLDestinationFormat::F_MKV" },
		{ "F_MOV.DisplayName", "MOV container" },
		{ "F_MOV.Name", "EOWLDestinationFormat::F_MOV" },
		{ "F_MP4.DisplayName", "MP4 container" },
		{ "F_MP4.Name", "EOWLDestinationFormat::F_MP4" },
		{ "F_MPEGTS.DisplayName", "MPEG TS container" },
		{ "F_MPEGTS.Hidden", "" },
		{ "F_MPEGTS.Name", "EOWLDestinationFormat::F_MPEGTS" },
		{ "F_RTSP.DisplayName", "RTSP Container" },
		{ "F_RTSP.Name", "EOWLDestinationFormat::F_RTSP" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		"EOWLDestinationFormat",
		"EOWLDestinationFormat",
		Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat()
	{
		if (!Z_Registration_Info_UEnum_EOWLDestinationFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLDestinationFormat.InnerSingleton, Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLDestinationFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLSRTPubKeyLen;
	static UEnum* EOWLSRTPubKeyLen_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("EOWLSRTPubKeyLen"));
		}
		return Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.OuterSingleton;
	}
	template<> OWLMEDIA_API UEnum* StaticEnum<EOWLSRTPubKeyLen>()
	{
		return EOWLSRTPubKeyLen_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enumerators[] = {
		{ "EOWLSRTPubKeyLen::SRT_PKL_16", (int64)EOWLSRTPubKeyLen::SRT_PKL_16 },
		{ "EOWLSRTPubKeyLen::SRT_PKL_24", (int64)EOWLSRTPubKeyLen::SRT_PKL_24 },
		{ "EOWLSRTPubKeyLen::SRT_PKL_32", (int64)EOWLSRTPubKeyLen::SRT_PKL_32 },
		{ "EOWLSRTPubKeyLen::SRT_PKL_UNDECIDED", (int64)EOWLSRTPubKeyLen::SRT_PKL_UNDECIDED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "SRT_PKL_16.DisplayName", "16" },
		{ "SRT_PKL_16.Name", "EOWLSRTPubKeyLen::SRT_PKL_16" },
		{ "SRT_PKL_24.DisplayName", "24" },
		{ "SRT_PKL_24.Name", "EOWLSRTPubKeyLen::SRT_PKL_24" },
		{ "SRT_PKL_32.DisplayName", "32" },
		{ "SRT_PKL_32.Name", "EOWLSRTPubKeyLen::SRT_PKL_32" },
		{ "SRT_PKL_UNDECIDED.DisplayName", "" },
		{ "SRT_PKL_UNDECIDED.Name", "EOWLSRTPubKeyLen::SRT_PKL_UNDECIDED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		"EOWLSRTPubKeyLen",
		"EOWLSRTPubKeyLen",
		Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen()
	{
		if (!Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.InnerSingleton, Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLSRTPubKeyLen.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLAudioChannelLayout;
	static UEnum* EOWLAudioChannelLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLAudioChannelLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLAudioChannelLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("EOWLAudioChannelLayout"));
		}
		return Z_Registration_Info_UEnum_EOWLAudioChannelLayout.OuterSingleton;
	}
	template<> OWLMEDIA_API UEnum* StaticEnum<EOWLAudioChannelLayout>()
	{
		return EOWLAudioChannelLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enumerators[] = {
		{ "EOWLAudioChannelLayout::ACL_MONO", (int64)EOWLAudioChannelLayout::ACL_MONO },
		{ "EOWLAudioChannelLayout::ACL_STEREO", (int64)EOWLAudioChannelLayout::ACL_STEREO },
		{ "EOWLAudioChannelLayout::ACL_2POINT1", (int64)EOWLAudioChannelLayout::ACL_2POINT1 },
		{ "EOWLAudioChannelLayout::ACL_2_1", (int64)EOWLAudioChannelLayout::ACL_2_1 },
		{ "EOWLAudioChannelLayout::ACL_SURROUND", (int64)EOWLAudioChannelLayout::ACL_SURROUND },
		{ "EOWLAudioChannelLayout::ACL_3POINT1", (int64)EOWLAudioChannelLayout::ACL_3POINT1 },
		{ "EOWLAudioChannelLayout::ACL_4POINT0", (int64)EOWLAudioChannelLayout::ACL_4POINT0 },
		{ "EOWLAudioChannelLayout::ACL_4POINT1", (int64)EOWLAudioChannelLayout::ACL_4POINT1 },
		{ "EOWLAudioChannelLayout::ACL_2_2", (int64)EOWLAudioChannelLayout::ACL_2_2 },
		{ "EOWLAudioChannelLayout::ACL_QUAD", (int64)EOWLAudioChannelLayout::ACL_QUAD },
		{ "EOWLAudioChannelLayout::ACL_5POINT0", (int64)EOWLAudioChannelLayout::ACL_5POINT0 },
		{ "EOWLAudioChannelLayout::ACL_5POINT1", (int64)EOWLAudioChannelLayout::ACL_5POINT1 },
		{ "EOWLAudioChannelLayout::ACL_5POINT0_BACK", (int64)EOWLAudioChannelLayout::ACL_5POINT0_BACK },
		{ "EOWLAudioChannelLayout::ACL_5POINT1_BACK", (int64)EOWLAudioChannelLayout::ACL_5POINT1_BACK },
		{ "EOWLAudioChannelLayout::ACL_6POINT0", (int64)EOWLAudioChannelLayout::ACL_6POINT0 },
		{ "EOWLAudioChannelLayout::ACL_6POINT0_FRONT", (int64)EOWLAudioChannelLayout::ACL_6POINT0_FRONT },
		{ "EOWLAudioChannelLayout::ACL_HEXAGONAL", (int64)EOWLAudioChannelLayout::ACL_HEXAGONAL },
		{ "EOWLAudioChannelLayout::ACL_6POINT1", (int64)EOWLAudioChannelLayout::ACL_6POINT1 },
		{ "EOWLAudioChannelLayout::ACL_6POINT1_BACK", (int64)EOWLAudioChannelLayout::ACL_6POINT1_BACK },
		{ "EOWLAudioChannelLayout::ACL_6POINT1_FRONT", (int64)EOWLAudioChannelLayout::ACL_6POINT1_FRONT },
		{ "EOWLAudioChannelLayout::ACL_7POINT0", (int64)EOWLAudioChannelLayout::ACL_7POINT0 },
		{ "EOWLAudioChannelLayout::ACL_7POINT0_FRONT", (int64)EOWLAudioChannelLayout::ACL_7POINT0_FRONT },
		{ "EOWLAudioChannelLayout::ACL_7POINT1", (int64)EOWLAudioChannelLayout::ACL_7POINT1 },
		{ "EOWLAudioChannelLayout::ACL_7POINT1_WIDE", (int64)EOWLAudioChannelLayout::ACL_7POINT1_WIDE },
		{ "EOWLAudioChannelLayout::ACL_7POINT1_WIDE_BACK", (int64)EOWLAudioChannelLayout::ACL_7POINT1_WIDE_BACK },
		{ "EOWLAudioChannelLayout::ACL_OCTAGONAL", (int64)EOWLAudioChannelLayout::ACL_OCTAGONAL },
		{ "EOWLAudioChannelLayout::ACL_HEXADECAGONAL", (int64)EOWLAudioChannelLayout::ACL_HEXADECAGONAL },
		{ "EOWLAudioChannelLayout::ACL_STEREO_DOWNMIX", (int64)EOWLAudioChannelLayout::ACL_STEREO_DOWNMIX },
		{ "EOWLAudioChannelLayout::ACL_22POINT2", (int64)EOWLAudioChannelLayout::ACL_22POINT2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enum_MetaDataParams[] = {
		{ "ACL_22POINT2.Comment", "/* 24 Channels */" },
		{ "ACL_22POINT2.DisplayName", "22.2" },
		{ "ACL_22POINT2.Name", "EOWLAudioChannelLayout::ACL_22POINT2" },
		{ "ACL_22POINT2.ToolTip", "24 Channels" },
		{ "ACL_2_1.Comment", "/* 3 Channels */" },
		{ "ACL_2_1.DisplayName", "2 1" },
		{ "ACL_2_1.Name", "EOWLAudioChannelLayout::ACL_2_1" },
		{ "ACL_2_1.ToolTip", "3 Channels" },
		{ "ACL_2_2.Comment", "/* 4 Channels */" },
		{ "ACL_2_2.DisplayName", "2 2" },
		{ "ACL_2_2.Name", "EOWLAudioChannelLayout::ACL_2_2" },
		{ "ACL_2_2.ToolTip", "4 Channels" },
		{ "ACL_2POINT1.Comment", "/* 3 Channels */" },
		{ "ACL_2POINT1.DisplayName", "2.1" },
		{ "ACL_2POINT1.Name", "EOWLAudioChannelLayout::ACL_2POINT1" },
		{ "ACL_2POINT1.ToolTip", "3 Channels" },
		{ "ACL_3POINT1.Comment", "/* 4 Channels */" },
		{ "ACL_3POINT1.DisplayName", "3.1" },
		{ "ACL_3POINT1.Name", "EOWLAudioChannelLayout::ACL_3POINT1" },
		{ "ACL_3POINT1.ToolTip", "4 Channels" },
		{ "ACL_4POINT0.Comment", "/* 4 Channels */" },
		{ "ACL_4POINT0.DisplayName", "4.0" },
		{ "ACL_4POINT0.Name", "EOWLAudioChannelLayout::ACL_4POINT0" },
		{ "ACL_4POINT0.ToolTip", "4 Channels" },
		{ "ACL_4POINT1.Comment", "/* 5 Channels */" },
		{ "ACL_4POINT1.DisplayName", "4.1" },
		{ "ACL_4POINT1.Name", "EOWLAudioChannelLayout::ACL_4POINT1" },
		{ "ACL_4POINT1.ToolTip", "5 Channels" },
		{ "ACL_5POINT0.Comment", "/* 5 Channels */" },
		{ "ACL_5POINT0.DisplayName", "5.0" },
		{ "ACL_5POINT0.Name", "EOWLAudioChannelLayout::ACL_5POINT0" },
		{ "ACL_5POINT0.ToolTip", "5 Channels" },
		{ "ACL_5POINT0_BACK.Comment", "/* 5 Channels */" },
		{ "ACL_5POINT0_BACK.DisplayName", "5.0 Back" },
		{ "ACL_5POINT0_BACK.Name", "EOWLAudioChannelLayout::ACL_5POINT0_BACK" },
		{ "ACL_5POINT0_BACK.ToolTip", "5 Channels" },
		{ "ACL_5POINT1.Comment", "/* 6 Channels */" },
		{ "ACL_5POINT1.DisplayName", "5.1" },
		{ "ACL_5POINT1.Name", "EOWLAudioChannelLayout::ACL_5POINT1" },
		{ "ACL_5POINT1.ToolTip", "6 Channels" },
		{ "ACL_5POINT1_BACK.Comment", "/* 6 Channels */" },
		{ "ACL_5POINT1_BACK.DisplayName", "5.1 Back" },
		{ "ACL_5POINT1_BACK.Name", "EOWLAudioChannelLayout::ACL_5POINT1_BACK" },
		{ "ACL_5POINT1_BACK.ToolTip", "6 Channels" },
		{ "ACL_6POINT0.Comment", "/* 6 Channels */" },
		{ "ACL_6POINT0.DisplayName", "6.0" },
		{ "ACL_6POINT0.Name", "EOWLAudioChannelLayout::ACL_6POINT0" },
		{ "ACL_6POINT0.ToolTip", "6 Channels" },
		{ "ACL_6POINT0_FRONT.Comment", "/* 6 Channels */" },
		{ "ACL_6POINT0_FRONT.DisplayName", "6.0 Front" },
		{ "ACL_6POINT0_FRONT.Name", "EOWLAudioChannelLayout::ACL_6POINT0_FRONT" },
		{ "ACL_6POINT0_FRONT.ToolTip", "6 Channels" },
		{ "ACL_6POINT1.Comment", "/* 7 Channels */" },
		{ "ACL_6POINT1.DisplayName", "6.1" },
		{ "ACL_6POINT1.Name", "EOWLAudioChannelLayout::ACL_6POINT1" },
		{ "ACL_6POINT1.ToolTip", "7 Channels" },
		{ "ACL_6POINT1_BACK.Comment", "/* 7 Channels */" },
		{ "ACL_6POINT1_BACK.DisplayName", "6.1 Back" },
		{ "ACL_6POINT1_BACK.Name", "EOWLAudioChannelLayout::ACL_6POINT1_BACK" },
		{ "ACL_6POINT1_BACK.ToolTip", "7 Channels" },
		{ "ACL_6POINT1_FRONT.Comment", "/* 7 Channels */" },
		{ "ACL_6POINT1_FRONT.DisplayName", "6.1 Front" },
		{ "ACL_6POINT1_FRONT.Name", "EOWLAudioChannelLayout::ACL_6POINT1_FRONT" },
		{ "ACL_6POINT1_FRONT.ToolTip", "7 Channels" },
		{ "ACL_7POINT0.Comment", "/* 7 Channels */" },
		{ "ACL_7POINT0.DisplayName", "7.0" },
		{ "ACL_7POINT0.Name", "EOWLAudioChannelLayout::ACL_7POINT0" },
		{ "ACL_7POINT0.ToolTip", "7 Channels" },
		{ "ACL_7POINT0_FRONT.Comment", "/* 7 Channels */" },
		{ "ACL_7POINT0_FRONT.DisplayName", "7.0 Front" },
		{ "ACL_7POINT0_FRONT.Name", "EOWLAudioChannelLayout::ACL_7POINT0_FRONT" },
		{ "ACL_7POINT0_FRONT.ToolTip", "7 Channels" },
		{ "ACL_7POINT1.Comment", "/* 8 Channels */" },
		{ "ACL_7POINT1.DisplayName", "7.1" },
		{ "ACL_7POINT1.Name", "EOWLAudioChannelLayout::ACL_7POINT1" },
		{ "ACL_7POINT1.ToolTip", "8 Channels" },
		{ "ACL_7POINT1_WIDE.Comment", "/* 8 Channels */" },
		{ "ACL_7POINT1_WIDE.DisplayName", "7.1 Wide" },
		{ "ACL_7POINT1_WIDE.Name", "EOWLAudioChannelLayout::ACL_7POINT1_WIDE" },
		{ "ACL_7POINT1_WIDE.ToolTip", "8 Channels" },
		{ "ACL_7POINT1_WIDE_BACK.Comment", "/* 8 Channels */" },
		{ "ACL_7POINT1_WIDE_BACK.DisplayName", "7.1 Wide Back" },
		{ "ACL_7POINT1_WIDE_BACK.Name", "EOWLAudioChannelLayout::ACL_7POINT1_WIDE_BACK" },
		{ "ACL_7POINT1_WIDE_BACK.ToolTip", "8 Channels" },
		{ "ACL_HEXADECAGONAL.Comment", "/* 16 Channels */" },
		{ "ACL_HEXADECAGONAL.DisplayName", "Hexadecagonal" },
		{ "ACL_HEXADECAGONAL.Name", "EOWLAudioChannelLayout::ACL_HEXADECAGONAL" },
		{ "ACL_HEXADECAGONAL.ToolTip", "16 Channels" },
		{ "ACL_HEXAGONAL.Comment", "/* 6 Channels */" },
		{ "ACL_HEXAGONAL.DisplayName", "Hexagonal" },
		{ "ACL_HEXAGONAL.Name", "EOWLAudioChannelLayout::ACL_HEXAGONAL" },
		{ "ACL_HEXAGONAL.ToolTip", "6 Channels" },
		{ "ACL_MONO.Comment", "/* 1 Channel */" },
		{ "ACL_MONO.DisplayName", "Mono" },
		{ "ACL_MONO.Name", "EOWLAudioChannelLayout::ACL_MONO" },
		{ "ACL_MONO.ToolTip", "1 Channel" },
		{ "ACL_OCTAGONAL.Comment", "/* 8 Channels */" },
		{ "ACL_OCTAGONAL.DisplayName", "Octagonal" },
		{ "ACL_OCTAGONAL.Name", "EOWLAudioChannelLayout::ACL_OCTAGONAL" },
		{ "ACL_OCTAGONAL.ToolTip", "8 Channels" },
		{ "ACL_QUAD.Comment", "/* 4 Channels */" },
		{ "ACL_QUAD.DisplayName", "Quad" },
		{ "ACL_QUAD.Name", "EOWLAudioChannelLayout::ACL_QUAD" },
		{ "ACL_QUAD.ToolTip", "4 Channels" },
		{ "ACL_STEREO.Comment", "/* 2 Channels */" },
		{ "ACL_STEREO.DisplayName", "Stereo" },
		{ "ACL_STEREO.Name", "EOWLAudioChannelLayout::ACL_STEREO" },
		{ "ACL_STEREO.ToolTip", "2 Channels" },
		{ "ACL_STEREO_DOWNMIX.Comment", "/* 2 Channels */" },
		{ "ACL_STEREO_DOWNMIX.DisplayName", "Stereo Downmix" },
		{ "ACL_STEREO_DOWNMIX.Name", "EOWLAudioChannelLayout::ACL_STEREO_DOWNMIX" },
		{ "ACL_STEREO_DOWNMIX.ToolTip", "2 Channels" },
		{ "ACL_SURROUND.Comment", "/* 3 Channels */" },
		{ "ACL_SURROUND.DisplayName", "Surround" },
		{ "ACL_SURROUND.Name", "EOWLAudioChannelLayout::ACL_SURROUND" },
		{ "ACL_SURROUND.ToolTip", "3 Channels" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		"EOWLAudioChannelLayout",
		"EOWLAudioChannelLayout",
		Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout()
	{
		if (!Z_Registration_Info_UEnum_EOWLAudioChannelLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLAudioChannelLayout.InnerSingleton, Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLAudioChannelLayout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSRTOptions;
class UScriptStruct* FOWLSRTOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSRTOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSRTOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSRTOptions, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSRTOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSRTOptions.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSRTOptions>()
{
	return FOWLSRTOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSRTOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PubKeyLen_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PubKeyLen_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PubKeyLen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passphrase_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Passphrase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Latency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSRTOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Range -1 (disabled) to anything */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "Range -1 (disabled) to anything" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTOptions, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Timeout_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Crypto key length */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "Crypto key length" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen = { "PubKeyLen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTOptions, PubKeyLen), Z_Construct_UEnum_OWLMedia_EOWLSRTPubKeyLen, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen_MetaData)) }; // 1179267474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Passphrase_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The passphrase is the shared secret between the sender and the receiver. */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The passphrase is the shared secret between the sender and the receiver." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Passphrase = { "Passphrase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTOptions, Passphrase), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Passphrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Passphrase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_StreamID_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* A string of up to 512 characters that an Initiator can pass to a Responder. */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "A string of up to 512 characters that an Initiator can pass to a Responder." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTOptions, StreamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_StreamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_StreamID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Latency_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Receiver delay (in microseconds) to absorb bursts of missed packet retransmissions. */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "Receiver delay (in microseconds) to absorb bursts of missed packet retransmissions." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTOptions, Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Latency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Latency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_PubKeyLen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Passphrase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_StreamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewProp_Latency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLSRTOptions",
		sizeof(FOWLSRTOptions),
		alignof(FOWLSRTOptions),
		Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSRTOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSRTOptions.InnerSingleton, Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSRTOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock;
class UScriptStruct* FOWLAudioSampleBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLAudioSampleBlock, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLAudioSampleBlock"));
	}
	return Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLAudioSampleBlock>()
{
	return FOWLAudioSampleBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLAudioSampleBlock>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLAudioSampleBlock",
		sizeof(FOWLAudioSampleBlock),
		alignof(FOWLAudioSampleBlock),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLAudioSampleBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.InnerSingleton, Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLEncodedPacket;
class UScriptStruct* FOWLEncodedPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLEncodedPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLEncodedPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLEncodedPacket, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLEncodedPacket"));
	}
	return Z_Registration_Info_UScriptStruct_OWLEncodedPacket.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLEncodedPacket>()
{
	return FOWLEncodedPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLEncodedPacket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLEncodedPacket",
		sizeof(FOWLEncodedPacket),
		alignof(FOWLEncodedPacket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLEncodedPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLEncodedPacket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLEncodedPacket.InnerSingleton, Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLEncodedPacket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLFFmpegSettings;
class UScriptStruct* FOWLFFmpegSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLFFmpegSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLFFmpegSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLFFmpegSettings>()
{
	return FOWLFFmpegSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeAudio_MetaData[];
#endif
		static void NewProp_EncodeAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EncodeAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseUEHardwareEncoder_MetaData[];
#endif
		static void NewProp_UseUEHardwareEncoder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUEHardwareEncoder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoBitrate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VideoBitrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBitrate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AudioBitrate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioChannelLayout_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioChannelLayout_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioChannelLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QMin_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QMin;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Profile_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GOPSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GOPSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerIframe_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesPerIframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputCustomResolution_MetaData[];
#endif
		static void NewProp_bOutputCustomResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputCustomResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomOutputResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOutputResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLFFmpegSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio_MetaData[] = {
		{ "Category", "Encoder Settings" },
		{ "Comment", "/* When this is unticked, only video will be sent */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "When this is unticked, only video will be sent" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio_SetBit(void* Obj)
	{
		((FOWLFFmpegSettings*)Obj)->EncodeAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio = { "EncodeAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLFFmpegSettings), &Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder_MetaData[] = {
		{ "Category", "Encoder Settings" },
		{ "Comment", "/* When ticked, this uses the Unreal Engine Hardware encoder. This is more performant\n\x09 but may not work in all situations */" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "When ticked, this uses the Unreal Engine Hardware encoder. This is more performant\n       but may not work in all situations" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder_SetBit(void* Obj)
	{
		((FOWLFFmpegSettings*)Obj)->UseUEHardwareEncoder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder = { "UseUEHardwareEncoder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLFFmpegSettings), &Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_VideoBitrate_MetaData[] = {
		{ "Category", "Encoder Settings" },
		{ "ClampMax", "40000" },
		{ "ClampMin", "1000" },
		{ "Comment", "/* The output bitrate in kbs -- for 1080p, we recommend 5000kps */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The output bitrate in kbs -- for 1080p, we recommend 5000kps" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_VideoBitrate = { "VideoBitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, VideoBitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_VideoBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_VideoBitrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioBitrate_MetaData[] = {
		{ "Category", "Encoder Settings" },
		{ "ClampMax", "320" },
		{ "ClampMin", "80" },
		{ "Comment", "/* The audio bitrate in kbs -- we recommend either 128 or 160 */" },
		{ "EditCondition", "EncodeAudio" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The audio bitrate in kbs -- we recommend either 128 or 160" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioBitrate = { "AudioBitrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, AudioBitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioBitrate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout_MetaData[] = {
		{ "Category", "Encoder Settings" },
		{ "Comment", "/* The speaker layout of your audio stream */" },
		{ "EditCondition", "EncodeAudio" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The speaker layout of your audio stream" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout = { "AudioChannelLayout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, AudioChannelLayout), Z_Construct_UEnum_OWLMedia_EOWLAudioChannelLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout_MetaData)) }; // 986277226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMax_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "ClampMax", "50" },
		{ "ClampMin", "15" },
		{ "Comment", "/* The maximum  H264 Video 'Q' setting (quality) */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The maximum  H264 Video 'Q' setting (quality)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMax = { "QMax", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, QMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMin_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "ClampMax", "50" },
		{ "ClampMin", "15" },
		{ "Comment", "/* The minimum  H264 Video 'Q' setting (quality) */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The minimum  H264 Video 'Q' setting (quality)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMin = { "QMin", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, QMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMin_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "Comment", "/* The H264 Profile to use. N.B. The `Baseline` profile will be replaced with `Main` when not using the Hardware Encoders plugin */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The H264 Profile to use. N.B. The `Baseline` profile will be replaced with `Main` when not using the Hardware Encoders plugin" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, Profile), Z_Construct_UEnum_OWLMedia_EOWLEncoderProfile, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile_MetaData)) }; // 3118128600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_GOPSize_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "ClampMax", "30" },
		{ "ClampMin", "10" },
		{ "Comment", "/* The H264 GOP (Group of Pictures) Size -- describes use of I, P and B frames (Only Available when not using Hardware Encoder) */" },
		{ "EditCondition", "!UseUEHardwareEncoder" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The H264 GOP (Group of Pictures) Size -- describes use of I, P and B frames (Only Available when not using Hardware Encoder)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_GOPSize = { "GOPSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, GOPSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_GOPSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_GOPSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_FramesPerIframe_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "ClampMax", "240" },
		{ "ClampMin", "5" },
		{ "Comment", "/* Number of Iframes per frames encoded -- use to set the interval of Iframes in your encoded video (Only available when using Hardware Encoder plugin) */" },
		{ "EditCondition", "UseUEHardwareEncoder" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "Number of Iframes per frames encoded -- use to set the interval of Iframes in your encoded video (Only available when using Hardware Encoder plugin)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_FramesPerIframe = { "FramesPerIframe", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, FramesPerIframe), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_FramesPerIframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_FramesPerIframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "Comment", "/* In some circumstances you may wish to scale the input render target size up or down before encoding */" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "In some circumstances you may wish to scale the input render target size up or down before encoding" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution_SetBit(void* Obj)
	{
		((FOWLFFmpegSettings*)Obj)->bOutputCustomResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution = { "bOutputCustomResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLFFmpegSettings), &Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_CustomOutputResolution_MetaData[] = {
		{ "Category", "Advanced Encoder Settings" },
		{ "Comment", "/* The custom resolution to output to. If you source render target is smaller than this, an upscale will be performed, if larger a downscale */" },
		{ "EditCondition", "bOutputCustomResolution" },
		{ "ModuleRelativePath", "Public/OWLFFmpegOutput.h" },
		{ "ToolTip", "The custom resolution to output to. If you source render target is smaller than this, an upscale will be performed, if larger a downscale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_CustomOutputResolution = { "CustomOutputResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLFFmpegSettings, CustomOutputResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_CustomOutputResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_CustomOutputResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_EncodeAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_UseUEHardwareEncoder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_VideoBitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioBitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_AudioChannelLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_QMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_GOPSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_FramesPerIframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_bOutputCustomResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewProp_CustomOutputResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLFFmpegSettings",
		sizeof(FOWLFFmpegSettings),
		alignof(FOWLFFmpegSettings),
		Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLFFmpegSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::EnumInfo[] = {
		{ EOWLMediaOutputType_StaticEnum, TEXT("EOWLMediaOutputType"), &Z_Registration_Info_UEnum_EOWLMediaOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 915807175U) },
		{ EOWLDestinationFormat_StaticEnum, TEXT("EOWLDestinationFormat"), &Z_Registration_Info_UEnum_EOWLDestinationFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 302659846U) },
		{ EOWLSRTPubKeyLen_StaticEnum, TEXT("EOWLSRTPubKeyLen"), &Z_Registration_Info_UEnum_EOWLSRTPubKeyLen, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1179267474U) },
		{ EOWLAudioChannelLayout_StaticEnum, TEXT("EOWLAudioChannelLayout"), &Z_Registration_Info_UEnum_EOWLAudioChannelLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 986277226U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::ScriptStructInfo[] = {
		{ FOWLSRTOptions::StaticStruct, Z_Construct_UScriptStruct_FOWLSRTOptions_Statics::NewStructOps, TEXT("OWLSRTOptions"), &Z_Registration_Info_UScriptStruct_OWLSRTOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSRTOptions), 4116997552U) },
		{ FOWLAudioSampleBlock::StaticStruct, Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics::NewStructOps, TEXT("OWLAudioSampleBlock"), &Z_Registration_Info_UScriptStruct_OWLAudioSampleBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLAudioSampleBlock), 3146865514U) },
		{ FOWLEncodedPacket::StaticStruct, Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics::NewStructOps, TEXT("OWLEncodedPacket"), &Z_Registration_Info_UScriptStruct_OWLEncodedPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLEncodedPacket), 2322824884U) },
		{ FOWLFFmpegSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics::NewStructOps, TEXT("OWLFFmpegSettings"), &Z_Registration_Info_UScriptStruct_OWLFFmpegSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLFFmpegSettings), 1201575324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_338473172(TEXT("/Script/OWLMedia"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
