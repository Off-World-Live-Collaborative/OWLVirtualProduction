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
#include <d3d11on12.h>
#include <wrl/client.h>
#pragma warning(pop)
THIRD_PARTY_INCLUDES_END
#include "Windows/HideWindowsPlatformTypes.h"

class FOWLSpoutD3D12Helper;

class OWLSPOUT_API FOWLSpoutSender
{
private:
	ERHIType RHIType = ERHIType::Null;

public:
	class spoutSenderNames* SenderNames = nullptr;
	// DX11 Interface
	Microsoft::WRL::ComPtr<ID3D11Device> Device11 = nullptr;
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> DeviceContext11 = nullptr;
	// DX11 Sending resources
	HANDLE SenderHandle_DX11;
	// DX11 texture that we send to spout
	Microsoft::WRL::ComPtr<ID3D11Texture2D> SendingTexture_DX11;
	Microsoft::WRL::ComPtr<ID3D11On12Device> Device11on12 = nullptr;
	FString SenderName_DX11;

	FTexture2DRHIRef SendingTextureRHI;

	FOWLSpoutD3D12Helper* D3DHelper = nullptr;

	bool Initialised = false;
	bool FailedToInitialise = false;



private:
	bool InitDX();
	void Send(FString InName, UTextureRenderTarget2D* srcRenderTarget, bool bFixGamma);
	void Send_RHI(FRHICommandListImmediate& RHICmdList, FString InName, UTextureRenderTarget2D* srcRenderTarget, bool bFixGamma);

public:
	FOWLSpoutSender();
	~FOWLSpoutSender();
	void SendRenderTarget(FString name, UTextureRenderTarget2D* textureRenderTarget2D, bool bFixGamma = true);
	void Close();

private:
	bool CreateSharedTexture_DX11(
		const unsigned int Width,
		const unsigned int Height,
		const unsigned long Format,
		HANDLE& Handle,
		Microsoft::WRL::ComPtr<ID3D11Texture2D>& Texture);

	bool bHasLogged32BitRGIssue = false;
	bool SetupSendingTextureRHI(UTextureRenderTarget2D* srcRenderTarget, FRHICommandListImmediate& RHICmdList, bool bFixGamma);
	void SetSendingTextureRHIResolution(FIntPoint NewResolution, EPixelFormat Format);
};
