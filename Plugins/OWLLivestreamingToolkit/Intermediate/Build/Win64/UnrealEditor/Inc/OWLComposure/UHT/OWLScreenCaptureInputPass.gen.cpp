// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLScreenCaptureInputPass.h"
#include "OWLScreenCapture/Public/OWLScreenCapturerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCaptureInputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLScreenCaptureInputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLScreenCaptureInputPass_NoRegister();
	OWLSCREENCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLScreenCaptureInputPass::StaticRegisterNativesUOWLScreenCaptureInputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLScreenCaptureInputPass);
	UClass* Z_Construct_UClass_UOWLScreenCaptureInputPass_NoRegister()
	{
		return UOWLScreenCaptureInputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLScreenCaptureInputPass.h" },
		{ "ModuleRelativePath", "Public/OWLScreenCaptureInputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::NewProp_Options_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWLScreenCapture" },
		{ "DisplayName", "Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLScreenCaptureInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLScreenCaptureInputPass, Options), Z_Construct_UScriptStruct_FOWLScreenCaptureOptions, METADATA_PARAMS(Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::NewProp_Options_MetaData)) }; // 2313322471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLScreenCaptureInputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::ClassParams = {
		&UOWLScreenCaptureInputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLScreenCaptureInputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLScreenCaptureInputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLScreenCaptureInputPass.OuterSingleton, Z_Construct_UClass_UOWLScreenCaptureInputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLScreenCaptureInputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLScreenCaptureInputPass>()
	{
		return UOWLScreenCaptureInputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLScreenCaptureInputPass);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLScreenCaptureInputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLScreenCaptureInputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLScreenCaptureInputPass, UOWLScreenCaptureInputPass::StaticClass, TEXT("UOWLScreenCaptureInputPass"), &Z_Registration_Info_UClass_UOWLScreenCaptureInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLScreenCaptureInputPass), 1552213208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLScreenCaptureInputPass_h_770797431(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLScreenCaptureInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLScreenCaptureInputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
