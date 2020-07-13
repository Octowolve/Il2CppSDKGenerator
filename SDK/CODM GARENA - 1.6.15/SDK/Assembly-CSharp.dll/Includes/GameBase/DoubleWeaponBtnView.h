#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DoubleWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DoubleWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& NextWeaponContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& NextWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& NextWeaponAmmo() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& m_NextWeaponAmmoCount() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& m_NextWeaponCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& NextWeaponHolder() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& FirstWeaponChosenSprite() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SecondWeaponChosenSprite() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& m_SecondWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_NextWeapon() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_ChosenWeapon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_LastNextAmmoCount() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_LastNextCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& CacheFirstAmmoCount() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& CacheSecondAmmoCount() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& CacheSingleAmmoCount() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAmmoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNextWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNextWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNextWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChosenSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E8890))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E6954))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E7184))(this);
	}
	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E7E00))(this);
	}
	template <typename T = bool> T CheckAmmoUpdate(int32_t CacheAmmoCount, int32_t CurrentAmmoCount, uintptr_t weapon) {
		return ((T (*)(DoubleWeaponBtnView*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x40E8FA4))(this, CacheAmmoCount, CurrentAmmoCount, weapon);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E906C))(this);
	}
	template <typename T = void> T SetSwitchButtonEnabled(bool inEnabled) {
		return ((T (*)(DoubleWeaponBtnView*, bool))(Il2CppBase() + 0x40E91BC))(this, inEnabled);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(DoubleWeaponBtnView*, bool))(Il2CppBase() + 0x40E866C))(this, infinite);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E92E8))(this);
	}
	template <typename T = void> T UpdateNextWeaponHolderData() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E939C))(this);
	}
	template <typename T = void> T UpdateNextWeaponBarView() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E889C))(this);
	}
	template <typename T = void> T SetNextWeaponIconColor(uintptr_t color) {
		return ((T (*)(DoubleWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x40E8E08))(this, color);
	}
	template <typename T = void> T UpdateChosenSprite() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E8B88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E95B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E95BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWeaponInfo() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E95C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUI() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E95CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetSwitchButtonEnabled(bool P0) {
		return ((T (*)(DoubleWeaponBtnView*, bool))(Il2CppBase() + 0x40E95D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfiniteCarriedAmmo(bool P0) {
		return ((T (*)(DoubleWeaponBtnView*, bool))(Il2CppBase() + 0x40E95DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate() {
		return ((T (*)(DoubleWeaponBtnView*))(Il2CppBase() + 0x40E95E4))(this);
	}

};

}
