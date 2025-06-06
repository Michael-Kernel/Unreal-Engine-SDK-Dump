#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: People_CheckReact_BTS

#include "Basic.hpp"


namespace SDK::Params
{

// Function People_CheckReact_BTS.People_CheckReact_BTS_C.ExecuteUbergraph_People_CheckReact_BTS
// 0x0030 (0x0030 - 0x0000)
struct People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DoesReact_ReturnValue;                    // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBlackboardValueAsBool_ReturnValue;     // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS) == 0x000008, "Wrong alignment on People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS");
static_assert(sizeof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS) == 0x000030, "Wrong size on People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, EntryPoint) == 0x000000, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::EntryPoint' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, K2Node_Event_OwnerController) == 0x000010, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, K2Node_Event_ControlledPawn) == 0x000018, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_DoesReact_ReturnValue) == 0x000024, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_DoesReact_ReturnValue' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_NotEqual_NameName_ReturnValue) == 0x00002C, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x00002D, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_GetBlackboardValueAsBool_ReturnValue) == 0x00002E, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_GetBlackboardValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS, CallFunc_Not_PreBool_ReturnValue) == 0x00002F, "Member 'People_CheckReact_BTS_C_ExecuteUbergraph_People_CheckReact_BTS::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function People_CheckReact_BTS.People_CheckReact_BTS_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct People_CheckReact_BTS_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(People_CheckReact_BTS_C_ReceiveTickAI) == 0x000008, "Wrong alignment on People_CheckReact_BTS_C_ReceiveTickAI");
static_assert(sizeof(People_CheckReact_BTS_C_ReceiveTickAI) == 0x000018, "Wrong size on People_CheckReact_BTS_C_ReceiveTickAI");
static_assert(offsetof(People_CheckReact_BTS_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'People_CheckReact_BTS_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'People_CheckReact_BTS_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(People_CheckReact_BTS_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'People_CheckReact_BTS_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

