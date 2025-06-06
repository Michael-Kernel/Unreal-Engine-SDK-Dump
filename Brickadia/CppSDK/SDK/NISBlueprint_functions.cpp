﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NISBlueprint

#include "Basic.hpp"

#include "NISBlueprint_classes.hpp"
#include "NISBlueprint_parameters.hpp"


namespace SDK
{

// Function NISBlueprint.NISLibrary.GetDefaultNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUNISMode                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUNISMode UNISLibrary::GetDefaultNISMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "GetDefaultNISMode");

	Params::NISLibrary_GetDefaultNISMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUNISMode                               NISMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNISLibrary::GetNISRecommendedScreenPercentage(EUNISMode NISMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "GetNISRecommendedScreenPercentage");

	Params::NISLibrary_GetNISRecommendedScreenPercentage Parms{};

	Parms.NISMode = NISMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                                  MinScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float*                                  MaxScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNISLibrary::GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "GetNISScreenPercentageRange");

	Params::NISLibrary_GetNISScreenPercentageRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;
}


// Function NISBlueprint.NISLibrary.GetSupportedNISModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<EUNISMode>                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<EUNISMode> UNISLibrary::GetSupportedNISModes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "GetSupportedNISModes");

	Params::NISLibrary_GetSupportedNISModes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NISBlueprint.NISLibrary.IsNISModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUNISMode                               NISMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNISLibrary::IsNISModeSupported(EUNISMode NISMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "IsNISModeSupported");

	Params::NISLibrary_IsNISModeSupported Parms{};

	Parms.NISMode = NISMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NISBlueprint.NISLibrary.IsNISSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNISLibrary::IsNISSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "IsNISSupported");

	Params::NISLibrary_IsNISSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   CustomScreenPercentage                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNISLibrary::SetNISCustomScreenPercentage(float CustomScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "SetNISCustomScreenPercentage");

	Params::NISLibrary_SetNISCustomScreenPercentage Parms{};

	Parms.CustomScreenPercentage = CustomScreenPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NISBlueprint.NISLibrary.SetNISMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUNISMode                               NISMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNISLibrary::SetNISMode(EUNISMode NISMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "SetNISMode");

	Params::NISLibrary_SetNISMode Parms{};

	Parms.NISMode = NISMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NISBlueprint.NISLibrary.SetNISSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Sharpness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNISLibrary::SetNISSharpness(float Sharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NISLibrary", "SetNISSharpness");

	Params::NISLibrary_SetNISSharpness Parms{};

	Parms.Sharpness = Sharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

