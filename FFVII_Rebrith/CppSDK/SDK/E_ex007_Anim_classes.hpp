#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ex007_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass e_ex007_Anim.e_ex007_Anim_C
// 0x2D7A60 (0x115C1550 - 0x112E9AF0)
class UE_ex007_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_2067683B49ABD973D7B744BBAD02C07F; // 0x06E0(0x112BD)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_340114F5409E4656C3814B9176F5077E; // 0x0728(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_FB687819427DE441AF4B7F90F66756BF; // 0x0760(0x115C1550)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_B5ED2F494755EC62D39C018D9B9BB17C; // 0x07C0(0x112BD)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B611119144D2D4F3CA6491AD677A270A; // 0x0808(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F62B79E74162C25D199817A449343983; // 0x0850(0x1129E)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_16987D624148FAA54BD6CF80333CDE2C; // 0x0898(0x1149AB00)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4CBD14B74D8FCADC4CDD69825A03518A; // 0x09F0(0x115C1550)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_797366914414375C153DF29FE7C31EB9; // 0x0A50(0x0038)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_4E175B5547E8AB1A18CC09874A8055D9; // 0x0A88(0x11498FB0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_71D9229A46D386CABDE3AE94C6F226D6; // 0x0B00(0x11498FB0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_BA58BEEB497D25E6BDCBC1A440BA9716; // 0x0BB8(0x11498FB0)()

public:
	void ExecuteUbergraph_e_ex007_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_e_ex007_Anim_TresAnimGraphNode_ExLookAt_16987D624148FAA54BD6CF80333CDE2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_e_ex007_Anim_AnimGraphNode_TwoWayBlend_4E175B5547E8AB1A18CC09874A8055D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_e_ex007_Anim_AnimGraphNode_ModifyBone_71D9229A46D386CABDE3AE94C6F226D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_e_ex007_Anim_AnimGraphNode_ModifyBone_BA58BEEB497D25E6BDCBC1A440BA9716();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"e_ex007_Anim_C">();
	}
	static class UE_ex007_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UE_ex007_Anim_C>();
	}
};
static_assert(alignof(UE_ex007_Anim_C) == 0x115C1550, "Wrong alignment on UE_ex007_Anim_C");
static_assert(sizeof(UE_ex007_Anim_C) == 0x115C1550, "Wrong size on UE_ex007_Anim_C");
static_assert(offsetof(UE_ex007_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UE_ex007_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_Root_2067683B49ABD973D7B744BBAD02C07F) == 0x0006E0, "Member 'UE_ex007_Anim_C::AnimGraphNode_Root_2067683B49ABD973D7B744BBAD02C07F' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, TresAnimGraphNode_UseCachedPose_340114F5409E4656C3814B9176F5077E) == 0x000728, "Member 'UE_ex007_Anim_C::TresAnimGraphNode_UseCachedPose_340114F5409E4656C3814B9176F5077E' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_Slot_FB687819427DE441AF4B7F90F66756BF) == 0x000760, "Member 'UE_ex007_Anim_C::AnimGraphNode_Slot_FB687819427DE441AF4B7F90F66756BF' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, TresAnimGraphNode_SaveCachedPose_B5ED2F494755EC62D39C018D9B9BB17C) == 0x0007C0, "Member 'UE_ex007_Anim_C::TresAnimGraphNode_SaveCachedPose_B5ED2F494755EC62D39C018D9B9BB17C' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_LocalToComponentSpace_B611119144D2D4F3CA6491AD677A270A) == 0x000808, "Member 'UE_ex007_Anim_C::AnimGraphNode_LocalToComponentSpace_B611119144D2D4F3CA6491AD677A270A' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_ComponentToLocalSpace_F62B79E74162C25D199817A449343983) == 0x000850, "Member 'UE_ex007_Anim_C::AnimGraphNode_ComponentToLocalSpace_F62B79E74162C25D199817A449343983' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, TresAnimGraphNode_ExLookAt_16987D624148FAA54BD6CF80333CDE2C) == 0x000898, "Member 'UE_ex007_Anim_C::TresAnimGraphNode_ExLookAt_16987D624148FAA54BD6CF80333CDE2C' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_Slot_4CBD14B74D8FCADC4CDD69825A03518A) == 0x0009F0, "Member 'UE_ex007_Anim_C::AnimGraphNode_Slot_4CBD14B74D8FCADC4CDD69825A03518A' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, TresAnimGraphNode_UseCachedPose_797366914414375C153DF29FE7C31EB9) == 0x000A50, "Member 'UE_ex007_Anim_C::TresAnimGraphNode_UseCachedPose_797366914414375C153DF29FE7C31EB9' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_TwoWayBlend_4E175B5547E8AB1A18CC09874A8055D9) == 0x000A88, "Member 'UE_ex007_Anim_C::AnimGraphNode_TwoWayBlend_4E175B5547E8AB1A18CC09874A8055D9' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_ModifyBone_71D9229A46D386CABDE3AE94C6F226D6) == 0x000B00, "Member 'UE_ex007_Anim_C::AnimGraphNode_ModifyBone_71D9229A46D386CABDE3AE94C6F226D6' has a wrong offset!");
static_assert(offsetof(UE_ex007_Anim_C, AnimGraphNode_ModifyBone_BA58BEEB497D25E6BDCBC1A440BA9716) == 0x000BB8, "Member 'UE_ex007_Anim_C::AnimGraphNode_ModifyBone_BA58BEEB497D25E6BDCBC1A440BA9716' has a wrong offset!");

}

