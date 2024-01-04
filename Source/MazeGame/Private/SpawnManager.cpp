// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "Engine/TargetPoint.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
USpawnManager::USpawnManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void USpawnManager::BeginPlay()
{
	Super::BeginPlay();

 
	
}


// Called every frame
void USpawnManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
// Function to spawn actors randomly at target points
void USpawnManager::SpawnActorsAtRandomPoints(TSubclassOf<AActor> ActorClass,int32 CountOfBonuses)
{
    // Ensure there are target points available
    if (TargetPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No target points available for spawning actors."));
        return;
    }

    int32* ChosenIndexes = new int32[CountOfBonuses];


    // Iterate and spawn actors at random target points
    for (int32 i = 0; i < CountOfBonuses; )
    {
        bool CheckIfEqualed = false;
        int32 RandomValue = FMath::RandRange(0, TargetPoints.Num() - 1);


        for (int32 j = 0; j < i; j++)
        {
            if (ChosenIndexes[j] == RandomValue)
            {
                CheckIfEqualed = true;
                break;
            }
        }

        if (!CheckIfEqualed)
        {
            ATargetPoint* ChosenTargetPoints = TargetPoints[RandomValue];

            if (ChosenTargetPoints)
            {
                UE_LOG(LogTemp, Warning, TEXT("Index: %d"), RandomValue);
                ChosenIndexes[i] = RandomValue;
                FVector SpawnLocation = ChosenTargetPoints->GetActorLocation();
                FRotator SpawnRotation = ChosenTargetPoints->GetActorRotation();
                AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ActorClass, SpawnLocation, SpawnRotation);

                i++;
            }
           
        }

    }
      
    
    
}
    // Function to collect all TargetPoints in the game and store them in TargetPoints array
    void USpawnManager::CollectTargetPoints()
    {
        // Clear the array to start with a fresh list
        TargetPoints.Empty();

        // Iterator for all actors in the game
        for (TActorIterator<ATargetPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
        {
            // Add the TargetPoint to the array
            ATargetPoint* TargetPoint = *ActorItr;
            if (TargetPoint)
            {
                TargetPoints.Add(TargetPoint);
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("Rozmiar tablicy TargetPoints: %d"), TargetPoints.Num());
    }