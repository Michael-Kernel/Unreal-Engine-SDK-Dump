#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_MIckey

#include "Basic.hpp"

#include "BP_TresPlayerStateEventCamera_MIckey_classes.hpp"
#include "BP_TresPlayerStateEventCamera_MIckey_parameters.hpp"


namespace SDK
{

// Function BP_TresPlayerStateEventCamera_MIckey.BP_TresPlayerStateEventCamera_MIckey_C.ExecuteUbergraph_BP_TresPlayerStateEventCamera_MIckey
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TresPlayerStateEventCamera_MIckey_C::ExecuteUbergraph_BP_TresPlayerStateEventCamera_MIckey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TresPlayerStateEventCamera_MIckey_C", "ExecuteUbergraph_BP_TresPlayerStateEventCamera_MIckey");

	Params::BP_TresPlayerStateEventCamera_MIckey_C_ExecuteUbergraph_BP_TresPlayerStateEventCamera_MIckey Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TresPlayerStateEventCamera_MIckey.BP_TresPlayerStateEventCamera_MIckey_C.ReceivePlayerDtorState
// (Event, Public, BlueprintEvent)
// Parameters:
// ETresStateID                            StateID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TresPlayerStateEventCamera_MIckey_C::ReceivePlayerDtorState(ETresStateID StateID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TresPlayerStateEventCamera_MIckey_C", "ReceivePlayerDtorState");

	Params::BP_TresPlayerStateEventCamera_MIckey_C_ReceivePlayerDtorState Parms{};

	Parms.StateID = StateID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TresPlayerStateEventCamera_MIckey.BP_TresPlayerStateEventCamera_MIckey_C.ReceiveAnimNotifyStartBpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ATresCharPawnBase*                SendActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimSeqName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresAnimNotifyBpEventID                EventID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TresPlayerStateEventCamera_MIckey_C::ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TresPlayerStateEventCamera_MIckey_C", "ReceiveAnimNotifyStartBpEvent");

	Params::BP_TresPlayerStateEventCamera_MIckey_C_ReceiveAnimNotifyStartBpEvent Parms{};

	Parms.SendActor = SendActor;
	Parms.AnimSeqName = AnimSeqName;
	Parms.EventID = EventID;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TresPlayerStateEventCamera_MIckey.BP_TresPlayerStateEventCamera_MIckey_C.ReceivePlayerSpecificAction
// (Event, Public, BlueprintEvent)
// Parameters:
// ETresPlayerSpecificActionID             ActionID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TresPlayerStateEventCamera_MIckey_C::ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TresPlayerStateEventCamera_MIckey_C", "ReceivePlayerSpecificAction");

	Params::BP_TresPlayerStateEventCamera_MIckey_C_ReceivePlayerSpecificAction Parms{};

	Parms.ActionID = ActionID;
	Parms.SubID = SubID;

	UObject::ProcessEvent(Func, &Parms);
}

}

