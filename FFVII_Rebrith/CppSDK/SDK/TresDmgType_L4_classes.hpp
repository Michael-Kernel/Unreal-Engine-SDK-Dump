#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TresDmgType_L4

#include "Basic.hpp"

#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TresDmgType_L4.TresDmgType_L4_C
// 0x0000 (0x0058 - 0x0058)
class UTresDmgType_L4_C final : public UTresDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TresDmgType_L4_C">();
	}
	static class UTresDmgType_L4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTresDmgType_L4_C>();
	}
};
static_assert(alignof(UTresDmgType_L4_C) == 0x000008, "Wrong alignment on UTresDmgType_L4_C");
static_assert(sizeof(UTresDmgType_L4_C) == 0x000058, "Wrong size on UTresDmgType_L4_C");

}

