#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveIcon_UI

#include "Basic.hpp"

#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SaveIcon_UI.SaveIcon_UI_C
// 0x0040 (0x0328 - 0x02E8)
class USaveIcon_UI_C final : public USnfUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SaveAnim;                                          // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dot1;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot2;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Dot3;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DotTriangle;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Triangle;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WireTriangle;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SaveIcon_UI(int32 EntryPoint);
	void Construct();
	void PlayAnim();
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SaveIcon_UI_C">();
	}
	static class USaveIcon_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveIcon_UI_C>();
	}
};
static_assert(alignof(USaveIcon_UI_C) == 0x000008, "Wrong alignment on USaveIcon_UI_C");
static_assert(sizeof(USaveIcon_UI_C) == 0x000328, "Wrong size on USaveIcon_UI_C");
static_assert(offsetof(USaveIcon_UI_C, UberGraphFrame) == 0x0002E8, "Member 'USaveIcon_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, SaveAnim) == 0x0002F0, "Member 'USaveIcon_UI_C::SaveAnim' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, Dot1) == 0x0002F8, "Member 'USaveIcon_UI_C::Dot1' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, Dot2) == 0x000300, "Member 'USaveIcon_UI_C::Dot2' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, Dot3) == 0x000308, "Member 'USaveIcon_UI_C::Dot3' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, DotTriangle) == 0x000310, "Member 'USaveIcon_UI_C::DotTriangle' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, Triangle) == 0x000318, "Member 'USaveIcon_UI_C::Triangle' has a wrong offset!");
static_assert(offsetof(USaveIcon_UI_C, WireTriangle) == 0x000320, "Member 'USaveIcon_UI_C::WireTriangle' has a wrong offset!");

}

