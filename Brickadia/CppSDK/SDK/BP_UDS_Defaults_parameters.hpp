﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UDS_Defaults

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_UDS_Defaults.BP_UDS_Defaults_C.ExecuteUbergraph_BP_UDS_Defaults
// 0x0020 (0x0020 - 0x0000)
struct BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBRGameUserSettings*                    CallFunc_GetBRGameUserSettings_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults) == 0x000008, "Wrong alignment on BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults");
static_assert(sizeof(BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults) == 0x000020, "Wrong size on BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults");
static_assert(offsetof(BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults, EntryPoint) == 0x000000, "Member 'BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults, CallFunc_GetBRGameUserSettings_ReturnValue) == 0x000018, "Member 'BP_UDS_Defaults_C_ExecuteUbergraph_BP_UDS_Defaults::CallFunc_GetBRGameUserSettings_ReturnValue' has a wrong offset!");

}

