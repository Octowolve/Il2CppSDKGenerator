#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadePrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadePrepareState"));
	}

	template <typename T = float> T& m_DelayThrowWeaponTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FireElapse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_GrenadeFired() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_GrenadeIsReady() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_GrenadeCanceling() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ThrowProjectileTrackEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mQuickThrowPrepareTime() {
		return *(T*)((uintptr_t)this + 0x30);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedSwitchLastWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = float> T get_QuickThrowEndTime() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4B314))(this);
	}
	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4B32C))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4B3E8))(this);
	}
	template <typename T = void> T ToggleRotation(bool open) {
		return ((T (*)(WeaponGrenadePrepareState*, bool))(Il2CppBase() + 0x3A4BB5C))(this, open);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4BCE4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4BDA8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4BF20))(this);
	}
	template <typename T = void> T ThrowGrenade() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4C03C))(this);
	}
	template <typename T = bool> T IsNeedSwitchLastWeapon() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4C6CC))(this);
	}
	template <typename T = void> T HideLine() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4C884))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadePrepareState*, float))(Il2CppBase() + 0x3A4C988))(this, DeltaTime);
	}
	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4CC48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4CD1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4CD24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4CD2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponGrenadePrepareState*))(Il2CppBase() + 0x3A4CD34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadePrepareState*, float))(Il2CppBase() + 0x3A4CD3C))(this, P0);
	}

};

}
