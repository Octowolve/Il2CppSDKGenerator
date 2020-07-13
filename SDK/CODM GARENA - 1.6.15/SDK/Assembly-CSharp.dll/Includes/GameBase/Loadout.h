#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Loadout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Loadout"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_InventoryList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PerkDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mGrenadeDataList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BagName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& m_BagId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& Bag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& Hat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& Clothes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ClotherType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& Suit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& WingSuit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& WingSuitTail() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Parachute() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_RoleData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = unsigned char> T& m_DefaultWeaponSlot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_DefaultWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_DefaultWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mPriamryWeapon() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mSecondaryWeapon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInventoryInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDefaultWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_InventoryList() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960B84))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PerkDataList() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960B8C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GrenadeDataList() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960B94))(this);
	}
	template <typename T = uint32_t> T get_BagId() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960B9C))(this);
	}
	template <typename T = void> T set_BagId(uint32_t value) {
		return ((T (*)(Loadout*, uint32_t))(Il2CppBase() + 0x1960BA4))(this, value);
	}
	template <typename T = void> T set_RoleData(uintptr_t value) {
		return ((T (*)(Loadout*, uintptr_t))(Il2CppBase() + 0x1960BAC))(this, value);
	}
	template <typename T = uintptr_t> T get_RoleData() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960BB4))(this);
	}
	template <typename T = unsigned char> T get_DefaultWeaponSlot() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960BBC))(this);
	}
	template <typename T = int32_t> T get_DefaultWeaponItemID() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960E28))(this);
	}
	template <typename T = uint32_t> T get_DefaultWeaponSkinID() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960E50))(this);
	}
	template <typename T = uintptr_t> T get_PrimaryWeapon() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960E78))(this);
	}
	template <typename T = uintptr_t> T get_SecondaryWeapon() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960FCC))(this);
	}
	template <typename T = void> T AddInventoryInfo(uintptr_t inventoryInfo) {
		return ((T (*)(Loadout*, uintptr_t))(Il2CppBase() + 0x1961120))(this, inventoryInfo);
	}
	template <typename T = void> T UpdateDefaultWeapon() {
		return ((T (*)(Loadout*))(Il2CppBase() + 0x1960BE4))(this);
	}
	template <typename T = bool> static T get_PrimaryWeaponm__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1961200))(0, e);
	}
	template <typename T = bool> static T get_SecondaryWeaponm__1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1961230))(0, e);
	}
	template <typename T = bool> static T UpdateDefaultWeaponm__2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1961318))(0, e);
	}
	template <typename T = bool> static T UpdateDefaultWeaponm__3(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1961348))(0, e);
	}

};

}
