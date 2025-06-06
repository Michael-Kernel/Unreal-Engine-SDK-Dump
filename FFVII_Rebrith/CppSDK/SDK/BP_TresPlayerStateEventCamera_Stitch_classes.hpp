#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_Stitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEventCamera_Stitch.BP_TresPlayerStateEventCamera_Stitch_C
// 0x112E9AA0 (0x112E9AF0 - 0x0050)
class UBP_TresPlayerStateEventCamera_Stitch_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class ATresCharPawnBase*                      Stitch_pawnbase;                                   // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target_OTS;                                        // 0x0060(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresNote*                              OTStarget;                                         // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rot;                                               // 0x0078(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ATresCameraRotTarget*                   Camera;                                            // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Finish_rot;                                        // 0x0090(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Finish_Distance;                                   // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Finish_Offset;                                     // 0x00A0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresDisneyMagicPawnStitch*             DisneyMagicPawnStitch;                             // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Roop_frag;                                         // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Target_OTS_2;                                      // 0x00BC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FirstPoint;                                        // 0x00C8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstPoint_frag;                                   // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresNote*                              First_Point;                                       // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Finish_Location;                                   // 0x00E0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresNote*                              OTStarget_2;                                       // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraTargetOTS*                   Camera_OTS;                                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEventCamera_Stitch(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void ReceiveAnimNotifyEndBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEventCamera_Stitch_C">();
	}
	static class UBP_TresPlayerStateEventCamera_Stitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEventCamera_Stitch_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEventCamera_Stitch_C) == 0x112E9AF0, "Wrong alignment on UBP_TresPlayerStateEventCamera_Stitch_C");
static_assert(sizeof(UBP_TresPlayerStateEventCamera_Stitch_C) == 0x112E9AF0, "Wrong size on UBP_TresPlayerStateEventCamera_Stitch_C");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Stitch_pawnbase) == 0x000058, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Stitch_pawnbase' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Target_OTS) == 0x000060, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Target_OTS' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, OTStarget) == 0x000070, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::OTStarget' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Rot) == 0x000078, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Rot' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Camera) == 0x000088, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Camera' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Finish_rot) == 0x000090, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Finish_rot' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Finish_Distance) == 0x00009C, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Finish_Distance' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Finish_Offset) == 0x0000A0, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Finish_Offset' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, DisneyMagicPawnStitch) == 0x0000B0, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::DisneyMagicPawnStitch' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Roop_frag) == 0x0000B8, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Roop_frag' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Target_OTS_2) == 0x0000BC, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Target_OTS_2' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, FirstPoint) == 0x0000C8, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::FirstPoint' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, FirstPoint_frag) == 0x0000D4, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::FirstPoint_frag' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, First_Point) == 0x0000D8, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::First_Point' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Finish_Location) == 0x0000E0, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Finish_Location' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, OTStarget_2) == 0x0000F0, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::OTStarget_2' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_Stitch_C, Camera_OTS) == 0x0000F8, "Member 'UBP_TresPlayerStateEventCamera_Stitch_C::Camera_OTS' has a wrong offset!");

}

