﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreen

#include "Basic.hpp"

#include "LoadingScreen_classes.hpp"
#include "LoadingScreen_parameters.hpp"


namespace SDK
{

// Function LoadingScreen.LoadingScreenLibrary.GetLoadingFrameIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   NumFrames                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Speed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULoadingScreenLibrary::GetLoadingFrameIndex(int32 NumFrames, float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LoadingScreenLibrary", "GetLoadingFrameIndex");

	Params::LoadingScreenLibrary_GetLoadingFrameIndex Parms{};

	Parms.NumFrames = NumFrames;
	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

