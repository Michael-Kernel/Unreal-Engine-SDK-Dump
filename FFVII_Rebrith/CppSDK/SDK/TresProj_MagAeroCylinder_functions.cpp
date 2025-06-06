#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TresProj_MagAeroCylinder

#include "Basic.hpp"

#include "TresProj_MagAeroCylinder_classes.hpp"
#include "TresProj_MagAeroCylinder_parameters.hpp"


namespace SDK
{

// Function TresProj_MagAeroCylinder.TresProj_MagAeroCylinder_C.ExecuteUbergraph_TresProj_MagAeroCylinder
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATresProj_MagAeroCylinder_C::ExecuteUbergraph_TresProj_MagAeroCylinder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TresProj_MagAeroCylinder_C", "ExecuteUbergraph_TresProj_MagAeroCylinder");

	Params::TresProj_MagAeroCylinder_C_ExecuteUbergraph_TresProj_MagAeroCylinder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TresProj_MagAeroCylinder.TresProj_MagAeroCylinder_C.BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATresCharPawnBase*                LaunchedChrPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTresChrLauncherComponentBase*    LaunchComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATresProj_MagAeroCylinder_C::BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature(class ATresCharPawnBase* LaunchedChrPawn, float Height, class UTresChrLauncherComponentBase* LaunchComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TresProj_MagAeroCylinder_C", "BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature");

	Params::TresProj_MagAeroCylinder_C_BndEvt__TresChrLauncher_K2Node_ComponentBoundEvent_0_TresChrLauncherDoLaunchSignature__DelegateSignature Parms{};

	Parms.LaunchedChrPawn = LaunchedChrPawn;
	Parms.Height = Height;
	Parms.LaunchComponent = LaunchComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TresProj_MagAeroCylinder.TresProj_MagAeroCylinder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATresProj_MagAeroCylinder_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TresProj_MagAeroCylinder_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

