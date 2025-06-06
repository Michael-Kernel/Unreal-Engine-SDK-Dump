#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HandSpectrum_AC

#include "Basic.hpp"

#include "HandSpectrum_AC_classes.hpp"
#include "HandSpectrum_AC_parameters.hpp"


namespace SDK
{

// Function HandSpectrum_AC.HandSpectrum_AC_C.ExecuteUbergraph_HandSpectrum_AC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHandSpectrum_AC_C::ExecuteUbergraph_HandSpectrum_AC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "ExecuteUbergraph_HandSpectrum_AC");

	Params::HandSpectrum_AC_C_ExecuteUbergraph_HandSpectrum_AC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.OnNotifyHit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Causer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHandSpectrum_AC_C::OnNotifyHit(class AActor* HitActor, class AActor* Causer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "OnNotifyHit");

	Params::HandSpectrum_AC_C_OnNotifyHit Parms{};

	Parms.HitActor = HitActor;
	Parms.Causer = Causer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.StartHandSpectrumEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// ESnfWeaponType                          EffectType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              LeftHandLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize              RightLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AHandSpectrum_AC_C::StartHandSpectrumEffect(ESnfWeaponType EffectType, const struct FVector_NetQuantize& LeftHandLocation, const struct FVector_NetQuantize& RightLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "StartHandSpectrumEffect");

	Params::HandSpectrum_AC_C_StartHandSpectrumEffect Parms{};

	Parms.EffectType = EffectType;
	Parms.LeftHandLocation = std::move(LeftHandLocation);
	Parms.RightLocation = std::move(RightLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.PlaybackLaunchEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   EffectType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LeftHandLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RightHandLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHandSpectrum_AC_C::PlaybackLaunchEffect(uint8 EffectType, const struct FVector& LeftHandLocation, const struct FVector& RightHandLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "PlaybackLaunchEffect");

	Params::HandSpectrum_AC_C_PlaybackLaunchEffect Parms{};

	Parms.EffectType = EffectType;
	Parms.LeftHandLocation = std::move(LeftHandLocation);
	Parms.RightHandLocation = std::move(RightHandLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.SetupFXPropActor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AHandSpectrum_AC_C::SetupFXPropActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "SetupFXPropActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.OnEquipCallbackEvent
// (BlueprintCallable, BlueprintEvent)

void AHandSpectrum_AC_C::OnEquipCallbackEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "OnEquipCallbackEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHandSpectrum_AC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.SetRadialCenterOnGameVector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHandSpectrum_AC_C::SetRadialCenterOnGameVector(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "SetRadialCenterOnGameVector");

	Params::HandSpectrum_AC_C_SetRadialCenterOnGameVector Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HandSpectrum_AC.HandSpectrum_AC_C.IsHitIgnoreActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Causer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InHitActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCheckTeamId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bCheckOwner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bCheckClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AHandSpectrum_AC_C::IsHitIgnoreActor(const class AActor* Causer, const class AActor* InHitActor, bool bCheckTeamId, bool bCheckOwner, bool bCheckClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HandSpectrum_AC_C", "IsHitIgnoreActor");

	Params::HandSpectrum_AC_C_IsHitIgnoreActor Parms{};

	Parms.Causer = Causer;
	Parms.InHitActor = InHitActor;
	Parms.bCheckTeamId = bCheckTeamId;
	Parms.bCheckOwner = bCheckOwner;
	Parms.bCheckClass = bCheckClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

