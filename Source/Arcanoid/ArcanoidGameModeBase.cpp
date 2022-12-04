// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArcanoidGameModeBase.h"
#include "Brick.h"
#include "Paddle.h"

void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i <= 0; i++)
	{
		APaddle* SpawnedPaddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local oneand log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ha cido creado"), *Paddle->GetName()));
		}
	}


	const FVector Ubicacion(-140.0f, 00.0f, 360.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);

	const FVector A(50.0f, 00.0f, 00.0f);

	UWorld* const World = GetWorld();
	
	if (World != nullptr) {
		// Spawn o generacion o creacion de actores en tiempo de ejecucion
		ladrillo01 = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		ladrillo01->SetHidden(false);
		ladrillo02 = World->SpawnActor<ABrick>(Ubicacion + A, Rotacion);
		ladrillo02->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor ladrillo 01 creado"));

	}

}
