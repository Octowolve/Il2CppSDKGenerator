#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRWeaponGrenadeFiringStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRWeaponGrenadeFiringState_Hold"));
	}

	template <typename T = bool> T& m_ShoudSwitchToNextWeapon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_isPickUpGrenade() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3748510))(this);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x37485F0))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3748698))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3748820))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldSwitchToNextWeapon() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3748828))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToNextWeapon() {
		return ((T (*)(BRWeaponGrenadeFiringStateHold*))(Il2CppBase() + 0x3748830))(this);
	}

};

}
