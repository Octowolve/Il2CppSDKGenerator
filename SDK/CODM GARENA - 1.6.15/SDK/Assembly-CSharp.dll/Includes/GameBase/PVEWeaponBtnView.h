#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& DoubleBtnObj() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& SingleBtnObj() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& FirstPAPLevel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& SecondPAPLevel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& FirstPAPLevelLabel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& SecondPAPLevelLabel() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& FirstPAPLevelBase() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SecondPAPLevelBase() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LevelColors() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& FirstWeaponDefault() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& NextWeaponDefault() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& NextAmmoRoot() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& SingleWeaponContainer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& SingleWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponAmmoCount() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponCarriedAmmo() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& SingleWeaponHolder() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& m_SingleWeaponName() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& m_PveWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& m_PveAmmoWeaponInfIcon() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& m_SingleWeapon() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponPAPLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAmmoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfiniteCarriedAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNextWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSingleWeaponHolderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSingleWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSingleWeaponIconColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DCFB40))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DCFB54))(this);
	}
	template <typename T = void> T UpdateWeaponPAPLevel() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DCFEF0))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD0474))(this);
	}
	template <typename T = void> T SetWeaponInfo() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD07F0))(this);
	}
	template <typename T = void> T UpdateShowObject() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD10A4))(this);
	}
	template <typename T = bool> T CheckAmmoUpdate(int32_t CacheAmmoCount, int32_t CurrentAmmoCount, uintptr_t weapon) {
		return ((T (*)(PVEWeaponBtnView*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2DD128C))(this, CacheAmmoCount, CurrentAmmoCount, weapon);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD14B0))(this);
	}
	template <typename T = void> T SetInfiniteCarriedAmmo(bool infinite) {
		return ((T (*)(PVEWeaponBtnView*, bool))(Il2CppBase() + 0x2DD1B58))(this, infinite);
	}
	template <typename T = void> T UpdateCurWeaponHolderData() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1DDC))(this);
	}
	template <typename T = void> T UpdateNextWeaponHolderData() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1E8C))(this);
	}
	template <typename T = void> T UpdateSingleWeaponHolderData() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DCFCD8))(this);
	}
	template <typename T = void> T UpdateSingleWeaponBarView() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD058C))(this);
	}
	template <typename T = void> T SetSingleWeaponIconColor(uintptr_t color) {
		return ((T (*)(PVEWeaponBtnView*, uintptr_t))(Il2CppBase() + 0x2DD0F08))(this, color);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetWeaponInfo() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateShowObject() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F54))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckAmmoUpdate(int32_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(PVEWeaponBtnView*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2DD1F5C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetUI() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInfiniteCarriedAmmo(bool P0) {
		return ((T (*)(PVEWeaponBtnView*, bool))(Il2CppBase() + 0x2DD1F84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCurWeaponHolderData() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateNextWeaponHolderData() {
		return ((T (*)(PVEWeaponBtnView*))(Il2CppBase() + 0x2DD1F94))(this);
	}

};

}
