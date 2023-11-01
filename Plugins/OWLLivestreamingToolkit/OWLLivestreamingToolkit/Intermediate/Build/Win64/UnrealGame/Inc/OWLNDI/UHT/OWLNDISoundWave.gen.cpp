// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDISoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDISoundWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave();
	OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References
	void UOWLNDISoundWave::StaticRegisterNativesUOWLNDISoundWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLNDISoundWave);
	UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister()
	{
		return UOWLNDISoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UOWLNDISoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWLNDISoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWLNDISoundWave_Statics::Class_MetaDataParams[] = {
		{ "Category", "Off World Live NDI" },
		{ "DisplayName", "OWL NDI Sound Wave" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OWLNDISoundWave.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/OWLNDISoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWLNDISoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDISoundWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDISoundWave_Statics::ClassParams = {
		&UOWLNDISoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWLNDISoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWLNDISoundWave()
	{
		if (!Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton, Z_Construct_UClass_UOWLNDISoundWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton;
	}
	template<> OWLNDI_API UClass* StaticClass<UOWLNDISoundWave>()
	{
		return UOWLNDISoundWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLNDISoundWave);
	UOWLNDISoundWave::~UOWLNDISoundWave() {}
	struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDISoundWave, UOWLNDISoundWave::StaticClass, TEXT("UOWLNDISoundWave"), &Z_Registration_Info_UClass_UOWLNDISoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDISoundWave), 2496485056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_931896413(TEXT("/Script/OWLNDI"),
		Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
