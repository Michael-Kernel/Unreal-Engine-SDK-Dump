#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: N_ex001_UIActor

#include "Basic.hpp"

#include "N_ex001_UIActor_classes.hpp"


namespace SDK
{

// Function n_ex001_UIActor.n_ex001_UIActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AN_ex001_UIActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("n_ex001_UIActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

