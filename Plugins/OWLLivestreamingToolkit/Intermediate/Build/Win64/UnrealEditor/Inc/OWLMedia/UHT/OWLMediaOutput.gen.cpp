// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLMediaOutput.h"
#include "OWLMedia/Public/OWLFFmpegOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput();
	OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat();
	OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType();
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature();
	OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions();
	OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings();
	UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStart__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart)
{
	OnMediaOutputStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics
	{
		struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
		{
			bool bGraceful;
		};
		static void NewProp_bGraceful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGraceful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit(void* Obj)
	{
		((_Script_OWLMedia_eventOnMediaOutputStop_Parms*)Obj)->bGraceful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful = { "bGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OWLMedia_eventOnMediaOutputStop_Parms), &Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStop__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful)
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
	_Script_OWLMedia_eventOnMediaOutputStop_Parms Parms;
	Parms.bGraceful=bGraceful ? true : false;
	OnMediaOutputStop.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings;
class UScriptStruct* FOWLSaveToFileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSaveToFileSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSaveToFileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSaveToFileSettings>()
{
	return FOWLSaveToFileSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoOutputDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoOutputFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSaveToFileSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The container format in which the media should be saved */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The container format in which the media should be saved" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat = { "DestinationFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSaveToFileSettings, DestinationFormat), Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_MetaData)) }; // 302659846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Destination directory for saving video */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Destination directory for saving video" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir = { "VideoOutputDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Output file name (without extension) */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Output file name (without extension)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile = { "VideoOutputFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLSaveToFileSettings",
		sizeof(FOWLSaveToFileSettings),
		alignof(FOWLSaveToFileSettings),
		Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTMPSettings;
class UScriptStruct* FOWLRTMPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTMPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTMPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTMPSettings>()
{
	return FOWLRTMPSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTMPSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLRTMPSettings, StreamURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination Key */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The Stream destination Key" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLRTMPSettings, StreamKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLRTMPSettings",
		sizeof(FOWLRTMPSettings),
		alignof(FOWLRTMPSettings),
		Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTSPSettings;
class UScriptStruct* FOWLRTSPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTSPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTSPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTSPSettings>()
{
	return FOWLRTSPSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTSPSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The RTSP Server ie rtsp://<domain>:port */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The RTSP Server ie rtsp://<domain>:port" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLRTSPSettings, StreamURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLRTSPSettings",
		sizeof(FOWLRTSPSettings),
		alignof(FOWLRTSPSettings),
		Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSRTSettings;
class UScriptStruct* FOWLSRTSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSRTSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSRTSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSRTSettings>()
{
	return FOWLSRTSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSRTSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTSettings, StreamURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSRTSettings, Options), Z_Construct_UScriptStruct_FOWLSRTOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options_MetaData)) }; // 4116997552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
		nullptr,
		&NewStructOps,
		"OWLSRTSettings",
		sizeof(FOWLSRTSettings),
		alignof(FOWLSRTSettings),
		Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execStartWhenAuthReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWhenAuthReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOWLMediaOutput::execOnAuthChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAuthChanged();
		P_NATIVE_END;
	}
	void AOWLMediaOutput::StaticRegisterNativesAOWLMediaOutput()
	{
		UClass* Class = AOWLMediaOutput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAuthChanged", &AOWLMediaOutput::execOnAuthChanged },
			{ "Start", &AOWLMediaOutput::execStart },
			{ "StartWhenAuthReady", &AOWLMediaOutput::execStartWhenAuthReady },
			{ "Stop", &AOWLMediaOutput::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "OnAuthChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_Start_Statics
	{
		struct OWLMediaOutput_eventStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWLMediaOutput_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OWLMediaOutput_eventStart_Parms), &Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "Comment", "/* Start recording / streaming\n\x09 * @return bool has recording been successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Start recording / streaming\n       * @return bool has recording been successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::OWLMediaOutput_eventStart_Parms), Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "StartWhenAuthReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "Comment", "/* Stop the current recording / stream */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Stop the current recording / stream" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLMediaOutput_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLMediaOutput);
	UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister()
	{
		return AOWLMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_AOWLMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveToFileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveToFileSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTMPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTMPSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTSPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTSPSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SRTSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SRTSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAPIKey_MetaData[];
#endif
		static void NewProp_bOverrideAPIKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAPIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideAPIOptions_MetaData[];
#endif
		static void NewProp_bHideAPIOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAPIOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncoderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EncoderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasStarted_MetaData[];
#endif
		static void NewProp_HasStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_DurationMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMeteredPricing_MetaData[];
#endif
		static void NewProp_IsMeteredPricing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeteredPricing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutesRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinutesRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingMinutesRemaining_MetaData[];
#endif
		static void NewProp_LoadingMinutesRemaining_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadingMinutesRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLMediaOutput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLMediaOutput_OnAuthChanged, "OnAuthChanged" }, // 269876075
		{ &Z_Construct_UFunction_AOWLMediaOutput_Start, "Start" }, // 3176851834
		{ &Z_Construct_UFunction_AOWLMediaOutput_StartWhenAuthReady, "StartWhenAuthReady" }, // 2391243290
		{ &Z_Construct_UFunction_AOWLMediaOutput_Stop, "Stop" }, // 193134206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLMediaOutput.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Media Output Type */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Media Output Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, OutputType), Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType_MetaData)) }; // 915807175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SaveToFileSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_FILEOUTPUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SaveToFileSettings = { "SaveToFileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, SaveToFileSettings), Z_Construct_UScriptStruct_FOWLSaveToFileSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SaveToFileSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SaveToFileSettings_MetaData)) }; // 1151930935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTMPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTMP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTMPSettings = { "RTMPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, RTMPSettings), Z_Construct_UScriptStruct_FOWLRTMPSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTMPSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTMPSettings_MetaData)) }; // 1013268214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTSPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTSP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTSPSettings = { "RTSPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, RTSPSettings), Z_Construct_UScriptStruct_FOWLRTSPSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTSPSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTSPSettings_MetaData)) }; // 1381896110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SRTSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_SRT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SRTSettings = { "SRTSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, SRTSettings), Z_Construct_UScriptStruct_FOWLSRTSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SRTSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SRTSettings_MetaData)) }; // 2754173353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_APIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "Comment", "/* Optional API Key */" },
		{ "EditCondition", "bOverrideAPIKey && !bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Optional API Key" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, APIKey), METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_APIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_APIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "!bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey_SetBit(void* Obj)
	{
		((AOWLMediaOutput*)Obj)->bOverrideAPIKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey = { "bOverrideAPIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLMediaOutput), &Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions_SetBit(void* Obj)
	{
		((AOWLMediaOutput*)Obj)->bHideAPIOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions = { "bHideAPIOptions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLMediaOutput), &Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_InputRenderTarget_MetaData[] = {
		{ "Category", "Input Settings" },
		{ "Comment", "/* The render target to record from.\n\x09 * Please ensure that the dimensions of this render target are divisible by 2\n\x09 * otherwise the encoder may not be able render it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "The render target to record from.\n       * Please ensure that the dimensions of this render target are divisible by 2\n       * otherwise the encoder may not be able render it." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_InputRenderTarget = { "InputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, InputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_InputRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_InputRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_EncoderSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_EncoderSettings = { "EncoderSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, EncoderSettings), Z_Construct_UScriptStruct_FOWLFFmpegSettings, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_EncoderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_EncoderSettings_MetaData)) }; // 1201575324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "// this will be marked hidden by details customisation\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "this will be marked hidden by details customisation" },
	};
#endif
	void Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted_SetBit(void* Obj)
	{
		((AOWLMediaOutput*)Obj)->HasStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted = { "HasStarted", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLMediaOutput), &Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_DurationMs_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, DurationMs), METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_DurationMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_DurationMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing_SetBit(void* Obj)
	{
		((AOWLMediaOutput*)Obj)->IsMeteredPricing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing = { "IsMeteredPricing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLMediaOutput), &Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MinutesRemaining = { "MinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, MinutesRemaining), METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MinutesRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MinutesRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	void Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining_SetBit(void* Obj)
	{
		((AOWLMediaOutput*)Obj)->LoadingMinutesRemaining = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining = { "LoadingMinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLMediaOutput), &Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStop_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Triggered whenever the stream stopped. Graceful is false when the stream is not stopped by the user" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, OnStop), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStop_MetaData)) }; // 3550015988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStart_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Triggered whenever the stream has started. When starting on BeginPlay this may happen after the start function has returned" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, OnStart), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStart_MetaData)) }; // 3792492496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IntermediateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLMediaOutput, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IntermediateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IntermediateTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SaveToFileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTMPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_RTSPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_SRTSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_APIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bOverrideAPIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_bHideAPIOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_InputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_EncoderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_HasStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_DurationMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IsMeteredPricing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MinutesRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_LoadingMinutesRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_OnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_IntermediateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams = {
		&AOWLMediaOutput::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLMediaOutput()
	{
		if (!Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton, Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton;
	}
	template<> OWLMEDIA_API UClass* StaticClass<AOWLMediaOutput>()
	{
		return AOWLMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLMediaOutput);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ScriptStructInfo[] = {
		{ FOWLSaveToFileSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps, TEXT("OWLSaveToFileSettings"), &Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSaveToFileSettings), 1151930935U) },
		{ FOWLRTMPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps, TEXT("OWLRTMPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTMPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTMPSettings), 1013268214U) },
		{ FOWLRTSPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps, TEXT("OWLRTSPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTSPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTSPSettings), 1381896110U) },
		{ FOWLSRTSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps, TEXT("OWLSRTSettings"), &Z_Registration_Info_UScriptStruct_OWLSRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSRTSettings), 2754173353U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLMediaOutput, AOWLMediaOutput::StaticClass, TEXT("AOWLMediaOutput"), &Z_Registration_Info_UClass_AOWLMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLMediaOutput), 3255563608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_1322347475(TEXT("/Script/OWLMedia"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
