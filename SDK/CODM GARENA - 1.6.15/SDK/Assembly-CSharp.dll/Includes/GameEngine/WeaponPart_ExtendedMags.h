#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartExtendedMags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_ExtendedMags"));
	}

	template <typename T = int32_t> T& m_ClipAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_CarriedAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& m_MaxAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_ClipAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_CarriedAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_MaxAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& m_PVEClipAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& m_PVECarriedAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& m_PVEMaxAmmoCountAdd() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_PVEClipAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_PVECarriedAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_PVEMaxAmmoCountRate() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdditionWeaponConfigProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponClipAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponPartExtendedMags*, uintptr_t, bool))(Il2CppBase() + 0x2416E60))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponPartExtendedMags*))(Il2CppBase() + 0x2416FDC))(this);
	}
	template <typename T = bool> T ResetWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartExtendedMags*, bool))(Il2CppBase() + 0x2417098))(this, active);
	}
	template <typename T = bool> T AdditionWeaponConfigProperty(bool active) {
		return ((T (*)(WeaponPartExtendedMags*, bool))(Il2CppBase() + 0x2417148))(this, active);
	}
	template <typename T = void> T GetWeaponClipAmmoCount(uintptr_t clipAmmoCount, uintptr_t carriedAmmoCount, uintptr_t maxAmmoCout) {
		return ((T (*)(WeaponPartExtendedMags*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x241750C))(this, clipAmmoCount, carriedAmmoCount, maxAmmoCout);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponPartExtendedMags*, uintptr_t, bool))(Il2CppBase() + 0x24175C8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_ResetWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartExtendedMags*, bool))(Il2CppBase() + 0x24175CC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_AdditionWeaponConfigProperty(bool P0) {
		return ((T (*)(WeaponPartExtendedMags*, bool))(Il2CppBase() + 0x24175D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetWeaponClipAmmoCount(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(WeaponPartExtendedMags*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24175D4))(this, P0, P1, P2);
	}

};

}
