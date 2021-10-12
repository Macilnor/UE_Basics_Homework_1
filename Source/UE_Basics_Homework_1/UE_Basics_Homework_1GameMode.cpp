// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Basics_Homework_1GameMode.h"
#include "UE_Basics_Homework_1PlayerController.h"
#include "UE_Basics_Homework_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_Basics_Homework_1GameMode::AUE_Basics_Homework_1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUE_Basics_Homework_1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}