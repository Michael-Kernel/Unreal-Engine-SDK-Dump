#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: APManager_Leader_Target_Player

#include "Basic.hpp"

#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass APManager_Leader_Target_Player.APManager_Leader_Target_Player_C
// 0x0000 (0x00F8 - 0x00F8)
class UAPManager_Leader_Target_Player_C final : public UTresAttackPermissionManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"APManager_Leader_Target_Player_C">();
	}
	static class UAPManager_Leader_Target_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAPManager_Leader_Target_Player_C>();
	}
};
static_assert(alignof(UAPManager_Leader_Target_Player_C) == 0x000008, "Wrong alignment on UAPManager_Leader_Target_Player_C");
static_assert(sizeof(UAPManager_Leader_Target_Player_C) == 0x0000F8, "Wrong size on UAPManager_Leader_Target_Player_C");

}

