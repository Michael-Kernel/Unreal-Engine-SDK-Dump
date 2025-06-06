#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: G_tt_gomibukuro_01_Anim

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass g_tt_gomibukuro_01_Anim.g_tt_gomibukuro_01_Anim_C
// 0x115C1070 (0x115C1550 - 0x04E0)
class UG_tt_gomibukuro_01_Anim_C final : public UTresAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_EB63A56849C8C8D012C194B77C307949; // 0x04E8(0x112BD)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_579D16B04115C58B5362BC843AFBCE05; // 0x0530(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_E3E1FAA8463CD1B503E4DEB235A9B20E; // 0x0568(0x115C1550)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_43627F4B4E35895DB805408265840B0C; // 0x05C8(0x112BD)()

public:
	void ExecuteUbergraph_g_tt_gomibukuro_01_Anim(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"g_tt_gomibukuro_01_Anim_C">();
	}
	static class UG_tt_gomibukuro_01_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UG_tt_gomibukuro_01_Anim_C>();
	}
};
static_assert(alignof(UG_tt_gomibukuro_01_Anim_C) == 0x115C1550, "Wrong alignment on UG_tt_gomibukuro_01_Anim_C");
static_assert(sizeof(UG_tt_gomibukuro_01_Anim_C) == 0x115C1550, "Wrong size on UG_tt_gomibukuro_01_Anim_C");
static_assert(offsetof(UG_tt_gomibukuro_01_Anim_C, UberGraphFrame) == 0x0004E0, "Member 'UG_tt_gomibukuro_01_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UG_tt_gomibukuro_01_Anim_C, AnimGraphNode_Root_EB63A56849C8C8D012C194B77C307949) == 0x0004E8, "Member 'UG_tt_gomibukuro_01_Anim_C::AnimGraphNode_Root_EB63A56849C8C8D012C194B77C307949' has a wrong offset!");
static_assert(offsetof(UG_tt_gomibukuro_01_Anim_C, TresAnimGraphNode_UseCachedPose_579D16B04115C58B5362BC843AFBCE05) == 0x000530, "Member 'UG_tt_gomibukuro_01_Anim_C::TresAnimGraphNode_UseCachedPose_579D16B04115C58B5362BC843AFBCE05' has a wrong offset!");
static_assert(offsetof(UG_tt_gomibukuro_01_Anim_C, AnimGraphNode_Slot_E3E1FAA8463CD1B503E4DEB235A9B20E) == 0x000568, "Member 'UG_tt_gomibukuro_01_Anim_C::AnimGraphNode_Slot_E3E1FAA8463CD1B503E4DEB235A9B20E' has a wrong offset!");
static_assert(offsetof(UG_tt_gomibukuro_01_Anim_C, TresAnimGraphNode_SaveCachedPose_43627F4B4E35895DB805408265840B0C) == 0x0005C8, "Member 'UG_tt_gomibukuro_01_Anim_C::TresAnimGraphNode_SaveCachedPose_43627F4B4E35895DB805408265840B0C' has a wrong offset!");

}

