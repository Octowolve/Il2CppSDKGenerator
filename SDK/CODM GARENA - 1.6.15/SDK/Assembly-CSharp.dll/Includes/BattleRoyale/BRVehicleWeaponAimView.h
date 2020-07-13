#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVehicleWeaponAimView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVehicleWeaponAimView"));
	}

	template <typename T = uintptr_t> T& progressBar() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& overHotTxt() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponHotValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(BRVehicleWeaponAimView*))(Il2CppBase() + 0x2652DE0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRVehicleWeaponAimView*))(Il2CppBase() + 0x2652DEC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRVehicleWeaponAimView*))(Il2CppBase() + 0x2652DF4))(this);
	}
	template <typename T = void> T RefreshWeaponHotValue() {
		return ((T (*)(BRVehicleWeaponAimView*))(Il2CppBase() + 0x265275C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRVehicleWeaponAimView*))(Il2CppBase() + 0x2652EE0))(this);
	}

};

}
