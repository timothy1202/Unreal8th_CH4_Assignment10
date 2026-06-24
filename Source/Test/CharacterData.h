// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

UCLASS()
class TEST_API UCharacterData : public UObject
{
	GENERATED_BODY()

public:
	UCharacterData();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	int32 AttackPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Stats")
	float MoveSpeed;
};