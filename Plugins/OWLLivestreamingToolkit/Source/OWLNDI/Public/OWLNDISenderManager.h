// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OWLNDISender.h"
#include "NDIEnums.h"
#include "OWLNDISenderManager.generated.h"

USTRUCT(BlueprintType)
struct OWLNDI_API FOWLNDISenderInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	bool Active = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	bool CaptureAudio = false;

	/* NDI sender name that is used in editor targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	FString Name = "";

	/* NDI sender name that is used in game (standalone/packaged) targets  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	FString StandaloneName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	ENDIVideoConversionFormat VideoConversionFormat = ENDIVideoConversionFormat::NDIVCF_UYVY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLNDISender)
	UTextureRenderTarget2D* SourceRenderTarget = nullptr;

	UPROPERTY()
	UWorld* World = nullptr;

public:
	void End();
	void SendFrame();
	bool UseStandaloneName() const;

private:
	FString GUID = FGuid::NewGuid().ToString();
	FString StandaloneGUID = FGuid::NewGuid().ToString();

};

UCLASS(BlueprintType)
class OWLNDI_API AOWLNDISenderManager : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live NDI Sender Settings")
	TArray<FOWLNDISenderInterface> NDISenders;
	AOWLNDISenderManager(const FObjectInitializer& ObjectInitializer);

private:
	static bool ClosedEditorSenders;

private:
	void CloseAllSenders();
	void OnEndFrame();
	bool ShouldApplyWatermark(const UWorld* World, const UTextureRenderTarget2D* SenderRT) const;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;

	void OnLevelActorDeleted(AActor* DeletedActor);

#if WITH_EDITORONLY_DATA
	FDelegateHandle OnLevelActorDeletedHandle;
#endif
};
