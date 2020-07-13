#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartGunStock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_GunStock"));
	}

	template <typename T = float> T& m_AimingMovementScaleAdd() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdditionWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartGunStock*, uintptr_t, bool))(Il2CppBase() + 0x2417B2C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartGunStock*))(Il2CppBase() + 0x2417C4C))(this);
	}
	template <typename T = bool> T AdditionWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartGunStock*, bool))(Il2CppBase() + 0x2417D08))(this, active);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartGunStock*, uintptr_t, bool))(Il2CppBase() + 0x2417F30))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_AdditionWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartGunStock*, bool))(Il2CppBase() + 0x2417F34))(this, P0);
	}

};

}
