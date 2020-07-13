#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentManager"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_BaseMedicalItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_BaseThrowWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InventoryItemsBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CurrentWeaponSlotId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastDropTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& kRestoreAutoPickUpInterval_Drop() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastAddWeaponTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& kRestoreAutoPickUpInterval_AddWeapon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_RestartCanAutoPickUpTime_InfluencedByUseMedicine() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_RequestExchangePosSet() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRightWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeaponAOrWeaponB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemBySlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetSlotItemBySlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemIndexByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotCountInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasItemInCommonSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListByTypeInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotListDataListByTypeInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetThrowingSlotList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotItemListDataByItemIDInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstSlotItemByItemIDInCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkItemForBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainWeaponAmmoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainWeaponAmmoID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPartList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateBulletCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateVestDurability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBagEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalAtomicAddHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicModify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicSwap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicSwapMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AtomicExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushSyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllPropOnRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSyncAllProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSingleSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachmentChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalORViewTargetEquipChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalMedicineChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalThrowWeaponChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasThrowingInBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalAmmoHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalClipChangedHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalCheckAutoReammo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActualChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAutoSwitchHandGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupTarget_Equip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAutoPickUpTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAutoPickUpTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAutoPickUpTarget_EquipPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnableAutoPickupEquipart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PeekCommonSlotPosId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAutoPickUpInfluencedByDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAutoPickUpInfluencedByAddWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndUseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAutoPickUpInfluencedByUseMedicine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalConsumableSlotCheckHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalMergeSlotCheckHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRRequestStrictExchangePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyBRRequestExchangePosDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAndRefreshThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	template <typename T = bool> T IsLeftWeapon(int32_t actorID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7200))(this, actorID);
	}
	template <typename T = bool> T IsRightWeapon(int32_t actorID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E72C8))(this, actorID);
	}
	template <typename T = bool> T IsMeleeWeapon(int32_t actorID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7390))(this, actorID);
	}
	template <typename T = bool> T IsThrowWeapon(int32_t actorID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7458))(this, actorID);
	}
	template <typename T = bool> T HasWeaponAOrWeaponB() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E7520))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SlotArray() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18CD444))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_AmmoList() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18DA6E0))(this);
	}
	template <typename T = uintptr_t> T GetSlotItemBySlotType(uintptr_t slotType) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18C8434))(this, slotType);
	}
	template <typename T = uintptr_t> T GetSlotItemBySlotType_1(int32_t posId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18D1B28))(this, posId);
	}
	template <typename T = int32_t> T GetSlotItemIndexByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18D8CCC))(this, actorId);
	}
	template <typename T = uintptr_t> T GetSlotItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18CD2B4))(this, actorId);
	}
	template <typename T = uintptr_t> T GetBagItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18D39D4))(this, actorId);
	}
	template <typename T = uintptr_t> T GetItemByActorId(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18CCB8C))(this, actorId);
	}
	template <typename T = int32_t> T GetItemCount(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E75F4))(this, itemId);
	}
	template <typename T = int32_t> T GetSlotCountInCommon() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18DA950))(this);
	}
	template <typename T = bool> T HasItem(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E76B8))(this, itemId);
	}
	template <typename T = bool> T HasItemInCommonSlot(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E777C))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListByTypeInCommon(uintptr_t type) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18CAD30))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListInCommon() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E7840))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSlotListDataListByTypeInCommon(uintptr_t type) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18E78F8))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetThrowingSlotList() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E79BC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPerkArray() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E7A74))(this);
	}
	template <typename T = uintptr_t> T GetSlotItemListDataByItemIDInCommon(int32_t ItemID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7B2C))(this, ItemID);
	}
	template <typename T = uintptr_t> T GetFirstSlotItemByItemIDInCommon(int32_t ItemID) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7BF0))(this, ItemID);
	}
	template <typename T = uintptr_t> T GetPerkItemForBuff(int32_t buffId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E7CB4))(this, buffId);
	}
	template <typename T = Il2CppList<int32_t>*> T GetMainWeaponAmmoList() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E7E34))(this);
	}
	template <typename T = int32_t> T GetMainWeaponAmmoID(uintptr_t weapon) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18E8078))(this, weapon);
	}
	template <typename T = bool> T GetWeaponPartList(int32_t weaponActorID, uintptr_t retPartList) {
		return ((T (*)(BREquipmentManager*, int32_t, uintptr_t))(Il2CppBase() + 0x18E816C))(this, weaponActorID, retPartList);
	}
	template <typename T = int32_t> T CalculateBulletCount(int32_t clipItemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E8248))(this, clipItemId);
	}
	template <typename T = float> T CalculateVestDurability() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18E845C))(this);
	}
	template <typename T = void> T AtomicAdd(int32_t actorId, int32_t itemId, int32_t posId, int32_t count, int32_t bulletCount, int32_t param1, int32_t itemLevel, uint32_t skinID, bool syncAll) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x18E85C8))(this, actorId, itemId, posId, count, bulletCount, param1, itemLevel, skinID, syncAll);
	}
	template <typename T = void> T CheckBagEquip(Il2CppList<uintptr_t>* slotlst, uintptr_t weaponData) {
		return ((T (*)(BREquipmentManager*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x18E9118))(this, slotlst, weaponData);
	}
	template <typename T = void> T InternalAtomicAddHandler(int32_t actorId, int32_t itemId, int32_t posId, int32_t count, int32_t bulletCount, int32_t param1, int32_t itemLevel, uint32_t skinID, bool syncAll) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x18E8D68))(this, actorId, itemId, posId, count, bulletCount, param1, itemLevel, skinID, syncAll);
	}
	template <typename T = void> T AtomicRemove(int32_t actorId, int32_t itemId, int32_t posId, int32_t itemLevel, uint32_t skinID, bool reset) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x18EB3C0))(this, actorId, itemId, posId, itemLevel, skinID, reset);
	}
	template <typename T = void> T AtomicModify(int32_t actorId, int32_t itemId, int32_t posId, int32_t count, int32_t bulletCount, int32_t param1, int32_t itemLevel, uintptr_t reason) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x18EB8FC))(this, actorId, itemId, posId, count, bulletCount, param1, itemLevel, reason);
	}
	template <typename T = void> T AtomicMove(int32_t actorId, int32_t srcPosId, int32_t destPosId) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18EBEF4))(this, actorId, srcPosId, destPosId);
	}
	template <typename T = void> T AtomicSwap(int32_t actorId_0, int32_t posId_0, int32_t actorId_1, int32_t posId_1) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18EC370))(this, actorId_0, posId_0, actorId_1, posId_1);
	}
	template <typename T = void> T AtomicSwapMainWeapon(int32_t actorId_0, int32_t posId_0, int32_t actorId_1, int32_t posId_1) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18EC8B4))(this, actorId_0, posId_0, actorId_1, posId_1);
	}
	template <typename T = void> T AtomicExchange(int32_t actorId_0, int32_t posId_0, int32_t actorId_1, int32_t posId_1) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18ED324))(this, actorId_0, posId_0, actorId_1, posId_1);
	}
	template <typename T = void> T PushSyncAllProp(unsigned char pages, unsigned char index, Il2CppArray<uintptr_t>* itemAry) {
		return ((T (*)(BREquipmentManager*, unsigned char, unsigned char, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18ED4A8))(this, pages, index, itemAry);
	}
	template <typename T = void> T RefreshAllPropOnRespawn() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EDBAC))(this);
	}
	template <typename T = void> T DoSyncAllProp() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18ED808))(this);
	}
	template <typename T = void> T ResetSlot() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18ED714))(this);
	}
	template <typename T = void> T ResetSingleSlot(uintptr_t slotType) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18EDD8C))(this, slotType);
	}
	template <typename T = void> T WeaponChangedHandler(bool add, int32_t posId, int32_t actorId, int32_t itemId, int32_t itemLevel, uint32_t skinID, bool syncAll) {
		return ((T (*)(BREquipmentManager*, bool, int32_t, int32_t, int32_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x18E9534))(this, add, posId, actorId, itemId, itemLevel, skinID, syncAll);
	}
	template <typename T = void> T AttachmentChangedHandler(bool add, int32_t actorId, int32_t itemId, int32_t posId, bool serverSync) {
		return ((T (*)(BREquipmentManager*, bool, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x18D7D48))(this, add, actorId, itemId, posId, serverSync);
	}
	template <typename T = void> T EquipChangedHandler(int32_t posId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EA4E0))(this, posId);
	}
	template <typename T = void> T LocalORViewTargetEquipChangedHandler(int32_t posId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EA668))(this, posId);
	}
	template <typename T = void> T LocalMedicineChangedHandler(int32_t itemId, bool isAddOrRemove) {
		return ((T (*)(BREquipmentManager*, int32_t, bool))(Il2CppBase() + 0x18E9EB0))(this, itemId, isAddOrRemove);
	}
	template <typename T = void> T LocalThrowWeaponChangedHandler(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EA250))(this, itemId);
	}
	template <typename T = bool> T HasThrowingInBag() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EE770))(this);
	}
	template <typename T = void> T LocalAmmoHandler(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18E9428))(this, itemId);
	}
	template <typename T = void> T LocalClipChangedHandler() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EE924))(this);
	}
	template <typename T = void> T LocalCheckAutoReammo(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EEB08))(this, itemId);
	}
	template <typename T = int32_t> T get_CurrentWeaponSlotId() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18D0C70))(this);
	}
	template <typename T = void> T set_CurrentWeaponSlotId(int32_t value) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EEC14))(this, value);
	}
	template <typename T = void> T ActualChangeWeapon(int32_t actorId, int32_t posId) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t))(Il2CppBase() + 0x18EEC1C))(this, actorId, posId);
	}
	template <typename T = bool> T IsAutoSwitchHandGun() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EEDDC))(this);
	}
	template <typename T = int32_t> T GetPickupTarget_Equip(uintptr_t data) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18EEF3C))(this, data);
	}
	template <typename T = int32_t> T GetAutoPickUpTarget(uintptr_t data, bool force) {
		return ((T (*)(BREquipmentManager*, uintptr_t, bool))(Il2CppBase() + 0x18EF214))(this, data, force);
	}
	template <typename T = int32_t> T GetAutoPickUpTarget_1(uintptr_t data, bool force, uintptr_t* recommend) {
		return ((T (*)(BREquipmentManager*, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x18EF2EC))(this, data, force, recommend);
	}
	template <typename T = int32_t> T GetAutoPickUpTarget_EquipPart(uintptr_t weaponData, uintptr_t data, bool force) {
		return ((T (*)(BREquipmentManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x18D77AC))(this, weaponData, data, force);
	}
	template <typename T = bool> T CheckEnableAutoPickupEquipart(uintptr_t partConfig) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18EFE3C))(this, partConfig);
	}
	template <typename T = int32_t> T PeekCommonSlotPosId() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18F0304))(this);
	}
	template <typename T = void> T OnDiscard() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18D8B48))(this);
	}
	template <typename T = bool> T CanAutoPickUpInfluencedByDiscard() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18F03FC))(this);
	}
	template <typename T = void> T OnAddWeapon() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EDE88))(this);
	}
	template <typename T = bool> T CanAutoPickUpInfluencedByAddWeapon() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18F04CC))(this);
	}
	template <typename T = void> T OnUseMedicine(float useTime) {
		return ((T (*)(BREquipmentManager*, float))(Il2CppBase() + 0x18F059C))(this, useTime);
	}
	template <typename T = void> T OnEndUseMedicine() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18F0668))(this);
	}
	template <typename T = bool> T CanAutoPickUpInfluencedByUseMedicine() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18F0710))(this);
	}
	template <typename T = void> T LocalConsumableSlotCheckHandler(int32_t itemId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EA870))(this, itemId);
	}
	template <typename T = void> T LocalMergeSlotCheckHandler(int32_t itemId, int32_t posId, int32_t count) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18EAF78))(this, itemId, posId, count);
	}
	template <typename T = void> T BRRequestStrictExchangePos(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18DC48C))(this, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = void> T NotifyBRRequestExchangePosDone(int32_t sourcePosId, int32_t destPosId, int32_t sourceItemId, int32_t destItemId) {
		return ((T (*)(BREquipmentManager*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x18F07E0))(this, sourcePosId, destPosId, sourceItemId, destItemId);
	}
	template <typename T = void> T ShowAndRefreshThrowing(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18EE188))(this, actorId);
	}
	template <typename T = void> T HideThrowing() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EE5B8))(this);
	}
	template <typename T = bool> T IsThrowing() {
		return ((T (*)(BREquipmentManager*))(Il2CppBase() + 0x18EDFE4))(this);
	}
	template <typename T = void> T SwitchThrowing(int32_t actorId) {
		return ((T (*)(BREquipmentManager*, int32_t))(Il2CppBase() + 0x18F1154))(this, actorId);
	}
	template <typename T = int32_t> static T DoSyncAllPropm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F1444))(0, a, b);
	}
	template <typename T = bool> T LocalConsumableSlotCheckHandlerm__1(uintptr_t _item) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18F1478))(this, _item);
	}
	template <typename T = bool> T LocalConsumableSlotCheckHandlerm__2(uintptr_t _item) {
		return ((T (*)(BREquipmentManager*, uintptr_t))(Il2CppBase() + 0x18F14AC))(this, _item);
	}

};

}
