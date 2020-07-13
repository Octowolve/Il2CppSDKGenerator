#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FastThrowWeaponBtnViewSAS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FastThrowWeaponBtnView_SAS"));
	}

	template <typename T = int32_t> T& ThrowWeaponReloadTime() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LoadingSprite() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& LastShowLoadingSpriteAlpha() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& LastShowWeaponIconAlpha() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& bReloaded() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrenadeAutoReload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateContent(bool force) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, bool))(Il2CppBase() + 0x31D940C))(this, force);
	}
	template <typename T = void> T SetGrenadeAutoReload(float reloadTime, uintptr_t grenadeType) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, float, uintptr_t))(Il2CppBase() + 0x31D98B0))(this, reloadTime, grenadeType);
	}
	template <typename T = void> T OnThrowWeaponFireEnd(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, uintptr_t))(Il2CppBase() + 0x31D99D8))(this, msg);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, float))(Il2CppBase() + 0x31D9BAC))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateContent(bool P0) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, bool))(Il2CppBase() + 0x31DA050))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetGrenadeAutoReload(float P0, uintptr_t P1) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, float, uintptr_t))(Il2CppBase() + 0x31DA054))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnThrowWeaponFireEnd(uintptr_t P0) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, uintptr_t))(Il2CppBase() + 0x31DA058))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(FastThrowWeaponBtnViewSAS*, float))(Il2CppBase() + 0x31DA05C))(this, P0);
	}

};

}
