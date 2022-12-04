// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BossBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBossBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ARCANOID_API IBossBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildVida() = 0;
	virtual void BuildNombre() = 0;
	virtual void BuildDuresa() = 0;
	virtual void BuildTamano() = 0;
	virtual class ABoss* GetBoss() = 0;
};
