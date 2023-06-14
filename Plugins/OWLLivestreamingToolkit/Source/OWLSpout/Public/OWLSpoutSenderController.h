#pragma once
#include "CoreMinimal.h"

class FOWLSpoutSender;
class UTextureRenderTarget2D;

struct FOWLRegisteredSpoutSender
{
	int64 Frame;
	FString Name;
	TSharedPtr<FOWLSpoutSender, ESPMode::ThreadSafe> Sender;
	bool bHasPriority;
	void Send(UTextureRenderTarget2D* RT, bool bFixGamma);
};

/**
 * Very hard to know whether there are overlaps
 * internally between spout sender names
 * This is a service which stores names next to
 * the last frame it was known at so that duplicates can be
 * varied (ie by adding a number to it)
 */
class OWLSPOUT_API FOWLSpoutSenderController
{
public:
	/* Removes a spout sender name -- must be called from game thread */
	static void Remove(FString UUID);
	/* Either returns the original name, or generates a unique name for this sender */
	static FString Send(FString UUID, FString InName, UTextureRenderTarget2D* RenderTarget, bool bFixGamma, bool bHasPriority);
	static void Shutdown();
	static void TickFrame();
private:
	static FOWLRegisteredSpoutSender CreateNew(FString UUID, FString Name, bool bHasPriority);
	static void UpdateExisting(FOWLRegisteredSpoutSender& Existing, FString UUID, FString Name, bool bHasPriority);
	static FString GetFirstFreeName(FString InName);
	static TMap<FString, FOWLRegisteredSpoutSender> SendersByUUID;
	static TMap<FString, FString> NameToUUID;
	static int64 FrameCount;
};
