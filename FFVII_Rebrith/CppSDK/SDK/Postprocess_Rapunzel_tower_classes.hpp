#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Postprocess_Rapunzel_tower

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass postprocess_Rapunzel_tower.postprocess_Rapunzel_tower_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
class APostprocess_Rapunzel_tower_C final : public AActor
{
public:
	class USkyLightComponent*                     SkyLight;                                          // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  Postprocess;                                       // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"postprocess_Rapunzel_tower_C">();
	}
	static class APostprocess_Rapunzel_tower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APostprocess_Rapunzel_tower_C>();
	}
};
static_assert(alignof(APostprocess_Rapunzel_tower_C) == 0x1EF72E00, "Wrong alignment on APostprocess_Rapunzel_tower_C");
static_assert(sizeof(APostprocess_Rapunzel_tower_C) == 0x1EF72E00, "Wrong size on APostprocess_Rapunzel_tower_C");
static_assert(offsetof(APostprocess_Rapunzel_tower_C, SkyLight) == 0x0003E0, "Member 'APostprocess_Rapunzel_tower_C::SkyLight' has a wrong offset!");
static_assert(offsetof(APostprocess_Rapunzel_tower_C, Postprocess) == 0x0003E8, "Member 'APostprocess_Rapunzel_tower_C::Postprocess' has a wrong offset!");
static_assert(offsetof(APostprocess_Rapunzel_tower_C, DefaultSceneRoot) == 0x0003F0, "Member 'APostprocess_Rapunzel_tower_C::DefaultSceneRoot' has a wrong offset!");

}

