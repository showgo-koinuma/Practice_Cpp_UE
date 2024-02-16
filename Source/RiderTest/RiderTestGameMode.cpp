// Copyright Epic Games, Inc. All Rights Reserved.

#include "RiderTestGameMode.h"
#include "RiderTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARiderTestGameMode::ARiderTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
