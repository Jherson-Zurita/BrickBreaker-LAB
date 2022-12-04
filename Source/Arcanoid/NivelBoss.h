// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NivelBoss.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNivelBoss : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARCANOID_API INivelBoss
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetVida(int vida) = 0;
	virtual void SetNombre(FString Nombre) = 0;
	virtual void SetDuresa(FString Duresa) = 0;
	virtual void SetTamano(FString Tamano) = 0;

};
