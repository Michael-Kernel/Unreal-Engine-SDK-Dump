#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ex061_Bomb

#include "Basic.hpp"

#include "E_ex061_Bomb_classes.hpp"
#include "E_ex061_Bomb_parameters.hpp"


namespace SDK
{

// Function e_ex061_Bomb.e_ex061_Bomb_C.ExecuteUbergraph_e_ex061_Bomb
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AE_ex061_Bomb_C::ExecuteUbergraph_e_ex061_Bomb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("e_ex061_Bomb_C", "ExecuteUbergraph_e_ex061_Bomb");

	Params::E_ex061_Bomb_C_ExecuteUbergraph_e_ex061_Bomb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function e_ex061_Bomb.e_ex061_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AE_ex061_Bomb_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("e_ex061_Bomb_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function e_ex061_Bomb.e_ex061_Bomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_ex061_Bomb_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("e_ex061_Bomb_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

