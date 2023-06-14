// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OWLNDIReceiver.h"
#include "OWLNDIReceiverManager.generated.h"

USTRUCT(BlueprintType)
struct OWLNDI_API FOWLNDIReceiverInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDIReceiver, meta=(EditCondition="!bUnderExternalControl", EditConditionHides))
	bool Active = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OWLNDIReceiver)
	bool UseFirstAvailableSender = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDIReceiver)
	FString Name = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDIReceiver, meta=(EditCondition="!bUnderExternalControl", EditConditionHides))
	UTextureRenderTarget2D* RenderTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDIReceiver)
	class UOWLNDISoundWave* NDISoundWave = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Internal")
	bool bUnderExternalControl = false;

	bool IsRunning = false;

	UPROPERTY()
	UWorld* World = nullptr;


public:
	void Start(UWorld* InWorld);
	void End();
	void ReceiveFrame();

private:
	bool CheckNameChanged() const;
	bool CheckAudioChanged() const;

private:
	TSharedPtr<FOWLNDIReceiver> OWLNDIReceiver = nullptr;
	FString ActiveName = "";
	class UOWLNDISoundWave* ActiveNDISoundWave = nullptr;
};


UCLASS(BlueprintType)
class OWLNDI_API AOWLNDIReceiverManager : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live NDI Receiver Settings")
	TArray<FOWLNDIReceiverInterface> NDIReceivers;

	/** Returns a list of NDI sources that are available at this moment in time. */
	UFUNCTION(BlueprintCallable, Category = "Off World Live NDI Receiver")
	TArray<struct FNDISource> GetAvailableNDISources();

	AOWLNDIReceiverManager(const FObjectInitializer& ObjectInitializer);

private:
	static bool ClosedEditorReceivers;

private:
	void OnEndFrame();
	void CloseAllReceivers();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Destroyed() override;
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
};
