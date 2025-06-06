#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Weapon_1025_ArrowHighPrice

#include "Basic.hpp"

#include "ItemWeaponBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_Weapon_1025_ArrowHighPrice.Item_Weapon_1025_ArrowHighPrice_C
// 0x0000 (0x0088 - 0x0088)
class UItem_Weapon_1025_ArrowHighPrice_C final : public UItemWeaponBase_C
{
public:
	int32 Blueprint_OnUse(class AActor* Receiver, int32 Count) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_Weapon_1025_ArrowHighPrice_C">();
	}
	static class UItem_Weapon_1025_ArrowHighPrice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItem_Weapon_1025_ArrowHighPrice_C>();
	}
};
static_assert(alignof(UItem_Weapon_1025_ArrowHighPrice_C) == 0x000008, "Wrong alignment on UItem_Weapon_1025_ArrowHighPrice_C");
static_assert(sizeof(UItem_Weapon_1025_ArrowHighPrice_C) == 0x000088, "Wrong size on UItem_Weapon_1025_ArrowHighPrice_C");

}

