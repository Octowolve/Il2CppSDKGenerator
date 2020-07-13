#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeThrowWeaponActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBlade_ThrowWeaponActiveState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveState*))(Il2CppBase() + 0x3A7FB60))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveState*, float))(Il2CppBase() + 0x3A7FC20))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveState*))(Il2CppBase() + 0x3A7FCC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveState*, float))(Il2CppBase() + 0x3A7FCC8))(this, P0);
	}

};

}
