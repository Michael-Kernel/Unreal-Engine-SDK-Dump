#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: N_tt203_Anim

#include "Basic.hpp"

#include "N_tt203_Anim_classes.hpp"
#include "N_tt203_Anim_parameters.hpp"


namespace SDK
{

// Function n_tt203_Anim.n_tt203_Anim_C.ExecuteUbergraph_n_tt203_Anim
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UN_tt203_Anim_C::ExecuteUbergraph_n_tt203_Anim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("n_tt203_Anim_C", "ExecuteUbergraph_n_tt203_Anim");

	Params::N_tt203_Anim_C_ExecuteUbergraph_n_tt203_Anim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function n_tt203_Anim.n_tt203_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_AnimGraphNode_LayeredBoneBlend_F69529514E0B12BD49F4D8ACA3F75CEA
// (BlueprintEvent)

void UN_tt203_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_AnimGraphNode_LayeredBoneBlend_F69529514E0B12BD49F4D8ACA3F75CEA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("n_tt203_Anim_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_AnimGraphNode_LayeredBoneBlend_F69529514E0B12BD49F4D8ACA3F75CEA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function n_tt203_Anim.n_tt203_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_TresAnimGraphNode_ExLookAt_D50972DA4472665616D530ADBA9CBD3B
// (BlueprintEvent)

void UN_tt203_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_TresAnimGraphNode_ExLookAt_D50972DA4472665616D530ADBA9CBD3B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("n_tt203_Anim_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_n_tt203_Anim_TresAnimGraphNode_ExLookAt_D50972DA4472665616D530ADBA9CBD3B");

	UObject::ProcessEvent(Func, nullptr);
}

}

