// Copyright Epic Games, Inc. All Rights Reserved.

#include "TemporaryModule.h"

#define LOCTEXT_NAMESPACE "FTemporaryModule"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("[Temporary Plugin] StartupModule - 플러그인 정상 로드!"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("[Temporary Plugin] ShutdownModule - 플러그인 언로드."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTemporaryModule, Temporary)