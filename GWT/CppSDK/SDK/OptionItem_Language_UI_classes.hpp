#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionItem_Language_UI

#include "Basic.hpp"

#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionItem_Language_UI.OptionItem_Language_UI_C
// 0x0070 (0x04C0 - 0x0450)
class UOptionItem_Language_UI_C final : public USnfOptionItemBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SelectAnim;                                        // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AddPlus;                                           // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AddMinus;                                          // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ChangeIcon;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Left;                                              // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Right;                                             // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderBarImage;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                SliderCircle;                                      // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SliderOverlayBase;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderTextBlock_0;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SliderTextOverlay;                                 // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText_0;                                       // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ValueText_0;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OptionItem_Language_UI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionItem_Language_UI_C">();
	}
	static class UOptionItem_Language_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionItem_Language_UI_C>();
	}
};
static_assert(alignof(UOptionItem_Language_UI_C) == 0x000008, "Wrong alignment on UOptionItem_Language_UI_C");
static_assert(sizeof(UOptionItem_Language_UI_C) == 0x0004C0, "Wrong size on UOptionItem_Language_UI_C");
static_assert(offsetof(UOptionItem_Language_UI_C, UberGraphFrame) == 0x000450, "Member 'UOptionItem_Language_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SelectAnim) == 0x000458, "Member 'UOptionItem_Language_UI_C::SelectAnim' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, AddPlus) == 0x000460, "Member 'UOptionItem_Language_UI_C::AddPlus' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, AddMinus) == 0x000468, "Member 'UOptionItem_Language_UI_C::AddMinus' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, ChangeIcon) == 0x000470, "Member 'UOptionItem_Language_UI_C::ChangeIcon' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, Left) == 0x000478, "Member 'UOptionItem_Language_UI_C::Left' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, Right) == 0x000480, "Member 'UOptionItem_Language_UI_C::Right' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SliderBarImage) == 0x000488, "Member 'UOptionItem_Language_UI_C::SliderBarImage' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SliderCircle) == 0x000490, "Member 'UOptionItem_Language_UI_C::SliderCircle' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SliderOverlayBase) == 0x000498, "Member 'UOptionItem_Language_UI_C::SliderOverlayBase' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SliderTextBlock_0) == 0x0004A0, "Member 'UOptionItem_Language_UI_C::SliderTextBlock_0' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, SliderTextOverlay) == 0x0004A8, "Member 'UOptionItem_Language_UI_C::SliderTextOverlay' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, TitleText_0) == 0x0004B0, "Member 'UOptionItem_Language_UI_C::TitleText_0' has a wrong offset!");
static_assert(offsetof(UOptionItem_Language_UI_C, ValueText_0) == 0x0004B8, "Member 'UOptionItem_Language_UI_C::ValueText_0' has a wrong offset!");

}

