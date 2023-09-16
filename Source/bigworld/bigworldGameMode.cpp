// Copyright Epic Games, Inc. All Rights Reserved.

#include "bigworldGameMode.h"
#include "bigworldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AbigworldGameMode::AbigworldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
