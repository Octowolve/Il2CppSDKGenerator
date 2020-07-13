#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentShadowBladeThrowWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ShadowBlade_ThrowWeapon"));
	}

	template <typename T = int32_t> T& m_FastThrow() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AmmoCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentShadowBladeThrowWeapon*, uintptr_t, bool))(Il2CppBase() + 0x23FC3EC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentShadowBladeThrowWeapon*))(Il2CppBase() + 0x23FC50C))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentShadowBladeThrowWeapon*))(Il2CppBase() + 0x23FC5C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentShadowBladeThrowWeapon*, uintptr_t, bool))(Il2CppBase() + 0x23FC668))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_AmmoCanFire() {
		return ((T (*)(WeaponFireComponentShadowBladeThrowWeapon*))(Il2CppBase() + 0x23FC66C))(this);
	}

};

}
