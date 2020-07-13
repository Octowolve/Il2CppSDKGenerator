#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponTempest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponTempest"));
	}

	template <typename T = float> T& m_MinChargeTime() {
		return *(T*)((uintptr_t)this + 0x640);
	}
	template <typename T = uintptr_t> T& _ChargeStatus() {
		return *(T*)((uintptr_t)this + 0x644);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedShowCancelAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponTempest*, uintptr_t, bool))(Il2CppBase() + 0x458A56C))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x458A690))(this);
	}
	template <typename T = uintptr_t> T get_ChargeStatus() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x45895CC))(this);
	}
	template <typename T = void> T set_ChargeStatus(uintptr_t value) {
		return ((T (*)(WeaponTempest*, uintptr_t))(Il2CppBase() + 0x45898D4))(this, value);
	}
	template <typename T = void> T ClearValue() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x458A74C))(this);
	}
	template <typename T = bool> T IsNeedShowCancelAim() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x458A800))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponTempest*, uintptr_t))(Il2CppBase() + 0x458A8B0))(this, param);
	}
	template <typename T = void> T StopCharge() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x4589EF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponTempest*, uintptr_t, bool))(Il2CppBase() + 0x458A990))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ClearValue() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x458A998))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedShowCancelAim() {
		return ((T (*)(WeaponTempest*))(Il2CppBase() + 0x458A9A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponTempest*, uintptr_t))(Il2CppBase() + 0x458A9A8))(this, P0);
	}

};

}
