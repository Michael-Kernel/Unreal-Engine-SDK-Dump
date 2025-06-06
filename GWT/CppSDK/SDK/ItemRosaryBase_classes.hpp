#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRosaryBase

#include "Basic.hpp"

#include "Snowfall_structs.hpp"
#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ItemRosaryBase.ItemRosaryBase_C
// 0x0008 (0x0088 - 0x0080)
class UItemRosaryBase_C : public USnfItemFlagBase
{
public:
	ESnfRosaryType                                GetType;                                           // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	int32 Blueprint_OnUse(class AActor* Receiver, int32 Count) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRosaryBase_C">();
	}
	static class UItemRosaryBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRosaryBase_C>();
	}
};
static_assert(alignof(UItemRosaryBase_C) == 0x000008, "Wrong alignment on UItemRosaryBase_C");
static_assert(sizeof(UItemRosaryBase_C) == 0x000088, "Wrong size on UItemRosaryBase_C");
static_assert(offsetof(UItemRosaryBase_C, GetType) == 0x000080, "Member 'UItemRosaryBase_C::GetType' has a wrong offset!");

}

