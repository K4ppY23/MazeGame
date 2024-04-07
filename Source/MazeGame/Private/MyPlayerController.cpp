// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

AMyPlayerController::AMyPlayerController()
{
    // Konfiguracja kontekstu Input Mapping
    MyInputContext = FInputMappingContext("MyPlayerContext")
        .MapKey(FKey("Escape"), EInputEvent::IE_Pressed)
        .Execute(this, &AMyPlayerController::PauseGameHandler);
}

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Inicjalizacja Input Component
    SetupInputComponent();
}

void AMyPlayerController::SetupInputComponent()
{
    // SprawdŸ, czy Input Component jest dostêpny
    if (InputComponent)
    {
        // Dodaj kontekst do Input Component
        InputComponent->AddMappingContext(MyInputContext);
    }
}

void AMyPlayerController::MyActionHandler()
{
    // Obs³uga akcji "MyAction"
    // Dodaj swoj¹ logikê obs³ugi tutaj
    UE_LOG(LogTemp, Warning, TEXT("MyAction pressed!"));
}

void AMyPlayerController::PauseGameHandler()
{
    // Obs³uga pauzowania gry
    if (!IsPaused())
    {
        // Pauzuj grê
        SetPause(true);

        // Wywo³aj widget pauzy
        if (UUserWidget* PauseWidget = CreateWidget<UUserWidget>(this, BP_PauseWidget)) 
        {
            PauseWidget->AddToViewport();
        }
    }
    else
    {
        // Wznów grê
        SetPause(false);

        // Usuñ widget pauzy
        for (TObjectIterator<UUserWidget> Itr; Itr; ++Itr)
        {
            Itr->RemoveFromViewport();
        }
    }
}