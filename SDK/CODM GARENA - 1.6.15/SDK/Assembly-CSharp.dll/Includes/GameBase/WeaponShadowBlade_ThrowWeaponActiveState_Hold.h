#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeThrowWeaponActiveStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBlade_ThrowWeaponActiveState_Hold"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginSecondaryFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*))(Il2CppBase() + 0x3A7FDEC))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*))(Il2CppBase() + 0x3A7FE84))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*, float))(Il2CppBase() + 0x3A7FF60))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*))(Il2CppBase() + 0x3A80020))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*))(Il2CppBase() + 0x3A80024))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponShadowBladeThrowWeaponActiveStateHold*, float))(Il2CppBase() + 0x3A8002C))(this, P0);
	}

};

}
