// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLScreenCapture/Public/OWLScreenCapturerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCapturerOptions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLSCREENCAPTURE_API UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType();
	OWLSCREENCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_OWLScreenCapture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLScreenCaptureType;
	static UEnum* EOWLScreenCaptureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, (UObject*)Z_Construct_UPackage__Script_OWLScreenCapture(), TEXT("EOWLScreenCaptureType"));
		}
		return Z_Registration_Info_UEnum_EOWLScreenCaptureType.OuterSingleton;
	}
	template<> OWLSCREENCAPTURE_API UEnum* StaticEnum<EOWLScreenCaptureType>()
	{
		return EOWLScreenCaptureType_StaticEnum();
	}
	struct Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators[] = {
		{ "EOWLScreenCaptureType::SCT_Monitor", (int64)EOWLScreenCaptureType::SCT_Monitor },
		{ "EOWLScreenCaptureType::SCT_Window", (int64)EOWLScreenCaptureType::SCT_Window },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
		{ "SCT_Monitor.DisplayName", "Monitor Capture" },
		{ "SCT_Monitor.Name", "EOWLScreenCaptureType::SCT_Monitor" },
		{ "SCT_Window.DisplayName", "Window Capture" },
		{ "SCT_Window.Name", "EOWLScreenCaptureType::SCT_Window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OWLScreenCapture,
		nullptr,
		"EOWLScreenCaptureType",
		"EOWLScreenCaptureType",
		Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType()
	{
		if (!Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton, Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOWLScreenCaptureType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions;
class UScriptStruct* FOWLScreenCaptureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions, (UObject*)Z_Construct_UPackage__Script_OWLScreenCapture(), TEXT("OWLScreenCaptureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.OuterSingleton;
}
template<> OWLSCREENCAPTURE_API UScriptStruct* StaticStruct<FOWLScreenCaptureOptions>()
{
	return FOWLScreenCaptureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenCaptureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCaptureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScreenCaptureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureCursor_MetaData[];
#endif
		static void NewProp_CaptureCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MonitorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WindowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideRenderTarget_MetaData[];
#endif
		static void NewProp_bHideRenderTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLScreenCaptureOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType = { "ScreenCaptureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLScreenCaptureOptions, ScreenCaptureType), Z_Construct_UEnum_OWLScreenCapture_EOWLScreenCaptureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_MetaData)) }; // 4213648923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLScreenCaptureOptions, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLScreenCaptureOptions*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_SetBit(void* Obj)
	{
		((FOWLScreenCaptureOptions*)Obj)->CaptureCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor = { "CaptureCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName = { "MonitorName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLScreenCaptureOptions, MonitorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLScreenCaptureOptions, WindowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "ModuleRelativePath", "Public/OWLScreenCapturerOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_SetBit(void* Obj)
	{
		((FOWLScreenCaptureOptions*)Obj)->bHideRenderTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget = { "bHideRenderTarget", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLScreenCaptureOptions), &Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_ScreenCaptureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_CaptureCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_MonitorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_WindowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewProp_bHideRenderTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLScreenCapture,
		nullptr,
		&NewStructOps,
		"OWLScreenCaptureOptions",
		sizeof(FOWLScreenCaptureOptions),
		alignof(FOWLScreenCaptureOptions),
		Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton, Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::EnumInfo[] = {
		{ EOWLScreenCaptureType_StaticEnum, TEXT("EOWLScreenCaptureType"), &Z_Registration_Info_UEnum_EOWLScreenCaptureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4213648923U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::ScriptStructInfo[] = {
		{ FOWLScreenCaptureOptions::StaticStruct, Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics::NewStructOps, TEXT("OWLScreenCaptureOptions"), &Z_Registration_Info_UScriptStruct_OWLScreenCaptureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLScreenCaptureOptions), 2313322471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_1374964490(TEXT("/Script/OWLScreenCapture"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
