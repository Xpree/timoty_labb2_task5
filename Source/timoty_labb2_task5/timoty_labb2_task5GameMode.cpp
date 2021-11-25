// Copyright Epic Games, Inc. All Rights Reserved.

#include "timoty_labb2_task5GameMode.h"
#include "timoty_labb2_task5Character.h"
#include "UObject/ConstructorHelpers.h"

Atimoty_labb2_task5GameMode::Atimoty_labb2_task5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
