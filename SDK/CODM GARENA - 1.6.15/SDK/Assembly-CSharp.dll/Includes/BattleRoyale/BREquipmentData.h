#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SlotArray() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& AmmoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSlotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwapSlotItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwapSlotWeaponGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmoItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAmmoItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemBySlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSlotItemBySlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSlotByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemIndexByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAmmoItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAmmoItemByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCountInCommonSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEquippedBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListByTypeInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListDataListByTypeInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemListDataByItemIDInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstSlotItemByItemIDInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotCountInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasItemInCommonSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowingSlotList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPartList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = void> T SetSlotItem(int32_t posId, uintptr_t data) {
		return ((T (*)(BREquipmentData*, int32_t, uintptr_t))(Il2CppBase() + 0x18E0FC0))(this, posId, data);
	}
	template <typename T = void> T SwapSlotItem(int32_t posId_0, int32_t posId_1) {
		return ((T (*)(BREquipmentData*, int32_t, int32_t))(Il2CppBase() + 0x18E10E4))(this, posId_0, posId_1);
	}
	template <typename T = void> T SwapSlotWeaponGroup() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E1378))(this);
	}
	template <typename T = void> T AddAmmoItem(uintptr_t data) {
		return ((T (*)(BREquipmentData*, uintptr_t))(Il2CppBase() + 0x18E1484))(this, data);
	}
	template <typename T = void> T RemoveAmmoItem(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E156C))(this, itemId);
	}
	template <typename T = void> T ResetAll() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E1684))(this);
	}
	template <typename T = uintptr_t> T GetSlotItemBySlotType(uintptr_t slotType) {
		return ((T (*)(BREquipmentData*, uintptr_t))(Il2CppBase() + 0x18E17A4))(this, slotType);
	}
	template <typename T = uintptr_t> T GetSlotItemBySlotType_1(int32_t posId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E188C))(this, posId);
	}
	template <typename T = bool> T IsSlotByActorId(int32_t actorId, int32_t posId) {
		return ((T (*)(BREquipmentData*, int32_t, int32_t))(Il2CppBase() + 0x18E1974))(this, actorId, posId);
	}
	template <typename T = int32_t> T GetSlotItemIndexByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E1A58))(this, actorId);
	}
	template <typename T = uintptr_t> T GetSlotItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E1B68))(this, actorId);
	}
	template <typename T = uintptr_t> T GetAmmoItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E1C74))(this, actorId);
	}
	template <typename T = uintptr_t> T GetItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E1EAC))(this, actorId);
	}
	template <typename T = uintptr_t> T GetAmmoItemByItemId(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E1F70))(this, itemId);
	}
	template <typename T = int32_t> T GetItemCount(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E2074))(this, itemId);
	}
	template <typename T = int32_t> T GetItemCountInCommonSlot(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E22DC))(this, itemId);
	}
	template <typename T = bool> T HasEquippedBag() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E23EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListInCommon() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E249C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListByTypeInCommon(uintptr_t type) {
		return ((T (*)(BREquipmentData*, uintptr_t))(Il2CppBase() + 0x18E25F8))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListDataListByTypeInCommon(uintptr_t type) {
		return ((T (*)(BREquipmentData*, uintptr_t))(Il2CppBase() + 0x18E2804))(this, type);
	}
	template <typename T = uintptr_t> T GetSlotItemListDataByItemIDInCommon(int32_t ItemID) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E2B3C))(this, ItemID);
	}
	template <typename T = uintptr_t> T GetFirstSlotItemByItemIDInCommon(int32_t ItemID) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E2C84))(this, ItemID);
	}
	template <typename T = int32_t> T GetSlotCountInCommon() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E2D8C))(this);
	}
	template <typename T = bool> T HasItem(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E2E84))(this, itemId);
	}
	template <typename T = bool> T HasItemInCommonSlot(int32_t itemId) {
		return ((T (*)(BREquipmentData*, int32_t))(Il2CppBase() + 0x18E310C))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetThrowingSlotList() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E3218))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPerkList() {
		return ((T (*)(BREquipmentData*))(Il2CppBase() + 0x18E3420))(this);
	}
	template <typename T = bool> T GetWeaponPartList(int32_t weaponActorID, uintptr_t retPartList) {
		return ((T (*)(BREquipmentData*, int32_t, uintptr_t))(Il2CppBase() + 0x18E3524))(this, weaponActorID, retPartList);
	}

};

}
