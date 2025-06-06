#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: N_ex109_GIM_Anim

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass n_ex109_GIM_Anim.n_ex109_GIM_Anim_C
// 0x115C1070 (0x115C1550 - 0x04E0)
class UN_ex109_GIM_Anim_C final : public UTresAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_42A21387495E015445C8439197021BEF; // 0x04E8(0x112BD)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_2D79E747476E5C4F3FB19688D3288256; // 0x0530(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1EA8AB5F4585B659CD9640B41B49BFA6; // 0x0568(0x115C1550)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_D10905FC4C794E7A5774038DD4BB2468; // 0x05C8(0x112BD)()

public:
	void ExecuteUbergraph_n_ex109_GIM_Anim(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"n_ex109_GIM_Anim_C">();
	}
	static class UN_ex109_GIM_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UN_ex109_GIM_Anim_C>();
	}
};
static_assert(alignof(UN_ex109_GIM_Anim_C) == 0x115C1550, "Wrong alignment on UN_ex109_GIM_Anim_C");
static_assert(sizeof(UN_ex109_GIM_Anim_C) == 0x115C1550, "Wrong size on UN_ex109_GIM_Anim_C");
static_assert(offsetof(UN_ex109_GIM_Anim_C, UberGraphFrame) == 0x0004E0, "Member 'UN_ex109_GIM_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UN_ex109_GIM_Anim_C, AnimGraphNode_Root_42A21387495E015445C8439197021BEF) == 0x0004E8, "Member 'UN_ex109_GIM_Anim_C::AnimGraphNode_Root_42A21387495E015445C8439197021BEF' has a wrong offset!");
static_assert(offsetof(UN_ex109_GIM_Anim_C, TresAnimGraphNode_UseCachedPose_2D79E747476E5C4F3FB19688D3288256) == 0x000530, "Member 'UN_ex109_GIM_Anim_C::TresAnimGraphNode_UseCachedPose_2D79E747476E5C4F3FB19688D3288256' has a wrong offset!");
static_assert(offsetof(UN_ex109_GIM_Anim_C, AnimGraphNode_Slot_1EA8AB5F4585B659CD9640B41B49BFA6) == 0x000568, "Member 'UN_ex109_GIM_Anim_C::AnimGraphNode_Slot_1EA8AB5F4585B659CD9640B41B49BFA6' has a wrong offset!");
static_assert(offsetof(UN_ex109_GIM_Anim_C, TresAnimGraphNode_SaveCachedPose_D10905FC4C794E7A5774038DD4BB2468) == 0x0005C8, "Member 'UN_ex109_GIM_Anim_C::TresAnimGraphNode_SaveCachedPose_D10905FC4C794E7A5774038DD4BB2468' has a wrong offset!");

}

