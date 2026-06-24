// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("[Test Module] ATestActor::BeginPlay - Test 모듈 정상 작동!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("[Test Module] Test Module is Working!"));
	}
}