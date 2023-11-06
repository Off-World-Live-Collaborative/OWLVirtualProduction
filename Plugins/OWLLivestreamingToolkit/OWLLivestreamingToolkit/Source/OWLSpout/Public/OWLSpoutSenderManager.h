// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "OWLSpoutSender.h"
#include "OWLSpoutSenderManager.generated.h"


USTRUCT(BlueprintType)
struct OWLSPOUT_API FOWLSpoutSenderInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	bool Active = false;

	/* Spout sender name that is used in editor targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString Name = "";

	FString PreviousName = "";

	/* Spout sender name that is used in game (standalone/packaged) targets  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	FString StandaloneName = "";

	/* Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	bool bFixGamma = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OWLSpoutSender)
	UTextureRenderTarget2D* SourceRenderTarget = nullptr;

	FString UUID = "";

	FString StandaloneUUID = "";

	bool bInitialised = false;

	/* Call because default struct values appear not to be set when blueprints create them */
	void Initialise();

};


UCLASS()
class OWLSPOUT_API AOWLSpoutSenderManager : public AActor
{
	GENERATED_BODY()

public:
	AOWLSpoutSenderManager(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Off World Live Spout Sender Settings")
	TArray<FOWLSpoutSenderInterface> SpoutSenders;

	/* Utility function to add a sender to the list - returns the struct created which has been added to the SpoutSenders array */
	UFUNCTION(BlueprintCallable, Category = "OWL Spout Sender Manager")
	FOWLSpoutSenderInterface AddSender(FString Name, UTextureRenderTarget2D* TextureTarget, FString StandaloneName = "", bool bActive = true, bool bFixGamma = true);

	/* Utility function for removing a sender via blueprints with matching name. Returns true if matched */
	UFUNCTION(BlueprintCallable, Category = "OWL Spout Sender Manager")
	bool RemoveSenderByName(FString Name);

	/* Activates a sender by the spout sender name. Returns true if found. */
	UFUNCTION(BlueprintCallable, Category = "OWL Spout Sender Manager")
	bool ActivateSender(FString Name);

	/* Deactivates a sender by the spout sender name. Returns true if found. */
	UFUNCTION(BlueprintCallable, Category = "OWL Spout Sender Manager")
	bool DeactivateSender(FString Name);

private:
	TEnumAsByte<EWorldType::Type> StartingWorldType = EWorldType::None;
	static bool ClosedEditorSenders;

private:
	void CloseAllSenders(bool keepActive);
	void OnEndFrame();
	bool ShouldApplyWatermark(const UWorld* World, const UTextureRenderTarget2D* SenderRT) const;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void BeginDestroy() override;
	virtual void PostInitProperties() override;

public:
	virtual bool ShouldTickIfViewportsOnly() const override;
};
