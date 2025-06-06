#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultGameEnvSystem

#include "Basic.hpp"

#include "DefaultGameEnvSystem_classes.hpp"
#include "DefaultGameEnvSystem_parameters.hpp"


namespace SDK
{

// Function DefaultGameEnvSystem.DefaultGameEnvSystem_C.ExecuteUbergraph_DefaultGameEnvSystem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultGameEnvSystem_C::ExecuteUbergraph_DefaultGameEnvSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultGameEnvSystem_C", "ExecuteUbergraph_DefaultGameEnvSystem");

	Params::DefaultGameEnvSystem_C_ExecuteUbergraph_DefaultGameEnvSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultGameEnvSystem.DefaultGameEnvSystem_C.Blueprint_PostUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultGameEnvSystem_C::Blueprint_PostUpdate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultGameEnvSystem_C", "Blueprint_PostUpdate");

	Params::DefaultGameEnvSystem_C_Blueprint_PostUpdate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultGameEnvSystem.DefaultGameEnvSystem_C.LineTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ActorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETraceTypeQuery                         TraceChannel_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     TraceColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RTPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutHitDistance                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OutHitActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultGameEnvSystem_C::LineTrace(const struct FVector& ActorLocation, const struct FVector& Vector, float MaxDistance, ETraceTypeQuery TraceChannel_0, const struct FLinearColor& TraceColor, class FName RTPC, float* OutHitDistance, class AActor** OutHitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultGameEnvSystem_C", "LineTrace");

	Params::DefaultGameEnvSystem_C_LineTrace Parms{};

	Parms.ActorLocation = std::move(ActorLocation);
	Parms.Vector = std::move(Vector);
	Parms.MaxDistance = MaxDistance;
	Parms.TraceChannel_0 = TraceChannel_0;
	Parms.TraceColor = std::move(TraceColor);
	Parms.RTPC = RTPC;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHitDistance != nullptr)
		*OutHitDistance = Parms.OutHitDistance;

	if (OutHitActor != nullptr)
		*OutHitActor = Parms.OutHitActor;
}


// Function DefaultGameEnvSystem.DefaultGameEnvSystem_C.PrintDistanceAndActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StringPrefix                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DisplayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultGameEnvSystem_C::PrintDistanceAndActor(const class FString& StringPrefix, class AActor* Actor, float Distance, const struct FLinearColor& TextColor, float DisplayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultGameEnvSystem_C", "PrintDistanceAndActor");

	Params::DefaultGameEnvSystem_C_PrintDistanceAndActor Parms{};

	Parms.StringPrefix = std::move(StringPrefix);
	Parms.Actor = Actor;
	Parms.Distance = Distance;
	Parms.TextColor = std::move(TextColor);
	Parms.DisplayTime = DisplayTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

