// Copyright Epic Games, Inc. All Rights Reserved.

#include "A3_PCG_Maze_ImporterGameMode.h"
#include "A3_PCG_Maze_ImporterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA3_PCG_Maze_ImporterGameMode::AA3_PCG_Maze_ImporterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
