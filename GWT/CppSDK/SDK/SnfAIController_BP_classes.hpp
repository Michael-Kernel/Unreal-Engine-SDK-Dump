#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SnfAIController_BP

#include "Basic.hpp"

#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SnfAIController_BP.SnfAIController_BP_C
// 0x0050 (0x0468 - 0x0418)
class ASnfAIController_BP_C final : public ASnfAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnPerceivedSightNew;                               // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPerceivedSightLost;                              // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBehaviorTree*                          BehaviorTree;                                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPerceivedHearingNew;                             // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPerceivedHearingLost;                            // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPerceivedSightNew__DelegateSignature(class AActor* Actor);
	void OnPerceivedSightLost__DelegateSignature(class AActor* Actor);
	void OnPerceivedHearingNew__DelegateSignature(const struct FVector& Location);
	void OnPerceivedHearingLost__DelegateSignature();
	void ExecuteUbergraph_SnfAIController_BP(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);
	void GetInSightActors(TArray<class AActor*>* Actors);
	void SetupBehaviorTree(bool* Success);
	void InitializeBlackboard(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SnfAIController_BP_C">();
	}
	static class ASnfAIController_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASnfAIController_BP_C>();
	}
};
static_assert(alignof(ASnfAIController_BP_C) == 0x000008, "Wrong alignment on ASnfAIController_BP_C");
static_assert(sizeof(ASnfAIController_BP_C) == 0x000468, "Wrong size on ASnfAIController_BP_C");
static_assert(offsetof(ASnfAIController_BP_C, UberGraphFrame) == 0x000418, "Member 'ASnfAIController_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASnfAIController_BP_C, OnPerceivedSightNew) == 0x000420, "Member 'ASnfAIController_BP_C::OnPerceivedSightNew' has a wrong offset!");
static_assert(offsetof(ASnfAIController_BP_C, OnPerceivedSightLost) == 0x000430, "Member 'ASnfAIController_BP_C::OnPerceivedSightLost' has a wrong offset!");
static_assert(offsetof(ASnfAIController_BP_C, BehaviorTree) == 0x000440, "Member 'ASnfAIController_BP_C::BehaviorTree' has a wrong offset!");
static_assert(offsetof(ASnfAIController_BP_C, OnPerceivedHearingNew) == 0x000448, "Member 'ASnfAIController_BP_C::OnPerceivedHearingNew' has a wrong offset!");
static_assert(offsetof(ASnfAIController_BP_C, OnPerceivedHearingLost) == 0x000458, "Member 'ASnfAIController_BP_C::OnPerceivedHearingLost' has a wrong offset!");

}

