// Copyright Epic Games, Inc. All Rights Reserved.

#include "OGL_LifeGameMode.h"
#include "OGL_LifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOGL_LifeGameMode::AOGL_LifeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
