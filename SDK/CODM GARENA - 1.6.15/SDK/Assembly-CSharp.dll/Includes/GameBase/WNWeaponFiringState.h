#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponFiringState"));
	}

	template <typename T = int32_t> T& m_CostAmmoCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsStopFireSent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCostAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFireInGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = int32_t> T GetCostAmmoCount() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4595D48))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4595DE8))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4595EAC))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4595F88))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x45960CC))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596214))(this);
	}
	template <typename T = void> T WeaponFireInGroup() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596384))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x45964CC))(this);
	}
	template <typename T = void> T StopFireImmediately() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFireInGroup() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFireImmediately() {
		return ((T (*)(WNWeaponFiringState*))(Il2CppBase() + 0x4596798))(this);
	}

};

}
