#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wp0000_AN

#include "Basic.hpp"

#include "Wp0000_AnimRequest_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"
#include "Wp0000_AnimState_structs.hpp"
#include "TangoLib_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass wp0000_AN.wp0000_AN_C
// 0x0690 (0x0950 - 0x02C0)
class UWp0000_AN_C final : public USnfWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x02C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x02F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0318(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0430(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0458(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0540(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0570(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0658(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0688(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0770(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07A0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0820(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0850(0x00B0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0900(0x0030)()
	float                                         AimRate;                                           // 0x0930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimTime;                                           // 0x0934(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         MontageSectionName;                                // 0x0938(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bAim;                                              // 0x0948(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EWp0000_AnimRequest                           AnimRequest;                                       // 0x0949(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWp0000_AnimState                             AnimState;                                         // 0x094A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBend;                                             // 0x094B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShoot;                                            // 0x094C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCancel;                                           // 0x094D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_wp0000_AN(int32 EntryPoint);
	void RequestAnim(class FName Request);
	void AnimNotify_StartState_Shoot();
	void AnimNotify_StartState_Charge();
	void AnimNotify_StartState_Bend();
	void AnimNotify_StartState_Idle();
	void AnimNotify_AnimTransit();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wp0000_AN_C">();
	}
	static class UWp0000_AN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWp0000_AN_C>();
	}
};
static_assert(alignof(UWp0000_AN_C) == 0x000010, "Wrong alignment on UWp0000_AN_C");
static_assert(sizeof(UWp0000_AN_C) == 0x000950, "Wrong size on UWp0000_AN_C");
static_assert(offsetof(UWp0000_AN_C, UberGraphFrame) == 0x0002C0, "Member 'UWp0000_AN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_9) == 0x0002C8, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_8) == 0x0002F0, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_7) == 0x000318, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_6) == 0x000340, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_5) == 0x000368, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_4) == 0x000390, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_3) == 0x0003B8, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_2) == 0x0003E0, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult_1) == 0x000408, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_TransitionResult) == 0x000430, "Member 'UWp0000_AN_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000458, "Member 'UWp0000_AN_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_StateResult_3) == 0x000540, "Member 'UWp0000_AN_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000570, "Member 'UWp0000_AN_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_StateResult_2) == 0x000658, "Member 'UWp0000_AN_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_BlendSpacePlayer) == 0x000688, "Member 'UWp0000_AN_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_StateResult_1) == 0x000770, "Member 'UWp0000_AN_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_SequencePlayer) == 0x0007A0, "Member 'UWp0000_AN_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_StateResult) == 0x000820, "Member 'UWp0000_AN_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_StateMachine) == 0x000850, "Member 'UWp0000_AN_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimGraphNode_Root) == 0x000900, "Member 'UWp0000_AN_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AimRate) == 0x000930, "Member 'UWp0000_AN_C::AimRate' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AimTime) == 0x000934, "Member 'UWp0000_AN_C::AimTime' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, MontageSectionName) == 0x000938, "Member 'UWp0000_AN_C::MontageSectionName' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, bAim) == 0x000948, "Member 'UWp0000_AN_C::bAim' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimRequest) == 0x000949, "Member 'UWp0000_AN_C::AnimRequest' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, AnimState) == 0x00094A, "Member 'UWp0000_AN_C::AnimState' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, bBend) == 0x00094B, "Member 'UWp0000_AN_C::bBend' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, bShoot) == 0x00094C, "Member 'UWp0000_AN_C::bShoot' has a wrong offset!");
static_assert(offsetof(UWp0000_AN_C, bCancel) == 0x00094D, "Member 'UWp0000_AN_C::bCancel' has a wrong offset!");

}

