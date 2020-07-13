#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMonkeyBombPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMonkeyBombPrepareState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(WeaponMonkeyBombPrepareState*))(Il2CppBase() + 0x3A5C72C))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponMonkeyBombPrepareState*))(Il2CppBase() + 0x3A5CAE8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponMonkeyBombPrepareState*, float))(Il2CppBase() + 0x3A5CBA0))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToLastUsedWeapon() {
		return ((T (*)(WeaponMonkeyBombPrepareState*))(Il2CppBase() + 0x3A5CC74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponMonkeyBombPrepareState*))(Il2CppBase() + 0x3A5CC78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponMonkeyBombPrepareState*, float))(Il2CppBase() + 0x3A5CC7C))(this, P0);
	}

};

}
