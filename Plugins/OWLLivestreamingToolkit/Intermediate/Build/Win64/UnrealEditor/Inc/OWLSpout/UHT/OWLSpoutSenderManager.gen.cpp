// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpout/Public/OWLSpoutSenderManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutSenderManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister();
	OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface();
	UPackage* Z_Construct_UPackage__Script_OWLSpout();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface;
class UScriptStruct* FOWLSpoutSenderInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, (UObject*)Z_Construct_UPackage__Script_OWLSpout(), TEXT("OWLSpoutSenderInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton;
}
template<> OWLSPOUT_API UScriptStruct* StaticStruct<FOWLSpoutSenderInterface>()
{
	return FOWLSpoutSenderInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[];
#endif
		static void NewProp_bFixGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutSenderInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLSpoutSenderInterface*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in editor targets" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in game (standalone/packaged) targets" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, StandaloneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit(void* Obj)
	{
		((FOWLSpoutSenderInterface*)Obj)->bFixGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget = { "SourceRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutSenderInterface, SourceRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
		nullptr,
		&NewStructOps,
		"OWLSpoutSenderInterface",
		sizeof(FOWLSpoutSenderInterface),
		alignof(FOWLSpoutSenderInterface),
		Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton;
	}
	void AOWLSpoutSenderManager::StaticRegisterNativesAOWLSpoutSenderManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLSpoutSenderManager);
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLSpoutSenderManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpoutSenders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpoutSenders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpoutSenders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLSpoutSenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner = { "SpoutSenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(nullptr, 0) }; // 144541715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders = { "SpoutSenders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLSpoutSenderManager, SpoutSenders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_MetaData)) }; // 144541715
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLSpoutSenderManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutSenderManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams = {
		&AOWLSpoutSenderManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLSpoutSenderManager()
	{
		if (!Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton, Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton;
	}
	template<> OWLSPOUT_API UClass* StaticClass<AOWLSpoutSenderManager>()
	{
		return AOWLSpoutSenderManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutSenderManager);
	AOWLSpoutSenderManager::~AOWLSpoutSenderManager() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo[] = {
		{ FOWLSpoutSenderInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps, TEXT("OWLSpoutSenderInterface"), &Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSpoutSenderInterface), 144541715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLSpoutSenderManager, AOWLSpoutSenderManager::StaticClass, TEXT("AOWLSpoutSenderManager"), &Z_Registration_Info_UClass_AOWLSpoutSenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLSpoutSenderManager), 792199226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_1603623456(TEXT("/Script/OWLSpout"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
