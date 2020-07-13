#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ItemEquipLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ItemEquipLogic"));
	}

	template <typename T = uintptr_t> T& m_Ctrl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipPrepareSysItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnequipedItemReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnequipedItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipPrepareSysItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipItemReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T RegisterEvent() {
		return ((T (*)(ItemEquipLogic*))(Il2CppBase() + 0x368A760))(this);
	}
	template <typename T = void> T UnRegisterEvent() {
		return ((T (*)(ItemEquipLogic*))(Il2CppBase() + 0x368A9E8))(this);
	}
	template <typename T = void> T UnEquipPrepareSysItem(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368AB00))(this, Msg);
	}
	template <typename T = void> T UnEquip(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368AE18))(this, Msg);
	}
	template <typename T = void> T UnequipedItemReq(uint64_t itemID, uint64_t itemGID) {
		return ((T (*)(ItemEquipLogic*, uint64_t, uint64_t))(Il2CppBase() + 0x368AC70))(this, itemID, itemGID);
	}
	template <typename T = void> T UnequipedItemRes(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368AF88))(this, Msg);
	}
	template <typename T = void> T EquipPrepareSysItem(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368B028))(this, Msg);
	}
	template <typename T = void> T Equip(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368B0C8))(this, Msg);
	}
	template <typename T = void> T Equip_1(uint64_t itemID, uint64_t itemGID, int32_t bagIndex) {
		return ((T (*)(ItemEquipLogic*, uint64_t, uint64_t, int32_t))(Il2CppBase() + 0x368B28C))(this, itemID, itemGID, bagIndex);
	}
	template <typename T = void> T EquipWeapon(uintptr_t itemData, int32_t bagIdex) {
		return ((T (*)(ItemEquipLogic*, uintptr_t, int32_t))(Il2CppBase() + 0x368B350))(this, itemData, bagIdex);
	}
	template <typename T = void> T EquipCharacter(uintptr_t characterData) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368B404))(this, characterData);
	}
	template <typename T = void> T EquipItemReq(uintptr_t candidatePlayerItemData, uintptr_t equipedState, uint64_t bagID, uint32_t modeId) {
		return ((T (*)(ItemEquipLogic*, uintptr_t, uintptr_t, uint64_t, uint32_t))(Il2CppBase() + 0x368B4A4))(this, candidatePlayerItemData, equipedState, bagID, modeId);
	}
	template <typename T = void> T EquipItemRes(uintptr_t Msg) {
		return ((T (*)(ItemEquipLogic*, uintptr_t))(Il2CppBase() + 0x368B6AC))(this, Msg);
	}

};

}
