#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.SASGame {

class SASInventoryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.SASGame", "SASInventoryManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFirstSecondWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncWeaponBulletInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateFirstSecondWeapon() {
		return ((T (*)(SASInventoryManager*))(Il2CppBase() + 0x34BD1A8))(this);
	}
	template <typename T = void> T SyncWeaponBulletInfo(Il2CppArray<uintptr_t>* infoSet, int32_t count) {
		return ((T (*)(SASInventoryManager*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x34BD33C))(this, infoSet, count);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateFirstSecondWeapon() {
		return ((T (*)(SASInventoryManager*))(Il2CppBase() + 0x34BD704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SyncWeaponBulletInfo(Il2CppArray<uintptr_t>* P0, int32_t P1) {
		return ((T (*)(SASInventoryManager*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x34BD70C))(this, P0, P1);
	}

};

}
