﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AuthProgressDialog

#include "Basic.hpp"

#include "WBP_AuthProgressDialog_classes.hpp"
#include "WBP_AuthProgressDialog_parameters.hpp"


namespace SDK
{

// Function WBP_AuthProgressDialog.WBP_AuthProgressDialog_C.ExecuteUbergraph_WBP_AuthProgressDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AuthProgressDialog_C::ExecuteUbergraph_WBP_AuthProgressDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AuthProgressDialog_C", "ExecuteUbergraph_WBP_AuthProgressDialog");

	Params::WBP_AuthProgressDialog_C_ExecuteUbergraph_WBP_AuthProgressDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AuthProgressDialog.WBP_AuthProgressDialog_C.HandleAuthState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBRAuthState                            NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBRAuthState                            PreviousState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_AuthProgressDialog_C::HandleAuthState(EBRAuthState NewState, EBRAuthState PreviousState, const class FString& ErrorCode, const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AuthProgressDialog_C", "HandleAuthState");

	Params::WBP_AuthProgressDialog_C_HandleAuthState Parms{};

	Parms.NewState = NewState;
	Parms.PreviousState = PreviousState;
	Parms.ErrorCode = std::move(ErrorCode);
	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AuthProgressDialog.WBP_AuthProgressDialog_C.OnEscapeDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_AuthProgressDialog_C::OnEscapeDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AuthProgressDialog_C", "OnEscapeDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AuthProgressDialog.WBP_AuthProgressDialog_C.OnOpenDialog
// (Event, Public, BlueprintEvent)

void UWBP_AuthProgressDialog_C::OnOpenDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AuthProgressDialog_C", "OnOpenDialog");

	UObject::ProcessEvent(Func, nullptr);
}

}

