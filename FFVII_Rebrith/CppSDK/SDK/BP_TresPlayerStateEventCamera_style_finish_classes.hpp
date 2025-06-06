#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_style_finish

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEventCamera_style_finish.BP_TresPlayerStateEventCamera_style_finish_C
// 0x6ED6 (0x6F26 - 0x0050)
class UBP_TresPlayerStateEventCamera_style_finish_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class UCameraAnim*                            Waza_name;                                         // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Twoshotguns_cam_anim;                              // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Normal_play;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresCameraAnim*                        Atari_CAM;                                         // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEventCamera_style_finish(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void ReceiveAnimNotifyEndBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEventCamera_style_finish_C">();
	}
	static class UBP_TresPlayerStateEventCamera_style_finish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEventCamera_style_finish_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEventCamera_style_finish_C) == 0x006F26, "Wrong alignment on UBP_TresPlayerStateEventCamera_style_finish_C");
static_assert(sizeof(UBP_TresPlayerStateEventCamera_style_finish_C) == 0x006F26, "Wrong size on UBP_TresPlayerStateEventCamera_style_finish_C");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_style_finish_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEventCamera_style_finish_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_style_finish_C, Waza_name) == 0x000058, "Member 'UBP_TresPlayerStateEventCamera_style_finish_C::Waza_name' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_style_finish_C, Twoshotguns_cam_anim) == 0x000060, "Member 'UBP_TresPlayerStateEventCamera_style_finish_C::Twoshotguns_cam_anim' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_style_finish_C, Normal_play) == 0x000068, "Member 'UBP_TresPlayerStateEventCamera_style_finish_C::Normal_play' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_style_finish_C, Atari_CAM) == 0x000070, "Member 'UBP_TresPlayerStateEventCamera_style_finish_C::Atari_CAM' has a wrong offset!");

}

