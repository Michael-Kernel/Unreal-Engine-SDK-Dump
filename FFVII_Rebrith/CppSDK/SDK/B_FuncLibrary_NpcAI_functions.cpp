#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FuncLibrary_NpcAI

#include "Basic.hpp"

#include "B_FuncLibrary_NpcAI_classes.hpp"
#include "B_FuncLibrary_NpcAI_parameters.hpp"


namespace SDK
{

// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.StartLead
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATresNpcAILeadSplineActor*        LeadSplineActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTresNpcAILeadSubCharaSlot       SubLeadCharaSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FName                             CancelEventName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::StartLead(class FName UniqueId, ETresChrUniqueID CharacterID, class ATresNpcAILeadSplineActor* LeadSplineActor, const struct FTresNpcAILeadSubCharaSlot& SubLeadCharaSlot, class FName CancelEventName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "StartLead");

	Params::B_FuncLibrary_NpcAI_C_StartLead Parms{};

	Parms.UniqueId = UniqueId;
	Parms.CharacterID = CharacterID;
	Parms.LeadSplineActor = LeadSplineActor;
	Parms.SubLeadCharaSlot = std::move(SubLeadCharaSlot);
	Parms.CancelEventName = CancelEventName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.GetNpcControllerBase
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATresNpcControllerBase*           NpcControllerBase                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::GetNpcControllerBase(ETresChrUniqueID CharacterID, class UObject* __WorldContext, class ATresNpcControllerBase** NpcControllerBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "GetNpcControllerBase");

	Params::B_FuncLibrary_NpcAI_C_GetNpcControllerBase Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NpcControllerBase != nullptr)
		*NpcControllerBase = Parms.NpcControllerBase;
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.CancelLead
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::CancelLead(class UObject* WorldContext, ETresChrUniqueID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "CancelLead");

	Params::B_FuncLibrary_NpcAI_C_CancelLead Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.StartNpcMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CancelEventName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::StartNpcMode(class UObject* WorldContext, ETresChrUniqueID CharacterID, class FName CancelEventName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "StartNpcMode");

	Params::B_FuncLibrary_NpcAI_C_StartNpcMode Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CharacterID = CharacterID;
	Parms.CancelEventName = CancelEventName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.CancelNpcMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::CancelNpcMode(class UObject* WorldContext, ETresChrUniqueID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "CancelNpcMode");

	Params::B_FuncLibrary_NpcAI_C_CancelNpcMode Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.SetNpcPositionAndAI
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresFNpcAIModeLevelSetting             AI                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PositionActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           LookAtActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CancelEventName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::SetNpcPositionAndAI(class UObject* WorldContext, ETresChrUniqueID CharacterID, ETresFNpcAIModeLevelSetting AI, class AActor* PositionActor, class AActor* LookAtActor, class FName CancelEventName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "SetNpcPositionAndAI");

	Params::B_FuncLibrary_NpcAI_C_SetNpcPositionAndAI Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CharacterID = CharacterID;
	Parms.AI = AI;
	Parms.PositionActor = PositionActor;
	Parms.LookAtActor = LookAtActor;
	Parms.CancelEventName = CancelEventName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.StartNpcGimmickWaitAI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::StartNpcGimmickWaitAI(ETresChrUniqueID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "StartNpcGimmickWaitAI");

	Params::B_FuncLibrary_NpcAI_C_StartNpcGimmickWaitAI Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.EndNpcGimmickWaitAI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::EndNpcGimmickWaitAI(ETresChrUniqueID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "EndNpcGimmickWaitAI");

	Params::B_FuncLibrary_NpcAI_C_EndNpcGimmickWaitAI Parms{};

	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function B_FuncLibrary_NpcAI.B_FuncLibrary_NpcAI_C.ResetNpcCancelEventName
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETresChrUniqueID                        CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_FuncLibrary_NpcAI_C::ResetNpcCancelEventName(class UObject* WorldContext, ETresChrUniqueID CharacterID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("B_FuncLibrary_NpcAI_C", "ResetNpcCancelEventName");

	Params::B_FuncLibrary_NpcAI_C_ResetNpcCancelEventName Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CharacterID = CharacterID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

