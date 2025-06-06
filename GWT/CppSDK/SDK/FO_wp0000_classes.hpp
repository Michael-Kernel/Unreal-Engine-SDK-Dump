#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FO_wp0000

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FO_wp0000.FO_wp0000_C
// 0x0000 (0x0580 - 0x0580)
class AFO_wp0000_C final : public ASnfFXPropsActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FO_wp0000_C">();
	}
	static class AFO_wp0000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFO_wp0000_C>();
	}
};
static_assert(alignof(AFO_wp0000_C) == 0x000008, "Wrong alignment on AFO_wp0000_C");
static_assert(sizeof(AFO_wp0000_C) == 0x000580, "Wrong size on AFO_wp0000_C");

}

