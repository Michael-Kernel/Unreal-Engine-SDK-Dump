﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PresetList_NewEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PresetList_NewEntry.WBP_PresetList_NewEntry_C.BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature final
{
public:
	class FString                                 NewName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature");
static_assert(sizeof(WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature) == 0x000010, "Wrong size on WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature");
static_assert(offsetof(WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature, NewName) == 0x000000, "Member 'WBP_PresetList_NewEntry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature::NewName' has a wrong offset!");

// Function WBP_PresetList_NewEntry.WBP_PresetList_NewEntry_C.ExecuteUbergraph_WBP_PresetList_NewEntry
// 0x0028 (0x0028 - 0x0000)
struct WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_NewName;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBRPresetSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBRPreset*                              CallFunc_CreatePreset_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry) == 0x000008, "Wrong alignment on WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry");
static_assert(sizeof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry) == 0x000028, "Wrong size on WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry");
static_assert(offsetof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry, EntryPoint) == 0x000000, "Member 'WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry, K2Node_ComponentBoundEvent_NewName) == 0x000008, "Member 'WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry::K2Node_ComponentBoundEvent_NewName' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry, CallFunc_CreatePreset_ReturnValue) == 0x000020, "Member 'WBP_PresetList_NewEntry_C_ExecuteUbergraph_WBP_PresetList_NewEntry::CallFunc_CreatePreset_ReturnValue' has a wrong offset!");

}

