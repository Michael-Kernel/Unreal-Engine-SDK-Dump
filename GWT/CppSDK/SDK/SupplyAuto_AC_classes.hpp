#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SupplyAuto_AC

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SupplyAuto_AC.SupplyAuto_AC_C
// 0x0008 (0x02D8 - 0x02D0)
class ASupplyAuto_AC_C final : public ASnfSupplyAuto
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SupplyAuto_AC_C">();
	}
	static class ASupplyAuto_AC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASupplyAuto_AC_C>();
	}
};
static_assert(alignof(ASupplyAuto_AC_C) == 0x000008, "Wrong alignment on ASupplyAuto_AC_C");
static_assert(sizeof(ASupplyAuto_AC_C) == 0x0002D8, "Wrong size on ASupplyAuto_AC_C");
static_assert(offsetof(ASupplyAuto_AC_C, DefaultSceneRoot) == 0x0002D0, "Member 'ASupplyAuto_AC_C::DefaultSceneRoot' has a wrong offset!");

}

