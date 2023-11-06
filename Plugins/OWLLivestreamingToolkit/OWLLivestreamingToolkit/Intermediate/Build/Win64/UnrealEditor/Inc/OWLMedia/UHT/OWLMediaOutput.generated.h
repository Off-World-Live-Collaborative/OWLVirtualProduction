// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLMediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMEDIA_OWLMediaOutput_generated_h
#error "OWLMediaOutput.generated.h already included, missing '#pragma once' in OWLMediaOutput.h"
#endif
#define OWLMEDIA_OWLMediaOutput_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_19_DELEGATE \
OWLMEDIA_API void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_20_DELEGATE \
OWLMEDIA_API void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLSaveToFileSettings>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLRTMPSettings>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLRTSPSettings>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLSRTSettings>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OWLMEDIA_API UScriptStruct* StaticStruct<struct FOWLHTTPSettings>();

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_SPARSE_DATA
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsReconnecting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStartWhenAuthReady); \
	DECLARE_FUNCTION(execOnAuthChanged);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsReconnecting); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStartWhenAuthReady); \
	DECLARE_FUNCTION(execOnAuthChanged);


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_ACCESSORS
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWLMediaOutput(); \
	friend struct Z_Construct_UClass_AOWLMediaOutput_Statics; \
public: \
	DECLARE_CLASS(AOWLMediaOutput, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLMedia"), NO_API) \
	DECLARE_SERIALIZER(AOWLMediaOutput)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_INCLASS \
private: \
	static void StaticRegisterNativesAOWLMediaOutput(); \
	friend struct Z_Construct_UClass_AOWLMediaOutput_Statics; \
public: \
	DECLARE_CLASS(AOWLMediaOutput, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWLMedia"), NO_API) \
	DECLARE_SERIALIZER(AOWLMediaOutput)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWLMediaOutput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWLMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLMediaOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWLMediaOutput(AOWLMediaOutput&&); \
	NO_API AOWLMediaOutput(const AOWLMediaOutput&); \
public:


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWLMediaOutput(AOWLMediaOutput&&); \
	NO_API AOWLMediaOutput(const AOWLMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWLMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWLMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWLMediaOutput)


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_83_PROLOG
#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_RPC_WRAPPERS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_INCLASS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_SPARSE_DATA \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_ACCESSORS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_INCLASS_NO_PURE_DECLS \
	FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWLMEDIA_API UClass* StaticClass<class AOWLMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
