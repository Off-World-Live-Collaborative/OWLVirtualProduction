// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLNDIInputPass.h"
#include "OWLNDI/Public/OWLNDIReceiverManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIInputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIInputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLNDIInputPass_NoRegister();
	OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	void UOWLNDIInputPass::StaticRegisterNativesUOWLNDIInputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLNDIInputPass);
	UClass* Z_Construct_UClass_UOWLNDIInputPass_NoRegister()
	{
		return UOWLNDIInputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLNDIInputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Receiver_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Receiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLNDIInputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIInputPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLNDIInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIInputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver_MetaData[] = {
		{ "Category", "OWL" },
		{ "ModuleRelativePath", "Public/OWLNDIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLNDIInputPass, Receiver), Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, METADATA_PARAMS(Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver_MetaData)) }; // 3444417469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLNDIInputPass_Statics::NewProp_Receiver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLNDIInputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDIInputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDIInputPass_Statics::ClassParams = {
		&UOWLNDIInputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLNDIInputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDIInputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLNDIInputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton, Z_Construct_UClass_UOWLNDIInputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLNDIInputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLNDIInputPass>()
	{
		return UOWLNDIInputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLNDIInputPass);
	UOWLNDIInputPass::~UOWLNDIInputPass() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDIInputPass, UOWLNDIInputPass::StaticClass, TEXT("UOWLNDIInputPass"), &Z_Registration_Info_UClass_UOWLNDIInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDIInputPass), 1103177274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h_1933174057(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLNDIInputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
