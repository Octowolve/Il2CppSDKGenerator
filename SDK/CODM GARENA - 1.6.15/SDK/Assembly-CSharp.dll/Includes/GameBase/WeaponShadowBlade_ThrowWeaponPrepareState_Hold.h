#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeThrowWeaponPrepareStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBlade_ThrowWeaponPrepareState_Hold"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickShowLineAndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A80760))(this);
	}
	template <typename T = void> T BeginSecondaryFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A807F8))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A8089C))(this);
	}
	template <typename T = void> T TickShowLineAndFire(float deltaTime) {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*, float))(Il2CppBase() + 0x3A80998))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A80BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginSecondaryFire() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A80BF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*))(Il2CppBase() + 0x3A80BF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickShowLineAndFire(float P0) {
		return ((T (*)(WeaponShadowBladeThrowWeaponPrepareStateHold*, float))(Il2CppBase() + 0x3A80BFC))(this, P0);
	}

};

}
