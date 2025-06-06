#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ex002_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass e_ex002_Anim.e_ex002_Anim_C
// 0x3147B0 (0x115FE2A0 - 0x112E9AF0)
class UE_ex002_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_7421527545EDA0024AACE784FA068358; // 0x06E0(0x112BD)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_02B927A54B17F2C4F4DB78BF84AD33D5; // 0x0728(0x1149AB00)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0DE91B2749C35683197405B83B3AC234; // 0x0880(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1F50E27B41DDF0956794AFB4D86CF5AA; // 0x08C8(0x1129E)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_1E8D646C404D97BF85F871B3AE8B66EA; // 0x0910(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_480F396B4FBD88CAC1458C9B90AF808D; // 0x0948(0x115C1550)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_B4D2065B42DA6DEBBA72E2B06D10E839; // 0x09A8(0x112BD)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_0BE3C0114EE45736526B9CB5753C7C37; // 0x09F0(0x115B3590)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_32EADBA645C3BEEF186805ACD509C900; // 0x0A68(0x115C1550)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_E87A6F2345A170EE515A1EA3417DFD3B; // 0x0AC8(0x115FE2A0)()
	float                                         Alpha;                                             // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Loop;                                              // 0x0B3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_e_ex002_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_e_ex002_Anim_TresAnimGraphNode_ExLookAt_02B927A54B17F2C4F4DB78BF84AD33D5();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"e_ex002_Anim_C">();
	}
	static class UE_ex002_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UE_ex002_Anim_C>();
	}
};
static_assert(alignof(UE_ex002_Anim_C) == 0x115FE2A0, "Wrong alignment on UE_ex002_Anim_C");
static_assert(sizeof(UE_ex002_Anim_C) == 0x115FE2A0, "Wrong size on UE_ex002_Anim_C");
static_assert(offsetof(UE_ex002_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UE_ex002_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_Root_7421527545EDA0024AACE784FA068358) == 0x0006E0, "Member 'UE_ex002_Anim_C::AnimGraphNode_Root_7421527545EDA0024AACE784FA068358' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, TresAnimGraphNode_ExLookAt_02B927A54B17F2C4F4DB78BF84AD33D5) == 0x000728, "Member 'UE_ex002_Anim_C::TresAnimGraphNode_ExLookAt_02B927A54B17F2C4F4DB78BF84AD33D5' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_LocalToComponentSpace_0DE91B2749C35683197405B83B3AC234) == 0x000880, "Member 'UE_ex002_Anim_C::AnimGraphNode_LocalToComponentSpace_0DE91B2749C35683197405B83B3AC234' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_ComponentToLocalSpace_1F50E27B41DDF0956794AFB4D86CF5AA) == 0x0008C8, "Member 'UE_ex002_Anim_C::AnimGraphNode_ComponentToLocalSpace_1F50E27B41DDF0956794AFB4D86CF5AA' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, TresAnimGraphNode_UseCachedPose_1E8D646C404D97BF85F871B3AE8B66EA) == 0x000910, "Member 'UE_ex002_Anim_C::TresAnimGraphNode_UseCachedPose_1E8D646C404D97BF85F871B3AE8B66EA' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_Slot_480F396B4FBD88CAC1458C9B90AF808D) == 0x000948, "Member 'UE_ex002_Anim_C::AnimGraphNode_Slot_480F396B4FBD88CAC1458C9B90AF808D' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, TresAnimGraphNode_SaveCachedPose_B4D2065B42DA6DEBBA72E2B06D10E839) == 0x0009A8, "Member 'UE_ex002_Anim_C::TresAnimGraphNode_SaveCachedPose_B4D2065B42DA6DEBBA72E2B06D10E839' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_ApplyAdditive_0BE3C0114EE45736526B9CB5753C7C37) == 0x0009F0, "Member 'UE_ex002_Anim_C::AnimGraphNode_ApplyAdditive_0BE3C0114EE45736526B9CB5753C7C37' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_Slot_32EADBA645C3BEEF186805ACD509C900) == 0x000A68, "Member 'UE_ex002_Anim_C::AnimGraphNode_Slot_32EADBA645C3BEEF186805ACD509C900' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, AnimGraphNode_SequencePlayer_E87A6F2345A170EE515A1EA3417DFD3B) == 0x000AC8, "Member 'UE_ex002_Anim_C::AnimGraphNode_SequencePlayer_E87A6F2345A170EE515A1EA3417DFD3B' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, Alpha) == 0x000B38, "Member 'UE_ex002_Anim_C::Alpha' has a wrong offset!");
static_assert(offsetof(UE_ex002_Anim_C, Loop) == 0x000B3C, "Member 'UE_ex002_Anim_C::Loop' has a wrong offset!");

}

