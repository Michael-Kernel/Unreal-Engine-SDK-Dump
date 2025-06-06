#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQSQueryContext_NpcLeadPoints

#include "Basic.hpp"

#include "EQSQueryContext_NpcLeadPoints_classes.hpp"
#include "EQSQueryContext_NpcLeadPoints_parameters.hpp"


namespace SDK
{

// Function EQSQueryContext_NpcLeadPoints.EQSQueryContext_NpcLeadPoints_C.ProvideLocationsSet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  ResultingLocationSet                                   (Parm, OutParm, ZeroConstructor)

void UEQSQueryContext_NpcLeadPoints_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EQSQueryContext_NpcLeadPoints_C", "ProvideLocationsSet");

	Params::EQSQueryContext_NpcLeadPoints_C_ProvideLocationsSet Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);
}

}

