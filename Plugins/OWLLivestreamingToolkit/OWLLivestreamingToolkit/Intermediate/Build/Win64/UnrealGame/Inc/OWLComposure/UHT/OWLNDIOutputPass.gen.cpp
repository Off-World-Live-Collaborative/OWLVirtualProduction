// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLNDIOutputPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIOutputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIOutputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIOutputPass_NoRegister();
	OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLNDIOutputPass::StaticRegisterNativesUOWLNDIOutputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLNDIOutputPass);
	UClass* Z_Construct_UClass_UOWLNDIOutputPass_NoRegister()
	{
		return UOWLNDIOutputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLNDIOutputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VideoConversionFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoConversionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VideoConversionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[];
#endif
		static void NewProp_bCaptureAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLNDIOutputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIOutputPass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLNDIOutputPass.h" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLNDIOutputPass, SenderName), METADATA_PARAMS(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat = { "VideoConversionFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLNDIOutputPass, VideoConversionFormat), Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat, METADATA_PARAMS(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_MetaData)) }; // 1521069760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif
	void Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
	{
		((UOWLNDIOutputPass*)Obj)->bCaptureAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLNDIOutputPass), &Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "NDI" },
		{ "ModuleRelativePath", "Public/OWLNDIOutputPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLNDIOutputPass, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_SenderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_VideoConversionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_bCaptureAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIOutputPass_Statics::NewProp_Submix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLNDIOutputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIOutputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIOutputPass_Statics::ClassParams = {
		&UOWLNDIOutputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLNDIOutputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIOutputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLNDIOutputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton, Z_Construct_UClass_UOWLNDIOutputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLNDIOutputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLNDIOutputPass>()
	{
		return UOWLNDIOutputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLNDIOutputPass);
	UOWLNDIOutputPass::~UOWLNDIOutputPass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIOutputPass, UOWLNDIOutputPass::StaticClass, TEXT("UOWLNDIOutputPass"), &Z_Registration_Info_UClass_UOWLNDIOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIOutputPass), 2417014939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h_2744698341(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIOutputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
