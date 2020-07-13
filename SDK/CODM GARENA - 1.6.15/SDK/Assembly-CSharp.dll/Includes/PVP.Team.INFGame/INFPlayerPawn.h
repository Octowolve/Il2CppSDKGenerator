#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class INFPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "INFPlayerPawn"));
	}

	template <typename T = uintptr_t> T& m_INFPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLastUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUpArmFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedDistinguish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_INFPlayerInfo() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x404428C))(this);
	}
	template <typename T = bool> T get_NeedForceSwitchWeapon() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x4044354))(this);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x4044398))(this);
	}
	template <typename T = void> T SwitchToLastUsedWeapon() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x4044494))(this);
	}
	template <typename T = void> T RefreshUpArmFX() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x403F85C))(this);
	}
	template <typename T = bool> T IsNeedDistinguish(bool isCreate) {
		return ((T (*)(INFPlayerPawn*, bool))(Il2CppBase() + 0x40446D0))(this, isCreate);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x40448F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToLastUsedWeapon() {
		return ((T (*)(INFPlayerPawn*))(Il2CppBase() + 0x40448FC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedDistinguish(bool P0) {
		return ((T (*)(INFPlayerPawn*, bool))(Il2CppBase() + 0x4044904))(this, P0);
	}

};

}
