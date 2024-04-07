// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
    // Konstruktor
    AMyPlayerController();

    // Przeci¹¿ona funkcja BeginPlay
    virtual void BeginPlay() override;

    // Dodaj funkcje obs³uguj¹c¹ input
    void SetupInputComponent();

    // Funkcja do obs³ugi akcji przypisanej do "MyAction"
    void MyActionHandler();

    // Funkcja do obs³ugi akcji przypisanej do pauzowania gry
    void PauseGameHandler();

private:
    // Kontekst Input Mapping
    FInputMappingContext MyInputContext;
};
	
};
