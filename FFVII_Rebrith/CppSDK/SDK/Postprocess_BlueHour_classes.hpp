#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Postprocess_BlueHour

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass postprocess_BlueHour.postprocess_BlueHour_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
class APostprocess_BlueHour_C final : public AActor
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
		return StaticBPGeneratedClassImpl<"postprocess_BlueHour_C">();
	}
	static class APostprocess_BlueHour_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APostprocess_BlueHour_C>();
	}
};
static_assert(alignof(APostprocess_BlueHour_C) == 0x1EF72E00, "Wrong alignment on APostprocess_BlueHour_C");
static_assert(sizeof(APostprocess_BlueHour_C) == 0x1EF72E00, "Wrong size on APostprocess_BlueHour_C");
static_assert(offsetof(APostprocess_BlueHour_C, SkyLight) == 0x0003E0, "Member 'APostprocess_BlueHour_C::SkyLight' has a wrong offset!");
static_assert(offsetof(APostprocess_BlueHour_C, Postprocess) == 0x0003E8, "Member 'APostprocess_BlueHour_C::Postprocess' has a wrong offset!");
static_assert(offsetof(APostprocess_BlueHour_C, DefaultSceneRoot) == 0x0003F0, "Member 'APostprocess_BlueHour_C::DefaultSceneRoot' has a wrong offset!");

}

