﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FolderPathEntryBase

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.ExecuteUbergraph_WBP_FolderPathEntryBase
// 0x000C (0x000C - 0x0000)
struct WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase) == 0x000004, "Wrong alignment on WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase");
static_assert(sizeof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase) == 0x00000C, "Wrong size on WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, EntryPoint) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, K2Node_Event_IsDesignTime) == 0x000006, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, CallFunc_IsValid_ReturnValue_2) == 0x000007, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase, CallFunc_IsValid_ReturnValue_3) == 0x000008, "Member 'WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDragEnter
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_FolderPathEntryBase_C_OnDragEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_OnDragEnter) == 0x000008, "Wrong alignment on WBP_FolderPathEntryBase_C_OnDragEnter");
static_assert(sizeof(WBP_FolderPathEntryBase_C_OnDragEnter) == 0x0000C0, "Wrong size on WBP_FolderPathEntryBase_C_OnDragEnter");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, MyGeometry) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, PointerEvent) == 0x000038, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, Operation) == 0x0000B0, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::Operation' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000B9, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragEnter, CallFunc_BooleanAND_ReturnValue) == 0x0000BA, "Member 'WBP_FolderPathEntryBase_C_OnDragEnter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDragLeave
// 0x0088 (0x0088 - 0x0000)
struct WBP_FolderPathEntryBase_C_OnDragLeave final
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_OnDragLeave) == 0x000008, "Wrong alignment on WBP_FolderPathEntryBase_C_OnDragLeave");
static_assert(sizeof(WBP_FolderPathEntryBase_C_OnDragLeave) == 0x000088, "Wrong size on WBP_FolderPathEntryBase_C_OnDragLeave");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragLeave, PointerEvent) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_OnDragLeave::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragLeave, Operation) == 0x000078, "Member 'WBP_FolderPathEntryBase_C_OnDragLeave::Operation' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragLeave, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'WBP_FolderPathEntryBase_C_OnDragLeave::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragLeave, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000081, "Member 'WBP_FolderPathEntryBase_C_OnDragLeave::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDragLeave, CallFunc_BooleanAND_ReturnValue) == 0x000082, "Member 'WBP_FolderPathEntryBase_C_OnDragLeave::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDrop
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_FolderPathEntryBase_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_OnDrop) == 0x000008, "Wrong alignment on WBP_FolderPathEntryBase_C_OnDrop");
static_assert(sizeof(WBP_FolderPathEntryBase_C_OnDrop) == 0x0000C0, "Wrong size on WBP_FolderPathEntryBase_C_OnDrop");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, PointerEvent) == 0x000038, "Member 'WBP_FolderPathEntryBase_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, Operation) == 0x0000B0, "Member 'WBP_FolderPathEntryBase_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, ReturnValue) == 0x0000B8, "Member 'WBP_FolderPathEntryBase_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'WBP_FolderPathEntryBase_C_OnDrop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000BA, "Member 'WBP_FolderPathEntryBase_C_OnDrop::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_OnDrop, CallFunc_BooleanAND_ReturnValue) == 0x0000BB, "Member 'WBP_FolderPathEntryBase_C_OnDrop::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FolderPathEntryBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FolderPathEntryBase_C_PreConstruct");
static_assert(sizeof(WBP_FolderPathEntryBase_C_PreConstruct) == 0x000001, "Wrong size on WBP_FolderPathEntryBase_C_PreConstruct");
static_assert(offsetof(WBP_FolderPathEntryBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.SetPathSegmentInfo
// 0x0020 (0x0020 - 0x0000)
struct WBP_FolderPathEntryBase_C_SetPathSegmentInfo final
{
public:
	int32                                         PathSegmentIndex_0;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PathSegmentText_0;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FolderPathEntryBase_C_SetPathSegmentInfo) == 0x000008, "Wrong alignment on WBP_FolderPathEntryBase_C_SetPathSegmentInfo");
static_assert(sizeof(WBP_FolderPathEntryBase_C_SetPathSegmentInfo) == 0x000020, "Wrong size on WBP_FolderPathEntryBase_C_SetPathSegmentInfo");
static_assert(offsetof(WBP_FolderPathEntryBase_C_SetPathSegmentInfo, PathSegmentIndex_0) == 0x000000, "Member 'WBP_FolderPathEntryBase_C_SetPathSegmentInfo::PathSegmentIndex_0' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_SetPathSegmentInfo, PathSegmentText_0) == 0x000008, "Member 'WBP_FolderPathEntryBase_C_SetPathSegmentInfo::PathSegmentText_0' has a wrong offset!");
static_assert(offsetof(WBP_FolderPathEntryBase_C_SetPathSegmentInfo, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_FolderPathEntryBase_C_SetPathSegmentInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

