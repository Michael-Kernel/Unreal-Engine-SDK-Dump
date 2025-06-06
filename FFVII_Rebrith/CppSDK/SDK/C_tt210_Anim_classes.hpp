#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_tt210_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass c_tt210_Anim.c_tt210_Anim_C
// 0x2D7A60 (0x115C1550 - 0x112E9AF0)
class UC_tt210_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_91EA3F5649E2F77A1236B39554E8B33C; // 0x06E0(0x112BD)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6887BE7C467A8FEEB4B9DDBACB10BAA8; // 0x0728(0x115C1550)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_83BE8E774FEF4F21C6C4B396E8426537; // 0x0788(0x0038)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_873430F741CF46D27B50FD9B20EB39A9; // 0x07C0(0x112BD)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_45C8B0C94DF196062083ECADB62B0994; // 0x0808(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8DB1662248F5273B0A9A88BCD0B0B481; // 0x0850(0x1129E)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_F92420A8414F675383839F9CE5651E06; // 0x0898(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9B80AA174B4CCE1E043101A3855636B4; // 0x08D0(0x115C1550)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_FC5EFF2149D33C6595CB838764E139C4; // 0x0930(0x112E8D20)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_71237ABF44EE055A66C8B7B0DF12DDEE; // 0x0A10(0x1149AB00)()

public:
	void ExecuteUbergraph_c_tt210_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt210_Anim_AnimGraphNode_LayeredBoneBlend_FC5EFF2149D33C6595CB838764E139C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt210_Anim_TresAnimGraphNode_ExLookAt_71237ABF44EE055A66C8B7B0DF12DDEE();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"c_tt210_Anim_C">();
	}
	static class UC_tt210_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_tt210_Anim_C>();
	}
};
static_assert(alignof(UC_tt210_Anim_C) == 0x115C1550, "Wrong alignment on UC_tt210_Anim_C");
static_assert(sizeof(UC_tt210_Anim_C) == 0x115C1550, "Wrong size on UC_tt210_Anim_C");
static_assert(offsetof(UC_tt210_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UC_tt210_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_Root_91EA3F5649E2F77A1236B39554E8B33C) == 0x0006E0, "Member 'UC_tt210_Anim_C::AnimGraphNode_Root_91EA3F5649E2F77A1236B39554E8B33C' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_Slot_6887BE7C467A8FEEB4B9DDBACB10BAA8) == 0x000728, "Member 'UC_tt210_Anim_C::AnimGraphNode_Slot_6887BE7C467A8FEEB4B9DDBACB10BAA8' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, TresAnimGraphNode_UseCachedPose_83BE8E774FEF4F21C6C4B396E8426537) == 0x000788, "Member 'UC_tt210_Anim_C::TresAnimGraphNode_UseCachedPose_83BE8E774FEF4F21C6C4B396E8426537' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, TresAnimGraphNode_SaveCachedPose_873430F741CF46D27B50FD9B20EB39A9) == 0x0007C0, "Member 'UC_tt210_Anim_C::TresAnimGraphNode_SaveCachedPose_873430F741CF46D27B50FD9B20EB39A9' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_LocalToComponentSpace_45C8B0C94DF196062083ECADB62B0994) == 0x000808, "Member 'UC_tt210_Anim_C::AnimGraphNode_LocalToComponentSpace_45C8B0C94DF196062083ECADB62B0994' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_ComponentToLocalSpace_8DB1662248F5273B0A9A88BCD0B0B481) == 0x000850, "Member 'UC_tt210_Anim_C::AnimGraphNode_ComponentToLocalSpace_8DB1662248F5273B0A9A88BCD0B0B481' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, TresAnimGraphNode_UseCachedPose_F92420A8414F675383839F9CE5651E06) == 0x000898, "Member 'UC_tt210_Anim_C::TresAnimGraphNode_UseCachedPose_F92420A8414F675383839F9CE5651E06' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_Slot_9B80AA174B4CCE1E043101A3855636B4) == 0x0008D0, "Member 'UC_tt210_Anim_C::AnimGraphNode_Slot_9B80AA174B4CCE1E043101A3855636B4' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, AnimGraphNode_LayeredBoneBlend_FC5EFF2149D33C6595CB838764E139C4) == 0x000930, "Member 'UC_tt210_Anim_C::AnimGraphNode_LayeredBoneBlend_FC5EFF2149D33C6595CB838764E139C4' has a wrong offset!");
static_assert(offsetof(UC_tt210_Anim_C, TresAnimGraphNode_ExLookAt_71237ABF44EE055A66C8B7B0DF12DDEE) == 0x000A10, "Member 'UC_tt210_Anim_C::TresAnimGraphNode_ExLookAt_71237ABF44EE055A66C8B7B0DF12DDEE' has a wrong offset!");

}

