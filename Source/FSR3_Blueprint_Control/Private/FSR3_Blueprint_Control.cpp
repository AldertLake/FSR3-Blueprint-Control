// Copyright Epic Games, Inc. All Rights Reserved.

#include "FSR3_Blueprint_Control.h"

#define LOCTEXT_NAMESPACE "FFSR3_Blueprint_ControlModule"

void FFSR3_Blueprint_ControlModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FFSR3_Blueprint_ControlModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFSR3_Blueprint_ControlModule, FSR3_Blueprint_Control)