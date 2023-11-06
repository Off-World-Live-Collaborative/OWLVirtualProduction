// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FOWLEncoderProfiles.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWLMEDIA_FOWLEncoderProfiles_generated_h
#error "FOWLEncoderProfiles.generated.h already included, missing '#pragma once' in FOWLEncoderProfiles.h"
#endif
#define OWLMEDIA_FOWLEncoderProfiles_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_FOWLEncoderProfiles_h


#define FOREACH_ENUM_EOWLENCODERPROFILE(op) \
	op(EOWLEncoderProfile::P_BASELINE) \
	op(EOWLEncoderProfile::P_CONSTRAINED_BASELINE) \
	op(EOWLEncoderProfile::P_MAIN) \
	op(EOWLEncoderProfile::P_HIGH) \
	op(EOWLEncoderProfile::P_HIGH444) \
	op(EOWLEncoderProfile::P_STEREO) 

enum class EOWLEncoderProfile;
template<> struct TIsUEnumClass<EOWLEncoderProfile> { enum { Value = true }; };
template<> OWLMEDIA_API UEnum* StaticEnum<EOWLEncoderProfile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
