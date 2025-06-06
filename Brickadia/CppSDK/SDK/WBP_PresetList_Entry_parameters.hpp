﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PresetList_Entry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PresetList_Entry.WBP_PresetList_Entry_C.BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature final
{
public:
	class FString                                 NewName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature");
static_assert(sizeof(WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature) == 0x000010, "Wrong size on WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature");
static_assert(offsetof(WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature, NewName) == 0x000000, "Member 'WBP_PresetList_Entry_C_BndEvt__NameEdit_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature::NewName' has a wrong offset!");

// Function WBP_PresetList_Entry.WBP_PresetList_Entry_C.ExecuteUbergraph_WBP_PresetList_Entry
// 0x0198 (0x0198 - 0x0000)
struct WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBRPresetSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0050(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	class FString                                 CallFunc_GetPresetName_ReturnValue;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0010)()
	bool                                          Temp_bool_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DeletePreset_ReturnValue;                 // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPresetName_ReturnValue_1;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_NewName;                // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBRPresetSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RenamePreset_ReturnValue;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry) == 0x000008, "Wrong alignment on WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry");
static_assert(sizeof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry) == 0x000198, "Wrong size on WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, EntryPoint) == 0x000000, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, Temp_byte_Variable) == 0x000010, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, Temp_byte_Variable_1) == 0x000011, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, K2Node_Event_MyGeometry) == 0x000014, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, K2Node_Event_MouseEvent_1) == 0x000050, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_GetPresetName_ReturnValue) == 0x000140, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_GetPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, Temp_bool_Variable) == 0x000160, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_DeletePreset_ReturnValue) == 0x000161, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_DeletePreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_GetPresetName_ReturnValue_1) == 0x000168, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_GetPresetName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, K2Node_ComponentBoundEvent_NewName) == 0x000178, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::K2Node_ComponentBoundEvent_NewName' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000188, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, CallFunc_RenamePreset_ReturnValue) == 0x000190, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::CallFunc_RenamePreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry, K2Node_Select_Default) == 0x000191, "Member 'WBP_PresetList_Entry_C_ExecuteUbergraph_WBP_PresetList_Entry::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PresetList_Entry.WBP_PresetList_Entry_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_PresetList_Entry_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PresetList_Entry_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_PresetList_Entry_C_OnMouseEnter");
static_assert(sizeof(WBP_PresetList_Entry_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_PresetList_Entry_C_OnMouseEnter");
static_assert(offsetof(WBP_PresetList_Entry_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_PresetList_Entry_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PresetList_Entry_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_PresetList_Entry_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_PresetList_Entry.WBP_PresetList_Entry_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_PresetList_Entry_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PresetList_Entry_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_PresetList_Entry_C_OnMouseLeave");
static_assert(sizeof(WBP_PresetList_Entry_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_PresetList_Entry_C_OnMouseLeave");
static_assert(offsetof(WBP_PresetList_Entry_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_PresetList_Entry_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}

