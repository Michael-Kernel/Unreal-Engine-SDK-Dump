#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_tt240_Anim

#include "Basic.hpp"

#include "C_tt240_Anim_classes.hpp"
#include "C_tt240_Anim_parameters.hpp"


namespace SDK
{

// Function c_tt240_Anim.c_tt240_Anim_C.ExecuteUbergraph_c_tt240_Anim
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UC_tt240_Anim_C::ExecuteUbergraph_c_tt240_Anim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("c_tt240_Anim_C", "ExecuteUbergraph_c_tt240_Anim");

	Params::C_tt240_Anim_C_ExecuteUbergraph_c_tt240_Anim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function c_tt240_Anim.c_tt240_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8
// (BlueprintEvent)

void UC_tt240_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("c_tt240_Anim_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function c_tt240_Anim.c_tt240_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D
// (BlueprintEvent)

void UC_tt240_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("c_tt240_Anim_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D");

	UObject::ProcessEvent(Func, nullptr);
}

}

