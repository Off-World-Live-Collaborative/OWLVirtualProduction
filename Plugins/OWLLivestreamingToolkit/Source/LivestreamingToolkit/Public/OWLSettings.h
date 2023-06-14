// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OWLSettings.generated.h"

/**
 *
 */
UCLASS(config=Game, defaultconfig, meta=(DisplayName="Off World Live"))
class LIVESTREAMINGTOOLKIT_API UOWLSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UOWLSettings();
#if WITH_EDITOR
	//~ UDeveloperSettings interface
	virtual FText GetSectionText() const override;
#endif
	/* NDI Options */
	UPROPERTY(config, EditAnywhere, Category="NDI", meta=(
		ConsoleVariable="bAutoLaunchNDIInstaller", DisplayName="Launch NDI Installer Automatically",
		ToolTip = "If the NDI SDK is not installed, launch a prompt to download and run the SDK installer"
		))
	bool bAutoLaunchNDIInstaller = false;

	UPROPERTY(config, EditAnywhere, Category="Media Output", meta=(
		ConsoleVariable="bDisableHardwareEncoding", DisplayName="Disable Unreal NVEnc implementation",ConfigRestartRequired=true,
		ToolTip = "By default, OWL Media Output uses Unreal's implementation of the NVidia NVEnc hardware h264 encoder. By disabling it there is a slight frame-rate loss, but can enable you to run than one h264 media outputs."
		))
	bool bDisableHardwareEncoding = false;

	UPROPERTY(config, EditAnywhere, Category="Authentication", meta=(
		ConsoleVariable="bSuppressLoginPopup", DisplayName="Suppress login pop-up",
		ToolTip = "Without a machine (node-locked) license, users of the plugin are requested to sign in on our website by default. When ticked, this suppresses the launch of that website."
		))
	bool bSuppressLoginPopup = false;

	UPROPERTY(config, EditAnywhere, Category="Application Licenses", meta=(
		ConsoleVariable="bUseApplicationLicense", DisplayName="Enable application licenses",
		ToolTip = "Enable in order to disable default authentication for Off World Live and check for application licences instead in packaged games"
		))
	bool bUseApplicationLicense = false;



public:
	bool static GetAutoLaunchNDIInstaller();
	bool static GetDisableHardwareEncoding();
	bool static GetSuppressLoginPopup();
	bool static GetUseApplicationLicense();

};
