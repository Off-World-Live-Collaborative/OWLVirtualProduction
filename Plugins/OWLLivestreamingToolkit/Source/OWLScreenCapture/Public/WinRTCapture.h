// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#if (PLATFORM_WINDOWS)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef _HIDE_GLOBAL_ASYNC_STATUS
#define _HIDE_GLOBAL_ASYNC_STATUS
#endif
//Before writing any code, you need to disable common warnings in WinRT headers
#pragma warning(disable : 5205 4265 4268 4946)

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"

#include <unknwn.h>
#include <winrt/Windows.Graphics.Capture.h>
#include <winrt/windows.foundation.h>

#include <Windows.Graphics.Capture.interop.h>
#include <Windows.Graphics.DirectX.Direct3D11.interop.h>

#include <D3d11_4.h>
#include <d3d11.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include "Tools/OWLHelpers.h"
#endif

DECLARE_MULTICAST_DELEGATE_ThreeParams(FNewFrameDelegateDX12, HANDLE SharedTextureHandle, FIntPoint Resolution, DXGI_FORMAT Format);
DECLARE_MULTICAST_DELEGATE(FProblemDelegateDX12);
DECLARE_MULTICAST_DELEGATE_OneParam(FNewFrameDelegateDX11, winrt::com_ptr<ID3D11Texture2D> Texture);

class WinRTCapture
{
public:
	// InDevice11 must not be a D3D11on12 device
	WinRTCapture(
		winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& InitDevice,
		winrt::Windows::Graphics::Capture::GraphicsCaptureItem const& InitItem,
		bool CaptureCursor,
		ERHIType InRHIType,
		ID3D11Device1* InDevice11
	);
	void StartCapture();
	void Close();
	void SetCursorCapture(bool CaptureCursor);
	FNewFrameDelegateDX11 NewFrame11;
	FNewFrameDelegateDX12 NewFrame12;
	FProblemDelegateDX12 Problem;

private:
	void OnFrameArrived(
		winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool const& Sender,
		winrt::Windows::Foundation::IInspectable const& Args);

	// Create a D3D11 texture and a shared handle for it
	winrt::com_ptr<ID3D11Texture2D> CreateD3D11Texture(UINT Width, UINT Height, HANDLE* pHandle);

	void ResizeSharedTexture(UINT Width, UINT Height);

	winrt::Windows::Graphics::Capture::GraphicsCaptureItem Item{ nullptr };
	winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice Device{ nullptr };

	winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool FramePool{ nullptr };
	winrt::Windows::Graphics::Capture::GraphicsCaptureSession Session{ nullptr };

	// Current size of the content capture
	winrt::Windows::Graphics::SizeInt32 LastContentSize {0, 0};

	ID3D11Device1* Device11 = nullptr;
	winrt::com_ptr<ID3D11DeviceContext> Context11{ nullptr };

	// The D3D11 owned texture
	winrt::com_ptr<ID3D11Texture2D> Texture11;
	// The NTHandle that will be shared with D3D12
	HANDLE SharedTextureHandle = nullptr;

	ERHIType RHIType = ERHIType::Null;
};
