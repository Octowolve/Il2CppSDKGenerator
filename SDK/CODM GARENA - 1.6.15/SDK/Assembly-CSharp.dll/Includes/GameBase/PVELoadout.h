#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVELoadout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVELoadout"));
	}

	template <typename T = int32_t> T& LoadoutIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LoadoutName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Role() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Melee() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ShowWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MainWeapon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& StickGrenadeSkin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TripmineSkin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& OffWallMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVELoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStickGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTripmine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetOffWallWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T SetPVELoadout(uintptr_t loadoutInfo) {
		return ((T (*)(PVELoadout*, uintptr_t))(Il2CppBase() + 0x2DC7460))(this, loadoutInfo);
	}
	template <typename T = void> T SetRole(uintptr_t item, uintptr_t roleSkin) {
		return ((T (*)(PVELoadout*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC76C0))(this, item, roleSkin);
	}
	template <typename T = void> T SetMelee(uintptr_t item, uintptr_t weaponAttr) {
		return ((T (*)(PVELoadout*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC7970))(this, item, weaponAttr);
	}
	template <typename T = void> T SetShowWeapon(uintptr_t item, uintptr_t weaponAttr) {
		return ((T (*)(PVELoadout*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC7EB0))(this, item, weaponAttr);
	}
	template <typename T = void> T SetMainWeapon(uintptr_t item, uintptr_t weaponAttr) {
		return ((T (*)(PVELoadout*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC8448))(this, item, weaponAttr);
	}
	template <typename T = void> T SetStickGrenade(uintptr_t item) {
		return ((T (*)(PVELoadout*, uintptr_t))(Il2CppBase() + 0x2DC8988))(this, item);
	}
	template <typename T = void> T SetTripmine(uintptr_t item) {
		return ((T (*)(PVELoadout*, uintptr_t))(Il2CppBase() + 0x2DC8B4C))(this, item);
	}
	template <typename T = void> T SetOffWall(Il2CppList<uintptr_t>* confList) {
		return ((T (*)(PVELoadout*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2DC8D10))(this, confList);
	}
	template <typename T = uintptr_t> T GetTargetOffWallWeapon(uint32_t weaponId) {
		return ((T (*)(PVELoadout*, uint32_t))(Il2CppBase() + 0x2DC9298))(this, weaponId);
	}

};

}
