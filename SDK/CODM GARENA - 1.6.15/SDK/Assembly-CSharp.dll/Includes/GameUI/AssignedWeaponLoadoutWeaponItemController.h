#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AssignedWeaponLoadoutWeaponItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AssignedWeaponLoadoutWeaponItemController"));
	}

	template <typename T = uintptr_t> T& m_ItemView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> static T& ATTACH_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& PROP_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& nItemIndex() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSquadPropertyName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponSquadPropery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*))(Il2CppBase() + 0x2D67904))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*))(Il2CppBase() + 0x2D679A8))(this);
	}
	template <typename T = uintptr_t> T GetMainWeapon(uintptr_t bagInfo) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, uintptr_t))(Il2CppBase() + 0x2D67AB4))(this, bagInfo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponProperty(uintptr_t weaponInfo) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, uintptr_t))(Il2CppBase() + 0x2D67BDC))(this, weaponInfo);
	}
	template <typename T = void> T OnItemSelected(int32_t nSelectedIndex) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x2D65984))(this, nSelectedIndex);
	}
	template <typename T = Il2CppString*> T GetSquadPropertyName(int32_t nPropertyType) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x2D68228))(this, nPropertyType);
	}
	template <typename T = void> T SetWeaponSquadPropery(int32_t nSelectBagId) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x2D67D60))(this, nSelectBagId);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2D68390))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*))(Il2CppBase() + 0x2D6876C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AssignedWeaponLoadoutWeaponItemController*))(Il2CppBase() + 0x2D68774))(this);
	}

};

}
