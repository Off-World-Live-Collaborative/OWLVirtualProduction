// Copyright Off World Live Limited, 2020-2022. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "IDetailCustomization.h"

class IDetailGroup;

class AOWLMediaOutput;

class FMediaOutputDetailsCustomisation : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

private:
	/** IDetailCustomization interface */
	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailLayout ) override;

private:
	TSharedPtr<IPropertyHandle> HasStartedProperty;
	TSharedPtr<IPropertyHandle> DurationMsProperty;
	TSharedPtr<IPropertyHandle> MinutesRemainingProperty;
	TSharedPtr<IPropertyHandle> IsMeteredPricingProperty;
	TSharedPtr<IPropertyHandle> LoadingMinutesRemainingProperty;
	TSharedPtr<IPropertyHandle> HideApiOptionsProperty;
	// The list of selected objects, used when invoking a CallInEditor method
	TArray<TWeakObjectPtr<UObject>> SelectedObjectsList;

	FReply OnClickStart(TWeakObjectPtr<AOWLMediaOutput> ClassPtr) const;
	FReply OnClickStop(TWeakObjectPtr<AOWLMediaOutput> ClassPtr) const;
	bool IsStartEnabled() const;
	bool IsStopEnabled() const;

	bool IsHardwareEncodingEnabled() const;

	EVisibility GetMeteredTextVisibility() const;
	EVisibility GetUnmeteredTextVisibility() const;
	EVisibility GetNoLicenceFoundVisibility() const;
	EVisibility GetTrialButtonVisibility() const;
	bool HasValidLicence() const;

	FText GetDurationMsText() const;
	FText GetMinutesRemainingText() const;
	FSlateColor GetMinutesRemainingColor() const;
	FReply OnAddMoreMinutesClicked();
	FReply OnGetTrialMinutesClicked();

	FReply OnEnableHardwareEncodersClick();
	FText HardwareEncodersButtonText() const;
	bool HardwareEncodersButtonEnabled() const;
	EVisibility HardwareEncodersTextVisibility() const;

};
