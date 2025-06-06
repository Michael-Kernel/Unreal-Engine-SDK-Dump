#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TresProj_MagAeroCylinder

#include "Basic.hpp"


namespace SDK::Params
{

// Function TresProj_MagAeroCylinder.TresProj_MagAeroCylinder_C.ExecuteUbergraph_TresProj_MagAeroCylinder
// 0x8000000 (0x8000000 - 0x0000)
struct alignas(0x8000000) TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresCharPawnBase*                      K2Node_ComponentBoundEvent_LaunchedChrPawn;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Height;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTresChrLauncherComponentBase*          K2Node_ComponentBoundEvent_LaunchComponent;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder) == 0x8000000, "Wrong alignment on TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder");
static_assert(sizeof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder) == 0x8000000, "Wrong size on TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder");
static_assert(offsetof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder, EntryPoint) == 0x000000, "Member 'TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder::EntryPoint' has a wrong offset!");
static_assert(offsetof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder, K2Node_ComponentBoundEvent_LaunchedChrPawn) == 0x000008, "Member 'TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder::K2Node_ComponentBoundEvent_LaunchedChrPawn' has a wrong offset!");
static_assert(offsetof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder, K2Node_ComponentBoundEvent_Height) == 0x000010, "Member 'TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder::K2Node_ComponentBoundEvent_Height' has a wrong offset!");
static_assert(offsetof(TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder, K2Node_ComponentBoundEvent_LaunchComponent) == 0x000018, "Member 'TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder::K2Node_ComponentBoundEvent_LaunchComponent' has a wrong offset!");

// Function TresProj_MagAeroCylinder.TresProj_MagAeroCylinder_C.BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature
// 0xC020800 (0xC020800 - 0x0000)
struct alignas(0xC020800) TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature final
{
public:
	class ATresCharPawnBase*                      LaunchedChrPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTresChrLauncherComponentBase*          LaunchComponent;                                   // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature) == 0xC020800, "Wrong alignment on TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature");
static_assert(sizeof(TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature) == 0xC020800, "Wrong size on TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature");
static_assert(offsetof(TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature, LaunchedChrPawn) == 0x000000, "Member 'TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature::LaunchedChrPawn' has a wrong offset!");
static_assert(offsetof(TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature, Height) == 0x000008, "Member 'TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature::Height' has a wrong offset!");
static_assert(offsetof(TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature, LaunchComponent) == 0x000010, "Member 'TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature::LaunchComponent' has a wrong offset!");

}

