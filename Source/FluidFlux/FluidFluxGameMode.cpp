// Copyright Epic Games, Inc. All Rights Reserved.

#include "FluidFluxGameMode.h"
#include "FluidFluxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFluidFluxGameMode::AFluidFluxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/FluidFlux/Character/BP_FluidFluxCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
