// Fill out your copyright notice in the Description page of Project Settings.


#include "PacManController.h"
#include "PacManPawn.h"

APacManPawn* APacManController::GetPacManPawn() const
{
	return Cast<APacManPawn>(GetPawn());
}

void APacManController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacManController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacManController::MoveDown);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacManController::MoveLeft);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacManController::MoveRight);
}

void APacManController::MoveUp()
{

	if (GetPacManPawn() != nullptr)
	{
		GetPacManPawn()->SetDirection(FVector::UpVector);
	}

}

void APacManController::MoveDown()
{

	if (GetPacManPawn() != nullptr)
	{
 		GetPacManPawn()->SetDirection(FVector::DownVector);
	}

}

void APacManController::MoveLeft()
{

	if (GetPacManPawn() != nullptr)
	{
		GetPacManPawn()->SetDirection(FVector::LeftVector);
	}

}

void APacManController::MoveRight()
{

	if (GetPacManPawn() != nullptr)
	{
		GetPacManPawn()->SetDirection(FVector::RightVector);
	}

}

