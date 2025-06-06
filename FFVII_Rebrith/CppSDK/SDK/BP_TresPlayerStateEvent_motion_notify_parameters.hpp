#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEvent_motion_notify

#include "Basic.hpp"

#include "TresGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_TresPlayerStateEvent_motion_notify.BP_TresPlayerStateEvent_motion_notify_C.ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify
// 0x8020800 (0x8020800 - 0x0000)
struct alignas(0x8020800) BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FViewTargetTransitionParamsEx          CallFunc_SetTresCameraTransitionParams_ReturnValue; // 0x0004(0x0014)(NoDestructor)
	struct FViewTargetTransitionParamsEx          CallFunc_SetTresCameraTransitionParams_ReturnValue2; // 0x0018(0x0014)(NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresCameraAnim*                        CallFunc_BP_SpawnTresCameraAnim_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresPlayerPawnBase*                    CallFunc_GetLocalTresPlayerPawnBase_ReturnValue;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FViewTargetTransitionParamsEx          CallFunc_SetTresCameraTransitionParams_ReturnValue3; // 0x0040(0x0014)(NoDestructor)
	struct FViewTargetTransitionParamsEx          CallFunc_SetTresCameraTransitionParams_ReturnValue4; // 0x0054(0x0014)(NoDestructor)
	class ATresCharPawnBase*                      K2Node_Event_SendActor;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_AnimSeqName;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETresAnimNotifyBpEventID                      K2Node_Event_EventID;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Param;                                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresPlayerPawnBase*                    CallFunc_GetLocalTresPlayerPawnBase_ReturnValue2;  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue3;         // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresCameraAnim*                        CallFunc_BP_SpawnTresCameraAnim_ReturnValue2;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresPlayerPawnBase*                    CallFunc_GetLocalTresPlayerPawnBase_ReturnValue3;  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify) == 0x8020800, "Wrong alignment on BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify");
static_assert(sizeof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify) == 0x8020800, "Wrong size on BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, EntryPoint) == 0x000000, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_SetTresCameraTransitionParams_ReturnValue) == 0x000004, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_SetTresCameraTransitionParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_SetTresCameraTransitionParams_ReturnValue2) == 0x000018, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_SetTresCameraTransitionParams_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_BP_SpawnTresCameraAnim_ReturnValue) == 0x000030, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_BP_SpawnTresCameraAnim_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_GetLocalTresPlayerPawnBase_ReturnValue) == 0x000038, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_GetLocalTresPlayerPawnBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_SetTresCameraTransitionParams_ReturnValue3) == 0x000040, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_SetTresCameraTransitionParams_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_SetTresCameraTransitionParams_ReturnValue4) == 0x000054, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_SetTresCameraTransitionParams_ReturnValue4' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, K2Node_Event_SendActor) == 0x000068, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::K2Node_Event_SendActor' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, K2Node_Event_AnimSeqName) == 0x000070, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::K2Node_Event_AnimSeqName' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, K2Node_Event_EventID) == 0x000078, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::K2Node_Event_EventID' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, K2Node_Event_Param) == 0x00007C, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::K2Node_Event_Param' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_GetLocalTresPlayerPawnBase_ReturnValue2) == 0x000080, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_GetLocalTresPlayerPawnBase_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000088, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000089, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_EqualEqual_NameName_ReturnValue2) == 0x00008A, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_EqualEqual_NameName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_EqualEqual_NameName_ReturnValue3) == 0x00008B, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_EqualEqual_NameName_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_BP_SpawnTresCameraAnim_ReturnValue2) == 0x000090, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_BP_SpawnTresCameraAnim_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify, CallFunc_GetLocalTresPlayerPawnBase_ReturnValue3) == 0x000098, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ExecuteUbergraph_BP_TresPlayerStateEvent_motion_notify::CallFunc_GetLocalTresPlayerPawnBase_ReturnValue3' has a wrong offset!");

// Function BP_TresPlayerStateEvent_motion_notify.BP_TresPlayerStateEvent_motion_notify_C.ReceiveAnimNotifyStartBpEvent
// 0x0018 (0x0018 - 0x0000)
struct BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent final
{
public:
	class ATresCharPawnBase*                      SendActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimSeqName;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETresAnimNotifyBpEventID                      EventID;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param;                                             // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent) == 0x000008, "Wrong alignment on BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent");
static_assert(sizeof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent) == 0x000018, "Wrong size on BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent, SendActor) == 0x000000, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent::SendActor' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent, AnimSeqName) == 0x000008, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent::AnimSeqName' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent, EventID) == 0x000010, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent::EventID' has a wrong offset!");
static_assert(offsetof(BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent, Param) == 0x000014, "Member 'BP_TresPlayerStateEvent_motion_notify_C_ReceiveAnimNotifyStartBpEvent::Param' has a wrong offset!");

}

