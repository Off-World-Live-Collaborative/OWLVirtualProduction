// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"

#include "SLivestreamWizard.h"
#include "Widgets/SWidget.h"
#include "Framework/Commands/UICommandList.h"
#include "Editor/LevelEditor/Private/SLevelEditor.h"
#include "Modules/ModuleManager.h"
#include "Toolkits/AssetEditorToolkit.h"

class FToolBarBuilder;
class FMenuBuilder;

class FLivestreamingToolkitEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** This function will be bound to Command. */
	void UseLivestreamWizardButtonClicked();
	void LogInButtonClicked();
	void LogOutButtonClicked();
	void MyAccountButtonClicked();
	void LicenseUtiltyClicked();
	void OnEditorViewportRendering();
	bool IsEditorViewportRenderingEnabled();
	void OnRuntimeViewportRendering();
	bool IsRuntimeViewportRenderingEnabled();
	bool IsToolkitEnabled();
	bool IsThreeSixtyEnabled();
	bool IsMediaOutputEnabled();
	bool IsComposureEnabled();
	bool IsAlwaysDisabled();
	void PluginVersionButtonClicked();
	void KnowledgeCentreButtonClicked();
	void VisitWebsiteButtonClicked();
	void VisitDiscordButtonClicked();
	void VideoTutorialsButtonClicked();

private:

	void RegisterMenus();
	bool IsLogInButtonVisible();
	bool IsLogOutButtonVisible();

	TSharedRef<SDockTab> MakeLivestreamWizardTab( const FSpawnTabArgs& );
	TSharedRef<SWidget> GetLivestreamWizard(const TSharedRef<SDockTab>& InParentTab);

	void Load();
	void Save();

private:
	const FName PlacementModeCategoryHandle = TEXT("OffWorldLive");
	void RegisterWizardTabSpawner();
	void RegisterAndMapPluginCommands();
	void RegisterDetailsCustomisation();
	void RegisterPlacementModeExtensions();
	void RegisterPlacementModeItems(const struct FPlacementCategoryInfo* Info);
	void UnregisterPlacementModeExtensions();

	TSharedPtr<class FUICommandList> PluginCommands;
	TSharedRef<SWidget> FillComboButton(TSharedPtr<class FUICommandList> Commands);
	FDelegateHandle OnUpgradeAvailableHandle;
	void OnUpgradeAvailable(FString NewVersion, FString DownloadURL);
	void OnNewUpdateDownloadNowClicked(FString DownloadURL);
	void OnNewUpdateRemindMeLaterClicked();
	void OnNewUpdateSkipVersionClicked();

	/** Notification popup that new plugins are available */
	TWeakPtr<SNotificationItem> NewPluginsNotification;

	FString AvailableVersionHash = "";
	bool SkipVersion = false;

	FDelegateHandle OnFEngineLoopInitCompleteHandle;
	/** Holds the cine stream wizard singleton. */
	TWeakPtr<SLivestreamWizard> LivestreamWizardPtr;
};
