// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLCamera/Public/OWLViewportCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLViewportCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLCAMERA_API UClass* Z_Construct_UClass_AOWLViewportCapture();
	OWLCAMERA_API UClass* Z_Construct_UClass_AOWLViewportCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLCamera();
// End Cross Module References
	void AOWLViewportCapture::StaticRegisterNativesAOWLViewportCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLViewportCapture);
	UClass* Z_Construct_UClass_AOWLViewportCapture_NoRegister()
	{
		return AOWLViewportCapture::StaticClass();
	}
	struct Z_Construct_UClass_AOWLViewportCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseRendering_MetaData[];
#endif
		static void NewProp_PauseRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureWidgets_MetaData[];
#endif
		static void NewProp_bCaptureWidgets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLViewportCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLViewportCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "OWLViewportCapture.h" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLViewportCapture, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif
	void Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_SetBit(void* Obj)
	{
		((AOWLViewportCapture*)Obj)->PauseRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering = { "PauseRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLViewportCapture), &Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/* Capture widgets (Standalone / Packaged / PIE only -- will do nothing in editor) */" },
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
		{ "ToolTip", "Capture widgets (Standalone / Packaged / PIE only -- will do nothing in editor)" },
	};
#endif
	void Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_SetBit(void* Obj)
	{
		((AOWLViewportCapture*)Obj)->bCaptureWidgets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets = { "bCaptureWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AOWLViewportCapture), &Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLViewportCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLViewportCapture, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_PauseRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_bCaptureWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLViewportCapture_Statics::NewProp_IntermediateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLViewportCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLViewportCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLViewportCapture_Statics::ClassParams = {
		&AOWLViewportCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLViewportCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLViewportCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLViewportCapture()
	{
		if (!Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton, Z_Construct_UClass_AOWLViewportCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLViewportCapture.OuterSingleton;
	}
	template<> OWLCAMERA_API UClass* StaticClass<AOWLViewportCapture>()
	{
		return AOWLViewportCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLViewportCapture);
	AOWLViewportCapture::~AOWLViewportCapture() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLViewportCapture, AOWLViewportCapture::StaticClass, TEXT("AOWLViewportCapture"), &Z_Registration_Info_UClass_AOWLViewportCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLViewportCapture), 3241818838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_3522422604(TEXT("/Script/OWLCamera"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLViewportCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
