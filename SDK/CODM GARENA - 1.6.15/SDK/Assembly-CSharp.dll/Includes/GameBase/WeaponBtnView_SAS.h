#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponBtnViewSAS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponBtnView_SAS"));
	}

	template <typename T = uintptr_t> T& NextAmmoRoot() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& NextWeaponContainer() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& NextWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& NextAmmo() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppString*> T& NextWeaponAmmoCount() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& NextWeaponCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& NextWeaponHolder() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FirstWeaponChosenSprite() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& SecondWeaponChosenSprite() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_NextWeapon() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_ChosenWeapon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& bShowNextWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& OneWeaponBg() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& TwoWeaponBg() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& OneWeaponBoxCollider() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& TwoWeaponBoxCollider() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& bShowOneWeaponBg() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& WeaponIconXOffset() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurWeaponHolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNextWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNextWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNextWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChosenSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T CheckCurWeaponHolder() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5C4D4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5C7C0))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5CED4))(this);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5D748))(this);
	}
	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5DBE0))(this);
	}
	template <typename T = void> T SetSwitchButtonEnabled(bool inEnabled) {
		return ((T (*)(WeaponBtnViewSAS*, bool))(Il2CppBase() + 0x1C5E2A8))(this, inEnabled);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(WeaponBtnViewSAS*, bool))(Il2CppBase() + 0x1C5E3D4))(this, infinite);
	}
	template <typename T = void> T UpdateNextWeaponHolderData() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5CCBC))(this);
	}
	template <typename T = void> T UpdateNextWeaponBarView() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5D1AC))(this);
	}
	template <typename T = void> T SetNextWeaponIconColor(uintptr_t color) {
		return ((T (*)(WeaponBtnViewSAS*, uintptr_t))(Il2CppBase() + 0x1C5E10C))(this, color);
	}
	template <typename T = void> T UpdateChosenSprite() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5D4C8))(this);
	}
	template <typename T = void> T UpdateCurWeaponHolderData() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E4C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E72C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUI() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWeaponInfo() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E738))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetSwitchButtonEnabled(bool P0) {
		return ((T (*)(WeaponBtnViewSAS*, bool))(Il2CppBase() + 0x1C5E73C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfiniteCarriedAmmo(bool P0) {
		return ((T (*)(WeaponBtnViewSAS*, bool))(Il2CppBase() + 0x1C5E740))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCurWeaponHolderData() {
		return ((T (*)(WeaponBtnViewSAS*))(Il2CppBase() + 0x1C5E744))(this);
	}

};

}
