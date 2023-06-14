// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OWLBlueprintFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class LIVESTREAMINGTOOLKIT_API UOWLBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* toggle the viewport that renders at Editor time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static void ToggleEditorViewportRendering();

	/**
	* toggle the viewport that render at PIE or Standalone game time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static void ToggleRuntimeViewportRendering();

	/**
	* enable/ disable the viewport that renders at Editor time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static void SetEditorViewportRendering(bool EnableViewportRendering);

	/**
	* enable/ disable the viewport that renders at PIE or Standalone game time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static void SetRuntimeViewportRendering(bool EnableViewportRendering);

	/**
	* rendering status of the viewport that renders at Editor time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static bool GetIsEditorViewportRendering();

	/**
	* rendering status of the viewport at PIE or Standalone game time
	*/
	UFUNCTION(BlueprintCallable, Category = "OWL Livestreaming Toolkit")
	static bool GetIsRuntimeViewportRendering();

	/**
	 * Use this to render any UMG Widgets
	 */
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void DrawUMGToRenderTarget(UUserWidget* UMGWidget, FIntPoint Size, float DeltaTime, UPARAM(ref) UTextureRenderTarget2D* RenderTarget);

	/**
	* bind this function to the key of your choice to create a way to log in in packaged games
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void OWLLogIn();

	/**
	* bind this function to the key of your choice to create a way to log in in packaged games
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static void OWLLogOut();

	/**
	* this function will return true if the user is logged in and false if they are logged out
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static bool OWLLogInStatus();

	/**
	 This function will validate an Application License.
	 It is best called as early as possible in the Unreal Lifecycle.
	 We recommend calling it on `GameInstance::Init()` - see our Knowledgebase article.

	 It should be accompanied by the following entry in `Config/DefaultGame.ini`
	 which will prevent the activation of the default OWL authentication process.
	 ```
	 [/Script/OffWorldLive]
     bUseApplicationLicense=1
	 ```

	 N.B. This function will only authenticate in packaged games
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static bool InitOWLApplicationLicense(FString ApplicationAPICode);

	/**
	* Install a node-locked or metered license to this workstation
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static bool InstallLicense(FString LicenseCode);

	/**
	* Launch the Licensing Utility to manage your licenses
	*/
	UFUNCTION(Category = "OWL Livestreaming Toolkit", BlueprintCallable)
	static bool LaunchLicenseUtility();

};
