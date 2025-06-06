#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPointBase

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemPointBase.ItemPointBase_C
// 0x0000 (0x0080 - 0x0080)
class UItemPointBase_C : public USnfItemTokenBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPointBase_C">();
	}
	static class UItemPointBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemPointBase_C>();
	}
};
static_assert(alignof(UItemPointBase_C) == 0x000008, "Wrong alignment on UItemPointBase_C");
static_assert(sizeof(UItemPointBase_C) == 0x000080, "Wrong size on UItemPointBase_C");

}

