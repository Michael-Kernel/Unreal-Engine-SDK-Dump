#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HasLatestJobPathMarker_BTD

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HasLatestJobPathMarker_BTD.HasLatestJobPathMarker_BTD_C
// 0x0000 (0x00A0 - 0x00A0)
class UHasLatestJobPathMarker_BTD_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HasLatestJobPathMarker_BTD_C">();
	}
	static class UHasLatestJobPathMarker_BTD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHasLatestJobPathMarker_BTD_C>();
	}
};
static_assert(alignof(UHasLatestJobPathMarker_BTD_C) == 0x000008, "Wrong alignment on UHasLatestJobPathMarker_BTD_C");
static_assert(sizeof(UHasLatestJobPathMarker_BTD_C) == 0x0000A0, "Wrong size on UHasLatestJobPathMarker_BTD_C");

}

