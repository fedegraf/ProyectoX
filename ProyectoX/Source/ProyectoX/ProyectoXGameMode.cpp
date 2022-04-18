// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoXGameMode.h"
#include "ProyectoXCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectoXGameMode::AProyectoXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
