#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_ShieldGuardian

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEventCamera_ShieldGuardian.BP_TresPlayerStateEventCamera_ShieldGuardian_C
// 0x6ED6 (0x6F26 - 0x0050)
class UBP_TresPlayerStateEventCamera_ShieldGuardian_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class ATresCharPawnBase*                      Tres_Char_Pawn_base;                               // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          On;                                                // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Center;                                            // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Camera_anim;                                       // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   Camera_RotTarget02;                                // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   Camera_RotTarget01;                                // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   Camera_RotTarget03;                                // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   Camera_RotTarget04;                                // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Start;                                             // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEventCamera_ShieldGuardian(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void ReceiveAnimNotifyEndBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEventCamera_ShieldGuardian_C">();
	}
	static class UBP_TresPlayerStateEventCamera_ShieldGuardian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEventCamera_ShieldGuardian_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C) == 0x006F26, "Wrong alignment on UBP_TresPlayerStateEventCamera_ShieldGuardian_C");
static_assert(sizeof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C) == 0x006F26, "Wrong size on UBP_TresPlayerStateEventCamera_ShieldGuardian_C");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Tres_Char_Pawn_base) == 0x000058, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Tres_Char_Pawn_base' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, On) == 0x000060, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::On' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Center) == 0x000068, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Center' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Camera_anim) == 0x000070, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Camera_anim' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Camera_RotTarget02) == 0x000078, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Camera_RotTarget02' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Camera_RotTarget01) == 0x000080, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Camera_RotTarget01' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Camera_RotTarget03) == 0x000088, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Camera_RotTarget03' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Camera_RotTarget04) == 0x000090, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Camera_RotTarget04' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_ShieldGuardian_C, Start) == 0x000098, "Member 'UBP_TresPlayerStateEventCamera_ShieldGuardian_C::Start' has a wrong offset!");

}

