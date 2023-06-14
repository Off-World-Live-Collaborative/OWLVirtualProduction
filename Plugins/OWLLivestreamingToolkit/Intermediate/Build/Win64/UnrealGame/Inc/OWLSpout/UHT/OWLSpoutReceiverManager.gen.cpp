// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpout/Public/OWLSpoutReceiverManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutReceiverManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager();
	OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister();
	OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface();
	UPackage* Z_Construct_UPackage__Script_OWLSpout();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface;
class UScriptStruct* FOWLSpoutReceiverInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, (UObject*)Z_Construct_UPackage__Script_OWLSpout(), TEXT("OWLSpoutReceiverInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton;
}
template<> OWLSPOUT_API UScriptStruct* StaticStruct<FOWLSpoutReceiverInterface>()
{
	return FOWLSpoutReceiverInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFirstAvailableSender_MetaData[];
#endif
		static void NewProp_UseFirstAvailableSender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFirstAvailableSender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[];
#endif
		static void NewProp_bFixGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnderExternalControl_MetaData[];
#endif
		static void NewProp_bUnderExternalControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnderExternalControl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutReceiverInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->UseFirstAvailableSender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender = { "UseFirstAvailableSender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "Comment", "/* Name of the sender we are receiving from */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Name of the sender we are receiving from" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutReceiverInterface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOWLSpoutReceiverInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->bFixGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit(void* Obj)
	{
		((FOWLSpoutReceiverInterface*)Obj)->bUnderExternalControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl = { "bUnderExternalControl", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
		nullptr,
		&NewStructOps,
		"OWLSpoutReceiverInterface",
		sizeof(FOWLSpoutReceiverInterface),
		alignof(FOWLSpoutReceiverInterface),
		Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton;
	}
	DEFINE_FUNCTION(AOWLSpoutReceiverManager::execGetAvailableSenderNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSenderNames();
		P_NATIVE_END;
	}
	void AOWLSpoutReceiverManager::StaticRegisterNativesAOWLSpoutReceiverManager()
	{
		UClass* Class = AOWLSpoutReceiverManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableSenderNames", &AOWLSpoutReceiverManager::execGetAvailableSenderNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics
	{
		struct OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Receiver" },
		{ "Comment", "/** Returns a list of spout sender names that are available at this moment in time. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Returns a list of spout sender names that are available at this moment in time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutReceiverManager, nullptr, "GetAvailableSenderNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms), Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLSpoutReceiverManager);
	UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister()
	{
		return AOWLSpoutReceiverManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWLSpoutReceiverManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpoutReceivers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpoutReceivers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpoutReceivers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames, "GetAvailableSenderNames" }, // 3171366927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWLSpoutReceiverManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, METADATA_PARAMS(nullptr, 0) }; // 297295365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData[] = {
		{ "Category", "Off World Live Spout Receiver Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOWLSpoutReceiverManager, SpoutReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_MetaData)) }; // 297295365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutReceiverManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams = {
		&AOWLSpoutReceiverManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWLSpoutReceiverManager()
	{
		if (!Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton, Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton;
	}
	template<> OWLSPOUT_API UClass* StaticClass<AOWLSpoutReceiverManager>()
	{
		return AOWLSpoutReceiverManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutReceiverManager);
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ScriptStructInfo[] = {
		{ FOWLSpoutReceiverInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewStructOps, TEXT("OWLSpoutReceiverInterface"), &Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSpoutReceiverInterface), 297295365U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOWLSpoutReceiverManager, AOWLSpoutReceiverManager::StaticClass, TEXT("AOWLSpoutReceiverManager"), &Z_Registration_Info_UClass_AOWLSpoutReceiverManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLSpoutReceiverManager), 1358833128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_3828313487(TEXT("/Script/OWLSpout"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
