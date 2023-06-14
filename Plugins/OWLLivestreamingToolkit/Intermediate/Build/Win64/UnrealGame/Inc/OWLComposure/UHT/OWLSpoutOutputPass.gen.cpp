// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLSpoutOutputPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutOutputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutOutputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutOutputPass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLSpoutOutputPass::StaticRegisterNativesUOWLSpoutOutputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLSpoutOutputPass);
	UClass* Z_Construct_UClass_UOWLSpoutOutputPass_NoRegister()
	{
		return UOWLSpoutOutputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLSpoutOutputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[];
#endif
		static void NewProp_bFixGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLSpoutOutputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSpoutOutputPass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OWLSpoutOutputPass.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLSpoutOutputPass, SenderName), METADATA_PARAMS(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/* Untick this box if gamma SHOULD NOT be corrected to match the viewport gamma -- ie if you have a data /depth pass  */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/OWLSpoutOutputPass.h" },
		{ "ToolTip", "Untick this box if gamma SHOULD NOT be corrected to match the viewport gamma -- ie if you have a data /depth pass" },
	};
#endif
	void Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_SetBit(void* Obj)
	{
		((UOWLSpoutOutputPass*)Obj)->bFixGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOWLSpoutOutputPass), &Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_SenderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutOutputPass_Statics::NewProp_bFixGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLSpoutOutputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutOutputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutOutputPass_Statics::ClassParams = {
		&UOWLSpoutOutputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutOutputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLSpoutOutputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton, Z_Construct_UClass_UOWLSpoutOutputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLSpoutOutputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLSpoutOutputPass>()
	{
		return UOWLSpoutOutputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSpoutOutputPass);
	UOWLSpoutOutputPass::~UOWLSpoutOutputPass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutOutputPass, UOWLSpoutOutputPass::StaticClass, TEXT("UOWLSpoutOutputPass"), &Z_Registration_Info_UClass_UOWLSpoutOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutOutputPass), 3806588777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h_3928954707(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutOutputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
