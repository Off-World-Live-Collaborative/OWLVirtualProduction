// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

/**
*
*/
class LIVESTREAMINGTOOLKITEDITOR_API SLivestreamWizard
	: public SCompoundWidget
{
public:

	SLATE_USER_ARGS(SLivestreamWizard)
	{ }
	SLATE_END_ARGS()

public:
	void Construct( const FArguments& InArgs );

private:
	EVisibility GetCreatorPageVisibility() const;
	EVisibility GetDonePageVisibility() const;
	bool GetCreateButtonEnabled() const;
	bool IsCreatorPage = true;
	TSharedPtr<STextBlock> StreamNameWarning;
	TSharedPtr<STextBlock> OutputSelectionWarning;
	TSharedPtr<STextBlock> DoneText;
	TSharedPtr<STextBlock> DoneButtonText;
	FReply OnCreateButtonClicked();
	FReply OnRestartButtonClicked();

	TSharedPtr<SEditableTextBox> StreamNameBox;

	bool CreateSetup() const;
	AActor* CreateCaptureActor(FString& UniqueCameraName) const;
	class AOWLSpoutSenderManager* FindOrCreateSpoutSenderManager() const;
	void CreateSpoutSender(UTextureRenderTarget2D* TextureTarget, FString UniqueCameraName) const;
	class AOWLNDISenderManager* FindOrCreateNDISenderManager() const;
	void CreateNDISender(UTextureRenderTarget2D* TextureTarget, FString UniqueCameraName) const;
	void CreateMediaOutput(UTextureRenderTarget2D* TextureTarget) const;
	void CreateVirtualCam(UTextureRenderTarget2D* TextureTarget) const;

	TSharedPtr<SComboBox<TSharedPtr<FString>>> CameraTypeComboBox;
	TArray<TSharedPtr<FString>> CameraTypeOptions;

	TSharedPtr<SCheckBox> SpoutCheckBox;
	TSharedPtr<SCheckBox> NDICheckBox;
	TSharedPtr<SCheckBox> MediaOutputCheckBox;
	TSharedPtr<SCheckBox> VirtualCamCheckBox;

	FString CinecamName = FString(TEXT("OWL Cinecam"));
	FString Camera360Name = FString(TEXT("OWL 360 Camera"));
	FString ViewportCaptureName = FString(TEXT("OWL Viewport Capture"));

	FText GetCameraTypeComboBoxSelectedText() const;
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent) override;

	bool CanCreateSetup() const;
	UTextureRenderTarget2D* GetRenderTarget(AActor* CaptureActor) const;
};
