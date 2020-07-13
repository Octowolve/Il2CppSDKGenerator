#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMonkeyBombFiringStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMonkeyBombFiringState_Hold"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T FireStart() {
		return ((T (*)(WeaponMonkeyBombFiringStateHold*))(Il2CppBase() + 0x3A5C200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FireStart() {
		return ((T (*)(WeaponMonkeyBombFiringStateHold*))(Il2CppBase() + 0x3A5C728))(this);
	}

};

}
