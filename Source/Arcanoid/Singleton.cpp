// Fill out your copyright notice in the Description page of Project Settings.


#include "Singleton.h"
#include "Paddle.h"

// Sets default values
ASingleton::ASingleton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleton::BeginPlay()
{
	Super::BeginPlay();
	

	for (int i = 0; i <= 0; i++)
	{
		APaddle* SpawnedPaddle = GetWorld() -> SpawnActor<APaddle>(APaddle::StaticClass());
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local oneand log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s ha cido creado"),*Paddle->GetName()));
		}
	}
}

// Called every frame
void ASingleton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

