#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRWeaponMonkeyBombActiveStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRWeaponMonkeyBombActiveState_Hold"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickTrySwitchToOtherWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T TickTrySwitchToOtherWeapon() {
		return ((T (*)(BRWeaponMonkeyBombActiveStateHold*))(Il2CppBase() + 0x3749218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickTrySwitchToOtherWeapon() {
		return ((T (*)(BRWeaponMonkeyBombActiveStateHold*))(Il2CppBase() + 0x374948C))(this);
	}

};

}
