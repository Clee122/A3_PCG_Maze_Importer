// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataIOFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class A3_PCG_MAZE_IMPORTER_API UDataIOFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static bool LoadStringFromFile(FString FileName, FString& LoadedString);
};
