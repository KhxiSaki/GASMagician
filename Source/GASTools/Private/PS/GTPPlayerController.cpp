// Fill out your copyright notice in the Description page of Project Settings.


#include "PS/GTPPlayerController.h"
#include "PS/GTPPlayerState.h"

void AGTPPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AGTPPlayerState* PS = GetPlayerState<AGTPPlayerState>();
	if (PS)
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}