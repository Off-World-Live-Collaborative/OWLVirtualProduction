// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LivestreamingToolkit/Private/Features/ViewportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings();
	LIVESTREAMINGTOOLKIT_API UClass* Z_Construct_UClass_UViewportSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LivestreamingToolkit();
// End Cross Module References
	DEFINE_FUNCTION(UViewportSettings::execOnPostPIEStarted)
	{
		P_GET_UBOOL(Z_Param_isSimulating);
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportSettings::OnPostPIEStarted(Z_Param_isSimulating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportSettings::execBindEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UViewportSettings::BindEvents();
		P_NATIVE_END;
	}
	void UViewportSettings::StaticRegisterNativesUViewportSettings()
	{
		UClass* Class = UViewportSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindEvents", &UViewportSettings::execBindEvents },
			{ "OnPostPIEStarted", &UViewportSettings::execOnPostPIEStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportSettings_BindEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "BindEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportSettings_BindEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportSettings_BindEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics
	{
		struct ViewportSettings_eventOnPostPIEStarted_Parms
		{
			bool isSimulating;
		};
		static void NewProp_isSimulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSimulating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit(void* Obj)
	{
		((ViewportSettings_eventOnPostPIEStarted_Parms*)Obj)->isSimulating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating = { "isSimulating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportSettings_eventOnPostPIEStarted_Parms), &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::NewProp_isSimulating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportSettings, nullptr, "OnPostPIEStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::ViewportSettings_eventOnPostPIEStarted_Parms), Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportSettings);
	UClass* Z_Construct_UClass_UViewportSettings_NoRegister()
	{
		return UViewportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UViewportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LivestreamingToolkit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportSettings_BindEvents, "BindEvents" }, // 3007120300
		{ &Z_Construct_UFunction_UViewportSettings_OnPostPIEStarted, "OnPostPIEStarted" }, // 3137796106
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Features/ViewportSettings.h" },
		{ "ModuleRelativePath", "Private/Features/ViewportSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportSettings_Statics::ClassParams = {
		&UViewportSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportSettings()
	{
		if (!Z_Registration_Info_UClass_UViewportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportSettings.OuterSingleton, Z_Construct_UClass_UViewportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportSettings.OuterSingleton;
	}
	template<> LIVESTREAMINGTOOLKIT_API UClass* StaticClass<UViewportSettings>()
	{
		return UViewportSettings::StaticClass();
	}
	UViewportSettings::UViewportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportSettings);
	UViewportSettings::~UViewportSettings() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportSettings, UViewportSettings::StaticClass, TEXT("UViewportSettings"), &Z_Registration_Info_UClass_UViewportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportSettings), 3262738047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_1241758791(TEXT("/Script/LivestreamingToolkit"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_LivestreamingToolkit_Private_Features_ViewportSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
