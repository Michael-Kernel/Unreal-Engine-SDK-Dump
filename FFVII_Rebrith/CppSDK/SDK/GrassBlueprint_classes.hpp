#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrassBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GrassBlueprint.GrassBlueprint_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
class AGrassBlueprint_C final : public ATresGrassShaderController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x6F26)(Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard1;                                        // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WindDirection;                                     // 0x0470(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSpeed;                                         // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSize;                                          // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindPower;                                         // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GrassBlueprint(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void MulGrassPower(int32 InIndex, float InPower);
	void ReceiveBeginPlay();
	void SetGrassParameter(int32 InIndex, const struct FVector& InPosition, float InRadius, float InPower, int32 InType, float InDetailPower);
	void UserConstructionScript();
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GrassBlueprint_C">();
	}
	static class AGrassBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrassBlueprint_C>();
	}
};
static_assert(alignof(AGrassBlueprint_C) == 0x1EF72E00, "Wrong alignment on AGrassBlueprint_C");
static_assert(sizeof(AGrassBlueprint_C) == 0x1EF72E00, "Wrong size on AGrassBlueprint_C");
static_assert(offsetof(AGrassBlueprint_C, UberGraphFrame) == 0x000460, "Member 'AGrassBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGrassBlueprint_C, Billboard1) == 0x000468, "Member 'AGrassBlueprint_C::Billboard1' has a wrong offset!");
static_assert(offsetof(AGrassBlueprint_C, WindDirection) == 0x000470, "Member 'AGrassBlueprint_C::WindDirection' has a wrong offset!");
static_assert(offsetof(AGrassBlueprint_C, WindSpeed) == 0x00047C, "Member 'AGrassBlueprint_C::WindSpeed' has a wrong offset!");
static_assert(offsetof(AGrassBlueprint_C, WindSize) == 0x000480, "Member 'AGrassBlueprint_C::WindSize' has a wrong offset!");
static_assert(offsetof(AGrassBlueprint_C, WindPower) == 0x000484, "Member 'AGrassBlueprint_C::WindPower' has a wrong offset!");

}

