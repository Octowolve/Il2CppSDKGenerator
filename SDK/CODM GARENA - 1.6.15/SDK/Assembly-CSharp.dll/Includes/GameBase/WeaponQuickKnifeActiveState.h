#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponQuickKnifeActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponQuickKnifeActiveState"));
	}

	template <typename T = uintptr_t> T& m_FireComponentQKnife() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchLastWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7AC7C))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7AD2C))(this);
	}
	template <typename T = void> T SwitchLastWeapon() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7ADC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7AF50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7AF54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchLastWeapon() {
		return ((T (*)(WeaponQuickKnifeActiveState*))(Il2CppBase() + 0x3A7AF58))(this);
	}

};

}
