// Copyright Off World Live Limited, 2020-2022. All rights reserved.
// With the exception of code taken from Unreal Engine source explicitly marked as Copyright Epic Games.




#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "IDetailCustomization.h"

/**
* This class is a copy of UE4's SceneCaptureDetails
* which can be found in DetailsCustomizations editor module.
*
* It is usually used to make access to Rendering Flags easier from scene capture details panel
* Here we use it to achieve the same thing when we expose the rendering flags on our capture component
*/

class IDetailGroup;

// Begin Epic Source: original file: UnrealEngine/Engine/Source/Editor/DetailCustomizations/Private/SceneCaptureDetails.h -  Copyright Epic Games, Inc. All Rights Reserved.
class FCaptureComponentDetailsCustomisation : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

private:
	/** IDetailCustomization interface */
	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailLayout ) override;

private:
	/** The show flags property on the SceneCaptureComponent */
	TSharedPtr<IPropertyHandle> ShowFlagSettingsProperty;

	/**
	* Gets the display state to send to a display filter check box
	*
	* @param The type of checkbox.
	* @return The desired checkbox state.
	*/
	ECheckBoxState OnGetDisplayCheckState(FString ShowFlagName) const;

	/** Show flag settings changed, so update the scene capture */
	void OnShowFlagCheckStateChanged(ECheckBoxState InNewRadioState, FString FlagName);
};
// End Epic Source: UnrealEngine/Engine/Source/Editor/DetailCustomizations/Private/SceneCaptureDetails.h
