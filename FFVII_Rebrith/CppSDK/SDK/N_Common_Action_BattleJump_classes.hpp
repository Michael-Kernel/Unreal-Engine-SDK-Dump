#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: N_Common_Action_BattleJump

#include "Basic.hpp"

#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass n_Common_Action_BattleJump.n_Common_Action_BattleJump_C
// 0x0000 (0x11553400 - 0x11553400)
class UN_Common_Action_BattleJump_C final : public UTresNpcAttackDefinitionJumpBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"n_Common_Action_BattleJump_C">();
	}
	static class UN_Common_Action_BattleJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UN_Common_Action_BattleJump_C>();
	}
};
static_assert(alignof(UN_Common_Action_BattleJump_C) == 0x11553400, "Wrong alignment on UN_Common_Action_BattleJump_C");
static_assert(sizeof(UN_Common_Action_BattleJump_C) == 0x11553400, "Wrong size on UN_Common_Action_BattleJump_C");

}

