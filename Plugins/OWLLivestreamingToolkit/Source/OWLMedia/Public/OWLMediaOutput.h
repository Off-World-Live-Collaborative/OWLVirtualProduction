// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

extern "C"
{
	#include "libavutil/time.h"
}

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tools/OWLImageInput.h"
#include "OWLFFmpegOutput.h"

#include "OWLMediaOutput.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMediaOutputStart);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMediaOutputStop, bool, bGraceful);

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSaveToFileSettings
{
	GENERATED_BODY()
	/* The container format in which the media should be saved */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	EOWLDestinationFormat DestinationFormat = EOWLDestinationFormat::F_MP4;
	/* Destination directory for saving video */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FDirectoryPath VideoOutputDir;
	/* Output file name (without extension) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString VideoOutputFile = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLRTMPSettings
{
	GENERATED_BODY()
	/* The Stream destination URL */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamURL = "";
	/* The Stream destination Key */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamKey = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLRTSPSettings
{
	GENERATED_BODY()

	/* The RTSP Server ie rtsp://<domain>:port */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamURL = "";
};

USTRUCT(BlueprintType)
struct OWLMEDIA_API FOWLSRTSettings
{
	GENERATED_BODY()
	/* The Stream destination URL */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FString StreamURL = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	FOWLSRTOptions Options;
};

UCLASS()
class OWLMEDIA_API AOWLMediaOutput : public AActor
{
	GENERATED_BODY()

public:
	AOWLMediaOutput();
	~AOWLMediaOutput();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostActorCreated() override;
	virtual void BeginDestroy() override;
private:
	OWLImageInput* Input = nullptr;
	FOWLFFmpegOutput* Output = nullptr;
	TAtomic<bool> ShutdownRequested;
	TAtomic<bool> ReconnectRequested;
	TAtomic<bool> ShuttingDown;
	// if the shutdown was not initiated by the user
	// this is set to true
	bool bShutdownForced = false;

public:
	/* Media Output Type */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings")
	EOWLMediaOutputType OutputType = EOWLMediaOutputType::T_RTMP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_FILEOUTPUT", EditConditionHides))
	FOWLSaveToFileSettings SaveToFileSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_RTMP", EditConditionHides))
	FOWLRTMPSettings RTMPSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_RTSP", EditConditionHides))
	FOWLRTSPSettings RTSPSettings ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Output Settings", meta=(EditCondition = "OutputType == EOWLMediaOutputType::T_SRT", EditConditionHides))
	FOWLSRTSettings SRTSettings;

	/* Optional API Key */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Metered License Auth", meta=(EditCondition = "bOverrideAPIKey && !bHideAPIOptions"  ))
	FString APIKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Metered License Auth", meta=(EditCondition = "!bHideAPIOptions"))
	bool bOverrideAPIKey;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Metered License Auth")
	bool bHideAPIOptions = false;

	/* The render target to record from.
	 * Please ensure that the dimensions of this render target are divisible by 2
	 * otherwise the encoder may not be able render it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input Settings")
	UTextureRenderTarget2D* InputRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category="Output Settings")
	FOWLFFmpegSettings EncoderSettings;

	// this will be marked hidden by details customisation
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	bool HasStarted = false;
	UPROPERTY(VisibleAnywhere, Transient, Category = "Output Settings")
	uint64 DurationMs = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Output Settings")
	bool IsMeteredPricing = false;
	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	int MinutesRemaining = 0;

	UPROPERTY(VisibleAnywhere, Transient, BlueprintReadOnly, Category = "Output Settings")
	bool LoadingMinutesRemaining = false;

	UPROPERTY(BlueprintAssignable, Category="OWL Media Output", meta=(ToolTip="Triggered whenever the stream stopped. Graceful is false when the stream is not stopped by the user"))
	FOnMediaOutputStop OnStop;

	UPROPERTY(BlueprintAssignable, Category="OWL Media Output", meta=(ToolTip="Triggered whenever the stream has started. When starting on BeginPlay this may happen after the start function has returned"))
	FOnMediaOutputStart OnStart;

public:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual void PostLoad() override;
	virtual void PostInitProperties() override;

public:
	virtual void Tick(float DeltaTime) override;

private:

	UFUNCTION()
	void OnAuthChanged();
	void BindToAuthChanged();
	bool CheckRunnableQueue(float Delta);
	bool ValidateAuth();
	void ReportFailedAuth();
	bool UpdateMeteredMins();
	void CheckHardwareStatus();
	bool IsUnmetered();
	void RecalculateStreamConfig();
	bool bRenderWatermark = true;
	static FString ShortNameFromFormat(EOWLDestinationFormat InFormat);
	static FString ExtensionFromFormat(EOWLDestinationFormat InFormat);
	static bool ValidateExtension(EOWLDestinationFormat Format, FString FileName);
	bool ValidateVideoInput();
	/* Tries the current file name, if it exists, adds an auto increment
	 * Keeps doing this until a filename is free */
	bool FindFreeFileName();
	/* Returns true if viewport dimensions non-zero */
	bool ViewportDimensionsSet();
	/* Attempts to find an OWL Viewport Actor in the scene */
	bool ViewportActorInScene() const;
	bool bStartWhenViewportReady = false;
	FDateTime WhenMinutesWentNegative;
	bool bMinutesHaveGoneNegative;
	int MinutesAtStart = 0;
	int FilenameIteration = 0;
	FTSTicker::FDelegateHandle ReconnectionTickerHandle;
	FTSTicker::FDelegateHandle RunnableQueueHandle;
	FDelegateHandle AuthChangedHandle;
	FDelegateHandle LoggedOutHandle;
	// mzlt: todo: do we want to limit reconnections?
	uint8 ReconnectionAttempts = 0;
	uint8 MaxReconnectionAttempts = 20;
	const float ReconnectionWaitTime = 10.0f;
	EOWLDestinationFormat FFMpegDestinationFormat = EOWLDestinationFormat::F_MP4;
	int64 SendStart = 0;
	int64 FrameCount = 0;
	bool bSentFirstFrame = false;
	FCriticalSection CleanupCS;
	TSharedPtr<class FMeteredUsageWorker> MeteredUsageRunnable = nullptr;
	// store of features that require disabling on stream end
	TArray<FString> FeaturesToDisable;
	// a unique string for each time the stream starts
	// used be the server to aggregate updates into single database rows
	FString StreamIdentifier;

	bool RequestingMeteredMins = false;
	// have MinutesRemaining been set
	bool MinutesRemainingSet = false;
	// create a promise which is resolved when minutes remaining first set
	// this is then used for to wait the first time a user presses start
	// to ensure that we have a somewhat accurate mins remaining
	TPromise<void> MinutesRemainingSetPromise;

	bool IsStopping = false;

	UPROPERTY()
	UTextureRenderTarget2D* IntermediateTarget = nullptr;

	void Cleanup();
	void TryReconnect();
	void RemoveFFmpegTicker();
	void SendFrame();
	bool SendVideoFrame_RT(FRHICommandListImmediate& RHICmdList);
	void SetDurationMs();
	bool CheckMinutesRemaining();
	void OnMeteredRunnableStopped();

	UFUNCTION()
	void StartWhenAuthReady();
public:
	/* Start recording / streaming
	 * @return bool has recording been successful
	 */
	UFUNCTION(BlueprintCallable, BlueprintCallable, Category="Output Controls")
	bool Start();

	/* Stop the current recording / stream */
	UFUNCTION(BlueprintCallable, BlueprintCallable, Category="Output Controls")
	void Stop();
};
