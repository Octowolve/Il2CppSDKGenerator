#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeFiringStateHoldInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeFiringStateHold_InductionGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A660))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A700))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A7B0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A92C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadeFiringStateHoldInductionGun*))(Il2CppBase() + 0x3A4A934))(this);
	}

};

}
