// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldDesignUpdateGameMode.h"
#include "WorldDesignUpdateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorldDesignUpdateGameMode::AWorldDesignUpdateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
