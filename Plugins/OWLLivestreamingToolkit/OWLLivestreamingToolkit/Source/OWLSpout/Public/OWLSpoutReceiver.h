// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "Tools/OWLHelpers.h"
#include "Engine/TextureRenderTarget2D.h"

#include "Windows/AllowWindowsPlatformTypes.h"
THIRD_PARTY_INCLUDES_START
#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
// macro redefinition in DirectX headers from ThirdParty folder while they are already defined by <winerror.h> included
// from "Windows/AllowWindowsPlatformTypes.h"
#pragma warning(disable: 4005)
#include <d3d11.h>
#include <d3d12.h>
#include <wrl/client.h>

#pragma warning(pop)
THIRD_PARTY_INCLUDES_END
#include "Windows/HideWindowsPlatformTypes.h"

class FOWLSpoutD3D12Helper;

class OWLSPOUT_API FOWLSpoutReceiver
{
public:
	FOWLSpoutReceiver();
	~FOWLSpoutReceiver();
private:
	FOWLSpoutD3D12Helper* D3DHelper = nullptr;

	Microsoft::WRL::ComPtr<ID3D12Resource> ReceivedResource_DX12 = nullptr;

	FTextureRHIRef ReceivedTextureFromResource_DX12;

	Microsoft::WRL::ComPtr<ID3D11Device> Device11 = nullptr;
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> DeviceContext11 = nullptr;
	Microsoft::WRL::ComPtr<ID3D11Texture2D> ReceivedTexture_DX11 = nullptr;

	class spoutSenderNames* SenderNames = nullptr;

	bool AlreadyClear_DX11 = true;
	bool AlreadyClear_DX12 = true;
	ERHIType RHIType = ERHIType::Null;
	bool FailedToInitialise = false;

public:
	bool Initialised = false;
	bool bClosing = false;

private:
	bool InitDX();

	void Receive(FString Name, UTextureRenderTarget2D* DestRenderTarget, bool useFirstAvailableSender, bool bFixGamma);
	bool ReceiveDX11_RHI(FRHICommandListImmediate& RHICmdList, FString name, HANDLE Handle, UTextureRenderTarget2D* DestRenderTarget, bool bFixGamma);
	bool ReceiveDX12_RHI(FRHICommandListImmediate& RHICmdList, FString name, HANDLE Handle, UTextureRenderTarget2D* DestRenderTarget, bool bFixGamma, DXGI_FORMAT Format);

	FString GetFirstAvailableName() const;
	FTextureRHIRef CreateRHITexture(ID3D12Resource* Resource, EPixelFormat Format);
	bool UpdateDestRenderTargetIfNeeded(int Width, int Height, ETextureRenderTargetFormat Format,
	                                    UTextureRenderTarget2D* Target);
	FTexture2DRHIRef DX11IntermediateTexture = nullptr;

	bool bHasLoggedError = false;

public:
	void ReceiveRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool useFirstAvailableSender, bool bFixGamma = true);
	void Close();
};

class OWLSPOUT_API FOWLSpoutNames
{
private:
	static class spoutSenderNames* SenderNames;
public:
	static TArray<FString> GetActiveSenderNames();
	static void Cleanup();
};
