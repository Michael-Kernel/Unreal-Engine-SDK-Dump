﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InspectorCategoryRow

#include "Basic.hpp"

#include "WBP_InspectorCategoryRow_classes.hpp"
#include "WBP_InspectorCategoryRow_parameters.hpp"


namespace SDK
{

// Function WBP_InspectorCategoryRow.WBP_InspectorCategoryRow_C.BndEvt__WBP_InspectorCategoryRow_InvisibleCollapseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InspectorCategoryRow_C::BndEvt__WBP_InspectorCategoryRow_InvisibleCollapseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InspectorCategoryRow_C", "BndEvt__WBP_InspectorCategoryRow_InvisibleCollapseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InspectorCategoryRow.WBP_InspectorCategoryRow_C.ExecuteUbergraph_WBP_InspectorCategoryRow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InspectorCategoryRow_C::ExecuteUbergraph_WBP_InspectorCategoryRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InspectorCategoryRow_C", "ExecuteUbergraph_WBP_InspectorCategoryRow");

	Params::WBP_InspectorCategoryRow_C_ExecuteUbergraph_WBP_InspectorCategoryRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

