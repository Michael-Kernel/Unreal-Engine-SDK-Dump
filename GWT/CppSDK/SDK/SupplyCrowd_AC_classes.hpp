#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SupplyCrowd_AC

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SupplyCrowd_AC.SupplyCrowd_AC_C
// 0x0008 (0x0298 - 0x0290)
class ASupplyCrowd_AC_C final : public ASnfSupplyCrowd
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SupplyCrowd_AC_C">();
	}
	static class ASupplyCrowd_AC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASupplyCrowd_AC_C>();
	}
};
static_assert(alignof(ASupplyCrowd_AC_C) == 0x000008, "Wrong alignment on ASupplyCrowd_AC_C");
static_assert(sizeof(ASupplyCrowd_AC_C) == 0x000298, "Wrong size on ASupplyCrowd_AC_C");
static_assert(offsetof(ASupplyCrowd_AC_C, DefaultSceneRoot) == 0x000290, "Member 'ASupplyCrowd_AC_C::DefaultSceneRoot' has a wrong offset!");

}

