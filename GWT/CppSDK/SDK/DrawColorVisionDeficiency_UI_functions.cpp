#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DrawColorVisionDeficiency_UI

#include "Basic.hpp"

#include "DrawColorVisionDeficiency_UI_classes.hpp"
#include "DrawColorVisionDeficiency_UI_parameters.hpp"


namespace SDK
{

// Function DrawColorVisionDeficiency_UI.DrawColorVisionDeficiency_UI_C.ExecuteUbergraph_DrawColorVisionDeficiency_UI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDrawColorVisionDeficiency_UI_C::ExecuteUbergraph_DrawColorVisionDeficiency_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DrawColorVisionDeficiency_UI_C", "ExecuteUbergraph_DrawColorVisionDeficiency_UI");

	Params::DrawColorVisionDeficiency_UI_C_ExecuteUbergraph_DrawColorVisionDeficiency_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DrawColorVisionDeficiency_UI.DrawColorVisionDeficiency_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDrawColorVisionDeficiency_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DrawColorVisionDeficiency_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

