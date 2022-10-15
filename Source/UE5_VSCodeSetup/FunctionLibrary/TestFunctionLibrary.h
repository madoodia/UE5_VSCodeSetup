// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestFunctionLibrary.generated.h"

/**
 * This is a test blueprint function library.
 */

UCLASS()
class UE5_VSCODESETUP_API UTestFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, category = "madoodia")
	static void MadoodiaFunc(int x);
};