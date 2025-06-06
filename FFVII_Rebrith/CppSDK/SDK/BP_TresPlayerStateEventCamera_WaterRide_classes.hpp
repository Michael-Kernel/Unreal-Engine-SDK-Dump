#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_WaterRide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEventCamera_WaterRide.BP_TresPlayerStateEventCamera_WaterRide_C
// 0x112E9AA0 (0x112E9AF0 - 0x0050)
class UBP_TresPlayerStateEventCamera_WaterRide_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class ATresCharPawnBase*                      WaterRide_Pawn;                                    // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   FinishCamera;                                      // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HighPlace;                                         // 0x006C(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Slope;                                             // 0x0078(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Time;                                              // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaterRideFINISH_NORMAL;                          // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               WaterRide_Rotation;                                // 0x008C(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ATresCameraRotTarget*                   CamRot2;                                           // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   CamRot3;                                           // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   CamRot4;                                           // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   CamRot5;                                           // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Dummy;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresNote*                              Dummy1__Cut01_;                                    // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Dummy2__Cut02_;                                    // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               WaterRide_Rotation_Plus_FutureDIstnace_Cut02_;     // 0x00D0(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                WaterRide_FutureDistance_Cut02_;                   // 0x00DC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WaterRide_FutureDistance_Cut01_;                   // 0x00E8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               WaterRide_Rotation_Plus_FutureDIstnace_Cut01_;     // 0x00F4(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ATresCameraRotTarget*                   ROT_Target_camera__Cut01_;                         // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Forward_Distance;                                  // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Normal_Rotation;                                   // 0x010C(0x112E9AF0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ATresCameraRotTarget*                   RotTargetCameraLAST;                               // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   DIS_ROT_FOV_LAST_1;                                // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   DIS_ROT_FOV_LAST_2;                                // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                XVector_Rotation;                                  // 0x0130(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresCameraAnim*                        Intro_Cut01;                                       // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Intro_Cut02;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Intro_Cut03;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Intro_Cut04;                                       // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFINISH_LAST_TALL;                                // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFINISH_LAST_SHORT;                               // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_162[0x2];                                      // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         JumpHeight;                                        // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraRotTarget*                   Cameraman_Cam;                                     // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinishSlideDistance;                               // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SlideDistance_LONG;                                // 0x0174(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SlideDistance_SHORT;                               // 0x0175(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FinishDistanceGET;                                 // 0x0176(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FinishSlideBlockCollision;                         // 0x0177(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          START_FinishSlideBlockCollision;                   // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEventCamera_WaterRide(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void ReceiveTick(float DeltaSeconds_0);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEventCamera_WaterRide_C">();
	}
	static class UBP_TresPlayerStateEventCamera_WaterRide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEventCamera_WaterRide_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEventCamera_WaterRide_C) == 0x112E9AF0, "Wrong alignment on UBP_TresPlayerStateEventCamera_WaterRide_C");
static_assert(sizeof(UBP_TresPlayerStateEventCamera_WaterRide_C) == 0x112E9AF0, "Wrong size on UBP_TresPlayerStateEventCamera_WaterRide_C");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_Pawn) == 0x000058, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_Pawn' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, FinishCamera) == 0x000060, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::FinishCamera' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, DeltaSeconds) == 0x000068, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, HighPlace) == 0x00006C, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::HighPlace' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Slope) == 0x000078, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Slope' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Time) == 0x000084, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Time' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, IsWaterRideFINISH_NORMAL) == 0x000088, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::IsWaterRideFINISH_NORMAL' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_Rotation) == 0x00008C, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_Rotation' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, CamRot2) == 0x000098, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::CamRot2' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, CamRot3) == 0x0000A0, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::CamRot3' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, CamRot4) == 0x0000A8, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::CamRot4' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, CamRot5) == 0x0000B0, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::CamRot5' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Dummy) == 0x0000B8, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Dummy' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Dummy1__Cut01_) == 0x0000C0, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Dummy1__Cut01_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Dummy2__Cut02_) == 0x0000C8, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Dummy2__Cut02_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_Rotation_Plus_FutureDIstnace_Cut02_) == 0x0000D0, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_Rotation_Plus_FutureDIstnace_Cut02_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_FutureDistance_Cut02_) == 0x0000DC, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_FutureDistance_Cut02_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_FutureDistance_Cut01_) == 0x0000E8, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_FutureDistance_Cut01_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, WaterRide_Rotation_Plus_FutureDIstnace_Cut01_) == 0x0000F4, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::WaterRide_Rotation_Plus_FutureDIstnace_Cut01_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, ROT_Target_camera__Cut01_) == 0x000100, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::ROT_Target_camera__Cut01_' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Forward_Distance) == 0x000108, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Forward_Distance' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Normal_Rotation) == 0x00010C, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Normal_Rotation' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, RotTargetCameraLAST) == 0x000118, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::RotTargetCameraLAST' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, DIS_ROT_FOV_LAST_1) == 0x000120, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::DIS_ROT_FOV_LAST_1' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, DIS_ROT_FOV_LAST_2) == 0x000128, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::DIS_ROT_FOV_LAST_2' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, XVector_Rotation) == 0x000130, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::XVector_Rotation' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Intro_Cut01) == 0x000140, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Intro_Cut01' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Intro_Cut02) == 0x000148, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Intro_Cut02' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Intro_Cut03) == 0x000150, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Intro_Cut03' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Intro_Cut04) == 0x000158, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Intro_Cut04' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, IsFINISH_LAST_TALL) == 0x000160, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::IsFINISH_LAST_TALL' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, IsFINISH_LAST_SHORT) == 0x000161, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::IsFINISH_LAST_SHORT' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, JumpHeight) == 0x000164, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::JumpHeight' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, Cameraman_Cam) == 0x000168, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::Cameraman_Cam' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, FinishSlideDistance) == 0x000170, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::FinishSlideDistance' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, SlideDistance_LONG) == 0x000174, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::SlideDistance_LONG' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, SlideDistance_SHORT) == 0x000175, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::SlideDistance_SHORT' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, FinishDistanceGET) == 0x000176, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::FinishDistanceGET' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, FinishSlideBlockCollision) == 0x000177, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::FinishSlideBlockCollision' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_WaterRide_C, START_FinishSlideBlockCollision) == 0x000178, "Member 'UBP_TresPlayerStateEventCamera_WaterRide_C::START_FinishSlideBlockCollision' has a wrong offset!");

}

