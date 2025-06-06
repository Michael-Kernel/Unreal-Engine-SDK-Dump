#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemSoundBase

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemSoundBase.ItemSoundBase_C
// 0x0000 (0x0088 - 0x0088)
class UItemSoundBase_C : public USnfItemSoundBase
{
public:
	int32 Blueprint_OnUse(class AActor* Receiver, int32 Count) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSoundBase_C">();
	}
	static class UItemSoundBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSoundBase_C>();
	}
};
static_assert(alignof(UItemSoundBase_C) == 0x000008, "Wrong alignment on UItemSoundBase_C");
static_assert(sizeof(UItemSoundBase_C) == 0x000088, "Wrong size on UItemSoundBase_C");

}

