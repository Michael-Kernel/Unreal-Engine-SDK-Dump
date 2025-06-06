﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InspectorPropertyRowAlternate

#include "Basic.hpp"

#include "Brickadia_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InspectorPropertyRowAlternate.WBP_InspectorPropertyRowAlternate_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_InspectorPropertyRowAlternate_C final : public UInspectorPropertyRowBase
{
public:
	class UBorder*                                PropertyBorder;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InspectorPropertyRowAlternate_C">();
	}
	static class UWBP_InspectorPropertyRowAlternate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InspectorPropertyRowAlternate_C>();
	}
};
static_assert(alignof(UWBP_InspectorPropertyRowAlternate_C) == 0x000008, "Wrong alignment on UWBP_InspectorPropertyRowAlternate_C");
static_assert(sizeof(UWBP_InspectorPropertyRowAlternate_C) == 0x0002F8, "Wrong size on UWBP_InspectorPropertyRowAlternate_C");
static_assert(offsetof(UWBP_InspectorPropertyRowAlternate_C, PropertyBorder) == 0x0002F0, "Member 'UWBP_InspectorPropertyRowAlternate_C::PropertyBorder' has a wrong offset!");

}

