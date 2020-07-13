#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponElectricTripWireFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponElectricTripWireFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C667F0))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C66898))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C669CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C66A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C66A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponElectricTripWireFiringState*))(Il2CppBase() + 0x1C66A84))(this);
	}

};

}
