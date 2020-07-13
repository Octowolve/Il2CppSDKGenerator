#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadePrepareStateHoldInductionGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadePrepareStateHold_InductionGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCancelThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*, float))(Il2CppBase() + 0x3A50030))(this, DeltaTime);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A501E8))(this);
	}
	template <typename T = bool> T CanCancelThrow() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A50288))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A50328))(this);
	}
	template <typename T = bool> T ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A504A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*, float))(Il2CppBase() + 0x3A50540))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A50544))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanCancelThrow() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A5054C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A50550))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldShowTrackEffect() {
		return ((T (*)(WeaponGrenadePrepareStateHoldInductionGun*))(Il2CppBase() + 0x3A50558))(this);
	}

};

}
