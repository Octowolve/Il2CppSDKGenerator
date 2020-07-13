#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVehicleWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVehicleWeaponController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponHotValueChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x2652F8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x2653030))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x265317C))(this);
	}
	template <typename T = void> T OnWeaponHotValueChanged(uintptr_t msg) {
		return ((T (*)(BRVehicleWeaponController*, uintptr_t))(Il2CppBase() + 0x26532A4))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x2653694))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x265369C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRVehicleWeaponController*))(Il2CppBase() + 0x26536A4))(this);
	}

};

}
