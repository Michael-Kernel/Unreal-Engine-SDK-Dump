#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Costume_2000

#include "Basic.hpp"

#include "ItemCostumeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_Costume_2000.Item_Costume_2000_C
// 0x0000 (0x0090 - 0x0090)
class UItem_Costume_2000_C final : public UItemCostumeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_Costume_2000_C">();
	}
	static class UItem_Costume_2000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItem_Costume_2000_C>();
	}
};
static_assert(alignof(UItem_Costume_2000_C) == 0x000008, "Wrong alignment on UItem_Costume_2000_C");
static_assert(sizeof(UItem_Costume_2000_C) == 0x000090, "Wrong size on UItem_Costume_2000_C");

}

