#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_tt220_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass c_tt220_Anim.c_tt220_Anim_C
// 0x2D7A60 (0x115C1550 - 0x112E9AF0)
class UC_tt220_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_122EE644405E3257EF1AA5957CEF8E56; // 0x06E0(0x112BD)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_C96A022B4E3DCE771D08FF9114220757; // 0x0728(0x0038)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_76149593452528CA15E97E996D2B2A34; // 0x0760(0x112BD)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_837764EE4A57B135CFE4FC81FAEB94B9; // 0x07A8(0x115C1550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_57D9A72B4C6BCE1FA3F514AA922AD73E; // 0x0808(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13C755BC45279D8533FB92BCBEBC50AF; // 0x0850(0x1129E)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_12CFCBE94C43E77FE08EC69A04016CF3; // 0x0898(0x1149AB00)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_07AEFD5049711A001CF390BB8C2A0B77; // 0x09F0(0x112E8D20)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_64B1AAFB43518EAA97A1C69658239552; // 0x0AD0(0x115C1550)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_4B1C8BD1400ACCD3A06365B8D2AA9BE5; // 0x0B30(0x0038)()

public:
	void ExecuteUbergraph_c_tt220_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt220_Anim_TresAnimGraphNode_ExLookAt_12CFCBE94C43E77FE08EC69A04016CF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt220_Anim_AnimGraphNode_LayeredBoneBlend_07AEFD5049711A001CF390BB8C2A0B77();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"c_tt220_Anim_C">();
	}
	static class UC_tt220_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_tt220_Anim_C>();
	}
};
static_assert(alignof(UC_tt220_Anim_C) == 0x115C1550, "Wrong alignment on UC_tt220_Anim_C");
static_assert(sizeof(UC_tt220_Anim_C) == 0x115C1550, "Wrong size on UC_tt220_Anim_C");
static_assert(offsetof(UC_tt220_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UC_tt220_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_Root_122EE644405E3257EF1AA5957CEF8E56) == 0x0006E0, "Member 'UC_tt220_Anim_C::AnimGraphNode_Root_122EE644405E3257EF1AA5957CEF8E56' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, TresAnimGraphNode_UseCachedPose_C96A022B4E3DCE771D08FF9114220757) == 0x000728, "Member 'UC_tt220_Anim_C::TresAnimGraphNode_UseCachedPose_C96A022B4E3DCE771D08FF9114220757' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, TresAnimGraphNode_SaveCachedPose_76149593452528CA15E97E996D2B2A34) == 0x000760, "Member 'UC_tt220_Anim_C::TresAnimGraphNode_SaveCachedPose_76149593452528CA15E97E996D2B2A34' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_Slot_837764EE4A57B135CFE4FC81FAEB94B9) == 0x0007A8, "Member 'UC_tt220_Anim_C::AnimGraphNode_Slot_837764EE4A57B135CFE4FC81FAEB94B9' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_LocalToComponentSpace_57D9A72B4C6BCE1FA3F514AA922AD73E) == 0x000808, "Member 'UC_tt220_Anim_C::AnimGraphNode_LocalToComponentSpace_57D9A72B4C6BCE1FA3F514AA922AD73E' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_ComponentToLocalSpace_13C755BC45279D8533FB92BCBEBC50AF) == 0x000850, "Member 'UC_tt220_Anim_C::AnimGraphNode_ComponentToLocalSpace_13C755BC45279D8533FB92BCBEBC50AF' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, TresAnimGraphNode_ExLookAt_12CFCBE94C43E77FE08EC69A04016CF3) == 0x000898, "Member 'UC_tt220_Anim_C::TresAnimGraphNode_ExLookAt_12CFCBE94C43E77FE08EC69A04016CF3' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_LayeredBoneBlend_07AEFD5049711A001CF390BB8C2A0B77) == 0x0009F0, "Member 'UC_tt220_Anim_C::AnimGraphNode_LayeredBoneBlend_07AEFD5049711A001CF390BB8C2A0B77' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, AnimGraphNode_Slot_64B1AAFB43518EAA97A1C69658239552) == 0x000AD0, "Member 'UC_tt220_Anim_C::AnimGraphNode_Slot_64B1AAFB43518EAA97A1C69658239552' has a wrong offset!");
static_assert(offsetof(UC_tt220_Anim_C, TresAnimGraphNode_UseCachedPose_4B1C8BD1400ACCD3A06365B8D2AA9BE5) == 0x000B30, "Member 'UC_tt220_Anim_C::TresAnimGraphNode_UseCachedPose_4B1C8BD1400ACCD3A06365B8D2AA9BE5' has a wrong offset!");

}

