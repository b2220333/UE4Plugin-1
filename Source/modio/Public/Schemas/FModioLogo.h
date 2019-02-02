// Copyright 2019 modio. All Rights Reserved.
// Released under MIT.

#pragma once

#include "modio.h"
#include "FModioLogo.generated.h"

USTRUCT(BlueprintType)
struct FModioLogo
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Filename;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Original;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Thumb320x180;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Thumb640x360;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Thumb1280x720;
};

extern void InitializeLogo(FModioLogo &Logo, const modio::Logo &modio_logo);
extern void InitializeLogoC(FModioLogo &Logo, const ModioLogo &modio_logo);