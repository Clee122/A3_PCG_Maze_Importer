// Fill out your copyright notice in the Description page of Project Settings.

#include "DataIOFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UDataIOFunctionLibrary::LoadStringFromFile(FString FileName, FString& LoadedString)
{
    // The file path is built from the Content folder so the Blueprint only needs to pass a simple file name.
    FString FullFilePath = FPaths::ConvertRelativePathToFull(
        FPaths::Combine(FPaths::ProjectContentDir(), FileName)
    );

    // The map data needs to be loaded as one string so Blueprint can split and read it as generated level data.
    bool bSuccess = FFileHelper::LoadFileToString(LoadedString, *FullFilePath);

    if (bSuccess)
    {
        // Logging the successful path makes it easier to confirm that Unreal is reading the intended file.
        UE_LOG(LogTemp, Log, TEXT("Success: %s"), *FullFilePath);
    }
    else
    {
        // A warning is used here because most loading issues are usually caused by an incorrect file name or path.
        UE_LOG(LogTemp, Warning, TEXT("Failed: %s"), *FullFilePath);
    }

    // Blueprint needs this result so it can avoid using empty or missing map data.
    return bSuccess;
}