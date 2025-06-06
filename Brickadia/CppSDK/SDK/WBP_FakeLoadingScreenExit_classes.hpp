﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FakeLoadingScreenExit

#include "Basic.hpp"

#include "CommonLoadingScreen_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FakeLoadingScreenExit.WBP_FakeLoadingScreenExit_C
// 0x0020 (0x02F0 - 0x02D0)
class UWBP_FakeLoadingScreenExit_C final : public UCommonLoadingScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 MainImage;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_FakeLoadingScreenExit(int32 EntryPoint);
	void FadeInAnim();
	void OnLoadingScreenDismissed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FakeLoadingScreenExit_C">();
	}
	static class UWBP_FakeLoadingScreenExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FakeLoadingScreenExit_C>();
	}
};
static_assert(alignof(UWBP_FakeLoadingScreenExit_C) == 0x000008, "Wrong alignment on UWBP_FakeLoadingScreenExit_C");
static_assert(sizeof(UWBP_FakeLoadingScreenExit_C) == 0x0002F0, "Wrong size on UWBP_FakeLoadingScreenExit_C");
static_assert(offsetof(UWBP_FakeLoadingScreenExit_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_FakeLoadingScreenExit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreenExit_C, FadeIn) == 0x0002D8, "Member 'UWBP_FakeLoadingScreenExit_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreenExit_C, FadeOut) == 0x0002E0, "Member 'UWBP_FakeLoadingScreenExit_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreenExit_C, MainImage) == 0x0002E8, "Member 'UWBP_FakeLoadingScreenExit_C::MainImage' has a wrong offset!");

}

