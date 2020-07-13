#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FastThrowWeaponBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FastThrowWeaponBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTrophySystemPicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCombatAxe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeAutoRecover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThrowWeaponFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForbiddenThrowWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D3AB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D3C18))(this);
	}
	template <typename T = void> T OnTrophySystemPicked(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D3F10))(this, msg);
	}
	template <typename T = void> T OnCombatAxe(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D40F0))(this, msg);
	}
	template <typename T = void> T OnGrenadeAutoRecover(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D43D8))(this, msg);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D46A0))(this);
	}
	template <typename T = void> T OnGrenadeShowed(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D4770))(this, msg);
	}
	template <typename T = void> T OnThrowWeaponFireEnd(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D4828))(this, msg);
	}
	template <typename T = void> T OnForbiddenThrowWeaponFire(uintptr_t msg) {
		return ((T (*)(FastThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x31D4950))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D4ADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D4AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(FastThrowWeaponBtnController*))(Il2CppBase() + 0x31D4AEC))(this);
	}

};

}
