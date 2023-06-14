#pragma once
#include "NDIEnums.h"

class FOWLNDISender;
class UTextureRenderTarget2D;

struct OWLNDI_API FOWLNDISenderInfo
{
	int64 LastSeenFrame = 0;
	FString Name = "";
	bool bCaptureAudio = false;
	TSharedPtr<FOWLNDISender, ESPMode::ThreadSafe> NDISender = nullptr;
	/* when true, competing names just don't render */
	bool bHasPriority = false;

	void Start(UWorld* World);
	void Restart(UWorld* World);
	void SendFrame(UTextureRenderTarget2D* Target,ENDIVideoConversionFormat Format);
	void Stop();
};

class OWLNDI_API FOWLNDISenderController
{
public:
	static void TickFrame();
	static void Kill(FString UUID);
	/* Stop and remove sender matching this name */
	static void KillByName(FString Name);
	static FString* GetName(FString UUID);
	static FString SendFrame(FString InName, FString UUID, UTextureRenderTarget2D* SrcTarget, ENDIVideoConversionFormat, bool bCaptureAudio, UWorld* World, bool
	                         bAlwaysHasPriority = false);
	static void Shutdown();
private:
	static void Stop(FString UUID);
	static void UpdateExisting(FOWLNDISenderInfo* Info, FString NewName, bool bCaptureAudio, UWorld* World, bool bHasPriority);
	static FOWLNDISenderInfo CreateNew(FString NewName, FString UUID, bool bCaptureAudio, UWorld* World, bool bHasPriority);
	static TMap<FString,FString> NameToUUID;
	static TMap<FString, FOWLNDISenderInfo> UUIDToInfo;
	static int64 FrameCount;
};
