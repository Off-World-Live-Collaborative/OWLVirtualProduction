// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLCamera/Public/OWLCineCamCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCineCamCapture() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	OWLCAMERA_API UClass* Z_Construct_UClass_AOWLCineCamCapture();
	OWLCAMERA_API UClass* Z_Construct_UClass_AOWLCineCamCapture_NoRegister();
	OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLCamera();
// End Cross Module References
	void AOWLCineCamCapture::StaticRegisterNativesAOWLCineCamCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLCineCamCapture);
	UClass* Z_Construct_UClass_AOWLCineCamCapture_NoRegister()
	{
		return AOWLCineCamCapture::StaticClass();
	}
	struct Z_Construct_UClass_AOWLCineCamCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLCineCamCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "OWLCineCamCapture.h" },
		{ "ModuleRelativePath", "Public/OWLCineCamCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OffWorldLive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCineCamCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLCineCamCapture, CaptureComponent), Z_Construct_UClass_UOWLCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCineCamCapture_Statics::NewProp_CaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLCineCamCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCineCamCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLCineCamCapture_Statics::ClassParams = {
		&AOWLCineCamCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCineCamCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLCineCamCapture()
	{
		if (!Z_Registration_Info_UClass_AOWLCineCamCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLCineCamCapture.OuterSingleton, Z_Construct_UClass_AOWLCineCamCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLCineCamCapture.OuterSingleton;
	}
	template<> OWLCAMERA_API UClass* StaticClass<AOWLCineCamCapture>()
	{
		return AOWLCineCamCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCineCamCapture);
	AOWLCineCamCapture::~AOWLCineCamCapture() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCineCamCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCineCamCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLCineCamCapture, AOWLCineCamCapture::StaticClass, TEXT("AOWLCineCamCapture"), &Z_Registration_Info_UClass_AOWLCineCamCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLCineCamCapture), 1056895976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCineCamCapture_h_917039001(TEXT("/Script/OWLCamera"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCineCamCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCineCamCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
