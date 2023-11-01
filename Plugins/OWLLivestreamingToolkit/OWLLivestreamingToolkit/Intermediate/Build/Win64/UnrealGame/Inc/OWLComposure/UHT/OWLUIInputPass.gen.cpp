// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLUIInputPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLUIInputPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass();
	OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References
	DEFINE_FUNCTION(UOWLUIInputPass::execOnWorldDestroy)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldDestroy(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOWLUIInputPass::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	void UOWLUIInputPass::StaticRegisterNativesUOWLUIInputPass()
	{
		UClass* Class = UOWLUIInputPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWidget", &UOWLUIInputPass::execGetWidget },
			{ "OnWorldDestroy", &UOWLUIInputPass::execOnWorldDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics
	{
		struct OWLUIInputPass_eventGetWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLUIInputPass_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLUIInputPass, nullptr, "GetWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::OWLUIInputPass_eventGetWidget_Parms), Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLUIInputPass_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics
	{
		struct OWLUIInputPass_eventOnWorldDestroy_Parms
		{
			UWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLUIInputPass_eventOnWorldDestroy_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLUIInputPass, nullptr, "OnWorldDestroy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::OWLUIInputPass_eventOnWorldDestroy_Parms), Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLUIInputPass);
	UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister()
	{
		return UOWLUIInputPass::StaticClass();
	}
	struct Z_Construct_UClass_UOWLUIInputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLUIInputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWLUIInputPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLUIInputPass_GetWidget, "GetWidget" }, // 2716320712
		{ &Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy, "OnWorldDestroy" }, // 219957003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLUIInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, RenderResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender = { "WidgetToRender", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOWLUIInputPass, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLUIInputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLUIInputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams = {
		&UOWLUIInputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLUIInputPass()
	{
		if (!Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton, Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton;
	}
	template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLUIInputPass>()
	{
		return UOWLUIInputPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLUIInputPass);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLUIInputPass, UOWLUIInputPass::StaticClass, TEXT("UOWLUIInputPass"), &Z_Registration_Info_UClass_UOWLUIInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLUIInputPass), 254970946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_1120487807(TEXT("/Script/OWLComposure"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
