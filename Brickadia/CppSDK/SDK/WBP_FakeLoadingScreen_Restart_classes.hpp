﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FakeLoadingScreen_Restart

#include "Basic.hpp"

#include "CommonLoadingScreen_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FakeLoadingScreen_Restart.WBP_FakeLoadingScreen_Restart_C
// 0x0038 (0x0308 - 0x02D0)
class UWBP_FakeLoadingScreen_Restart_C final : public UCommonLoadingScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 MainImage;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpinImage;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Frames;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_FakeLoadingScreen_Restart(int32 EntryPoint);
	void FadeInAnim();
	void OnLoadingScreenDismissed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FakeLoadingScreen_Restart_C">();
	}
	static class UWBP_FakeLoadingScreen_Restart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FakeLoadingScreen_Restart_C>();
	}
};
static_assert(alignof(UWBP_FakeLoadingScreen_Restart_C) == 0x000008, "Wrong alignment on UWBP_FakeLoadingScreen_Restart_C");
static_assert(sizeof(UWBP_FakeLoadingScreen_Restart_C) == 0x000308, "Wrong size on UWBP_FakeLoadingScreen_Restart_C");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_FakeLoadingScreen_Restart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, FadeIn) == 0x0002D8, "Member 'UWBP_FakeLoadingScreen_Restart_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, FadeOut) == 0x0002E0, "Member 'UWBP_FakeLoadingScreen_Restart_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, MainImage) == 0x0002E8, "Member 'UWBP_FakeLoadingScreen_Restart_C::MainImage' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, SpinImage) == 0x0002F0, "Member 'UWBP_FakeLoadingScreen_Restart_C::SpinImage' has a wrong offset!");
static_assert(offsetof(UWBP_FakeLoadingScreen_Restart_C, Frames) == 0x0002F8, "Member 'UWBP_FakeLoadingScreen_Restart_C::Frames' has a wrong offset!");

}

