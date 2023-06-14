// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWLScreenCapturerOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLSCREENCAPTURE_OWLScreenCapturerOptions_generated_h
#error "OWLScreenCapturerOptions.generated.h already included, missing '#pragma once' in OWLScreenCapturerOptions.h"
#endif
#define OWLSCREENCAPTURE_OWLScreenCapturerOptions_generated_h

#define FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOWLScreenCaptureOptions_Statics; \
	OWLSCREENCAPTURE_API static class UScriptStruct* StaticStruct();


template<> OWLSCREENCAPTURE_API UScriptStruct* StaticStruct<struct FOWLScreenCaptureOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapturerOptions_h


#define FOREACH_ENUM_EOWLSCREENCAPTURETYPE(op) \
	op(EOWLScreenCaptureType::SCT_Monitor) \
	op(EOWLScreenCaptureType::SCT_Window) 

enum class EOWLScreenCaptureType : uint8;
template<> struct TIsUEnumClass<EOWLScreenCaptureType> { enum { Value = true }; };
template<> OWLSCREENCAPTURE_API UEnum* StaticEnum<EOWLScreenCaptureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
