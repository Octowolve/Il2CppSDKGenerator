#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DoubleBWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DoubleBWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& DoubleBtnObj() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& SingleBtnObj() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& NextAmmoRoot() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& SingleWeaponContainer() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& SingleWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponAmmoCount() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SingleWeaponHolder() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponName() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& m_PveWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& m_PveAmmoWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& m_SingleWeapon() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& m_IsSingleWeapon() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSingleWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSingleWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSingleWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E65B8))(this);
	}
	template <typename T = void> T UpdateShowObject() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E65CC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E67D4))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E7070))(this);
	}
	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E76D0))(this);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(DoubleBWeaponBtnView*, bool))(Il2CppBase() + 0x40E83EC))(this, infinite);
	}
	template <typename T = void> T UpdateSingleWeaponHolderData() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E6D60))(this);
	}
	template <typename T = void> T UpdateSingleWeaponBarView() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E746C))(this);
	}
	template <typename T = void> T SetSingleWeaponIconColor(uintptr_t color) {
		return ((T (*)(DoubleBWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x40E8250))(this, color);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateShowObject() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E8878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E8880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E8884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWeaponInfo() {
		return ((T (*)(DoubleBWeaponBtnView*))(Il2CppBase() + 0x40E8888))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfiniteCarriedAmmo(bool P0) {
		return ((T (*)(DoubleBWeaponBtnView*, bool))(Il2CppBase() + 0x40E888C))(this, P0);
	}

};

}
