// Copyright Epic Games, Inc. All Rights Reserved.

#include "AssignMent10GameMode.h"
#include "AssignMent10Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignMent10GameMode::AAssignMent10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
