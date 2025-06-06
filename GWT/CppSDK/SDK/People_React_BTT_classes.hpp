#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: People_React_BTT

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass People_React_BTT.People_React_BTT_C
// 0x0140 (0x01E8 - 0x00A8)
class UPeople_React_BTT_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 CurrentReactNameBK;                                // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 PlayingReactNameBK;                                // 0x00D8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 ReactActorBK;                                      // 0x0100(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 ReactLocationBK;                                   // 0x0128(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AfterLocationBK;                                   // 0x0150(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AfterRotationBK;                                   // 0x0178(0x0028)(Edit, BlueprintVisible)
	class UBlendSpace*                            DodgeBS;                                           // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           DodgeLoop;                                         // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloseReactDistToPlayer;                            // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloseReactDurationBias;                            // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CloseReactDurationRand;                            // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USnfPeopleAnimInstance*                 AnimInst;                                          // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASnfNpcHumanoidCharacter*               Humanoid;                                          // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerLocationLog;                                 // 0x01D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Phase;                                             // 0x01DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFromMove;                                        // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeCount;                                         // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_People_React_BTT(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void DodgeLoopOut();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnSuccess_661342AB4E47B091EC0CDDAA8D5120EE(EPathFollowingResult MovementResult);
	void OnFail_661342AB4E47B091EC0CDDAA8D5120EE(EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"People_React_BTT_C">();
	}
	static class UPeople_React_BTT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPeople_React_BTT_C>();
	}
};
static_assert(alignof(UPeople_React_BTT_C) == 0x000008, "Wrong alignment on UPeople_React_BTT_C");
static_assert(sizeof(UPeople_React_BTT_C) == 0x0001E8, "Wrong size on UPeople_React_BTT_C");
static_assert(offsetof(UPeople_React_BTT_C, UberGraphFrame) == 0x0000A8, "Member 'UPeople_React_BTT_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, CurrentReactNameBK) == 0x0000B0, "Member 'UPeople_React_BTT_C::CurrentReactNameBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, PlayingReactNameBK) == 0x0000D8, "Member 'UPeople_React_BTT_C::PlayingReactNameBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, ReactActorBK) == 0x000100, "Member 'UPeople_React_BTT_C::ReactActorBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, ReactLocationBK) == 0x000128, "Member 'UPeople_React_BTT_C::ReactLocationBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, AfterLocationBK) == 0x000150, "Member 'UPeople_React_BTT_C::AfterLocationBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, AfterRotationBK) == 0x000178, "Member 'UPeople_React_BTT_C::AfterRotationBK' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, DodgeBS) == 0x0001A0, "Member 'UPeople_React_BTT_C::DodgeBS' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, DodgeLoop) == 0x0001A8, "Member 'UPeople_React_BTT_C::DodgeLoop' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, CloseReactDistToPlayer) == 0x0001B0, "Member 'UPeople_React_BTT_C::CloseReactDistToPlayer' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, CloseReactDurationBias) == 0x0001B4, "Member 'UPeople_React_BTT_C::CloseReactDurationBias' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, CloseReactDurationRand) == 0x0001B8, "Member 'UPeople_React_BTT_C::CloseReactDurationRand' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, AnimInst) == 0x0001C0, "Member 'UPeople_React_BTT_C::AnimInst' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, Humanoid) == 0x0001C8, "Member 'UPeople_React_BTT_C::Humanoid' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, PlayerLocationLog) == 0x0001D0, "Member 'UPeople_React_BTT_C::PlayerLocationLog' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, Phase) == 0x0001DC, "Member 'UPeople_React_BTT_C::Phase' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, IsFromMove) == 0x0001E0, "Member 'UPeople_React_BTT_C::IsFromMove' has a wrong offset!");
static_assert(offsetof(UPeople_React_BTT_C, TimeCount) == 0x0001E4, "Member 'UPeople_React_BTT_C::TimeCount' has a wrong offset!");

}

