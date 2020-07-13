#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVehicleWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVehicleWeaponView"));
	}

	template <typename T = uintptr_t> T& hotBackGround() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& hotWeapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& weaponIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& hotWeaponIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRVehicleWeaponView*))(Il2CppBase() + 0x2653750))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRVehicleWeaponView*))(Il2CppBase() + 0x265375C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRVehicleWeaponView*))(Il2CppBase() + 0x2653764))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRVehicleWeaponView*, float))(Il2CppBase() + 0x265376C))(this, dt);
	}
	template <typename T = void> T RefreshWeaponHotValue() {
		return ((T (*)(BRVehicleWeaponView*))(Il2CppBase() + 0x26533BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRVehicleWeaponView*, float))(Il2CppBase() + 0x2653A34))(this, P0);
	}

};

}
