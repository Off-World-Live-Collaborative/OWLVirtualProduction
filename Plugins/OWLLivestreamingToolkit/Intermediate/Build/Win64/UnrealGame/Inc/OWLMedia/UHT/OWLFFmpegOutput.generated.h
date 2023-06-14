// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLFFmpegOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMEDIA_OWLFFmpegOutput_generated_h
#error "OWLFFmpegOutput.generated.h already included, missing '#pragma once' in OWLFFmpegOutput.h"
#endif
#define OWLMEDIA_OWLFFmpegOutput_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLSRTOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLSRTOptions>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLAudioSampleBlock_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLAudioSampleBlock>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLEncodedPacket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLEncodedPacket>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLFFmpegSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLFFmpegSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLFFmpegOutput_h


#define FOREACH_ENUM_EOWLMEDIAOUTPUTTYPE(op) \
	op(EOWLMediaOutputType::T_SRT) \
	op(EOWLMediaOutputType::T_RTMP) \
	op(EOWLMediaOutputType::T_FILEOUTPUT) \
	op(EOWLMediaOutputType::T_RTSP) 

enum class EOWLMediaOutputType : uint8;
template<> struct TIsUEnumClass<EOWLMediaOutputType> { enum { Value = true }; };
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLMediaOutputType>();

#define FOREACH_ENUM_EOWLDESTINATIONFORMAT(op) \
	op(EOWLDestinationFormat::F_MP4) \
	op(EOWLDestinationFormat::F_MPEGTS) \
	op(EOWLDestinationFormat::F_FLV) \
	op(EOWLDestinationFormat::F_RTSP) \
	op(EOWLDestinationFormat::F_MKV) \
	op(EOWLDestinationFormat::F_AVI) \
	op(EOWLDestinationFormat::F_MOV) 

enum class EOWLDestinationFormat : uint8;
template<> struct TIsUEnumClass<EOWLDestinationFormat> { enum { Value = true }; };
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLDestinationFormat>();

#define FOREACH_ENUM_EOWLSRTPUBKEYLEN(op) \
	op(EOWLSRTPubKeyLen::SRT_PKL_16) \
	op(EOWLSRTPubKeyLen::SRT_PKL_24) \
	op(EOWLSRTPubKeyLen::SRT_PKL_32) \
	op(EOWLSRTPubKeyLen::SRT_PKL_UNDECIDED) 

enum class EOWLSRTPubKeyLen : uint8;
template<> struct TIsUEnumClass<EOWLSRTPubKeyLen> { enum { Value = true }; };
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLSRTPubKeyLen>();

#define FOREACH_ENUM_EOWLAUDIOCHANNELLAYOUT(op) \
	op(EOWLAudioChannelLayout::ACL_MONO) \
	op(EOWLAudioChannelLayout::ACL_STEREO) \
	op(EOWLAudioChannelLayout::ACL_2POINT1) \
	op(EOWLAudioChannelLayout::ACL_2_1) \
	op(EOWLAudioChannelLayout::ACL_SURROUND) \
	op(EOWLAudioChannelLayout::ACL_3POINT1) \
	op(EOWLAudioChannelLayout::ACL_4POINT0) \
	op(EOWLAudioChannelLayout::ACL_4POINT1) \
	op(EOWLAudioChannelLayout::ACL_2_2) \
	op(EOWLAudioChannelLayout::ACL_QUAD) \
	op(EOWLAudioChannelLayout::ACL_5POINT0) \
	op(EOWLAudioChannelLayout::ACL_5POINT1) \
	op(EOWLAudioChannelLayout::ACL_5POINT0_BACK) \
	op(EOWLAudioChannelLayout::ACL_5POINT1_BACK) \
	op(EOWLAudioChannelLayout::ACL_6POINT0) \
	op(EOWLAudioChannelLayout::ACL_6POINT0_FRONT) \
	op(EOWLAudioChannelLayout::ACL_HEXAGONAL) \
	op(EOWLAudioChannelLayout::ACL_6POINT1) \
	op(EOWLAudioChannelLayout::ACL_6POINT1_BACK) \
	op(EOWLAudioChannelLayout::ACL_6POINT1_FRONT) \
	op(EOWLAudioChannelLayout::ACL_7POINT0) \
	op(EOWLAudioChannelLayout::ACL_7POINT0_FRONT) \
	op(EOWLAudioChannelLayout::ACL_7POINT1) \
	op(EOWLAudioChannelLayout::ACL_7POINT1_WIDE) \
	op(EOWLAudioChannelLayout::ACL_7POINT1_WIDE_BACK) \
	op(EOWLAudioChannelLayout::ACL_OCTAGONAL) \
	op(EOWLAudioChannelLayout::ACL_HEXADECAGONAL) \
	op(EOWLAudioChannelLayout::ACL_STEREO_DOWNMIX) \
	op(EOWLAudioChannelLayout::ACL_22POINT2) 

enum class EOWLAudioChannelLayout : uint8;
template<> struct TIsUEnumClass<EOWLAudioChannelLayout> { enum { Value = true }; };
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLAudioChannelLayout>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
