#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShieldGuardian_Pawn

#include "Basic.hpp"

#include "ShieldGuardian_Pawn_classes.hpp"


namespace SDK
{

// Function ShieldGuardian_Pawn.ShieldGuardian_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShieldGuardian_Pawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShieldGuardian_Pawn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

