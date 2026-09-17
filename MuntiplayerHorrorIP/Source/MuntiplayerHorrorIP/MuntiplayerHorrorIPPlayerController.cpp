// Copyright Epic Games, Inc. All Rights Reserved.


#include "MuntiplayerHorrorIPPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "MuntiplayerHorrorIPCameraManager.h"
#include "Blueprint/UserWidget.h"
#include "MuntiplayerHorrorIP.h"
#include "Widgets/Input/SVirtualJoystick.h"

AMuntiplayerHorrorIPPlayerController::AMuntiplayerHorrorIPPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AMuntiplayerHorrorIPCameraManager::StaticClass();
}

void AMuntiplayerHorrorIPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	
	// only spawn touch controls on local player controllers
	if (ShouldUseTouchControls() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogMuntiplayerHorrorIP, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void AMuntiplayerHorrorIPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Context
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!ShouldUseTouchControls())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
	
}

bool AMuntiplayerHorrorIPPlayerController::ShouldUseTouchControls() const
{
	// are we on a mobile platform? Should we force touch?
	return SVirtualJoystick::ShouldDisplayTouchInterface() || bForceTouchControls;
}
