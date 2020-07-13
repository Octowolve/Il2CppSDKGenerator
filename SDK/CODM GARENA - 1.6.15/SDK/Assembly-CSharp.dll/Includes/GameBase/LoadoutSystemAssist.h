#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoadoutSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoadoutSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_cacheLoadOut() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& cache_SelectIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_pendingChangeSkinWeapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_pendingSkin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_cacheLoadoutName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeLoadOutItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOldItemGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadOutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeLoadoutItemAttribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadoutItemAttributeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeBRLoadoutItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBRLoadoutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangePVELoadoutItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangePVELoadoutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvnetoryUpdatePVELoadoutNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSelectDefaultLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectDefaultLoadoutResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeScoreStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeScoreStreakResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeWeaponSkinResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestChangeLoadoutName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadoutNameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCopyLoaoutTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyLoadoutToResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSellItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RequestSellItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSellChips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSellItemsResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T RequestChangeLoadOutItem(uintptr_t east, uintptr_t member, uint64_t newItemGuid, uintptr_t pos) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x1963FDC))(this, east, member, newItemGuid, pos);
	}
	template <typename T = uint64_t> T GetOldItemGuid(uintptr_t member, uintptr_t pos) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19642D0))(this, member, pos);
	}
	template <typename T = void> T OnChangeLoadOutItemResponse(uintptr_t resData) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x196455C))(this, resData);
	}
	template <typename T = void> T RequestChangeLoadoutItemAttribute(uintptr_t east, uintptr_t member, uintptr_t attrType, int32_t attrIndex, uint64_t newItemGuid, bool bMainWeapon, uint64_t parentGuid, uint32_t parentItemId, uintptr_t roleSkinData) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, uintptr_t, uintptr_t, int32_t, uint64_t, bool, uint64_t, uint32_t, uintptr_t))(Il2CppBase() + 0x19649E8))(this, east, member, attrType, attrIndex, newItemGuid, bMainWeapon, parentGuid, parentItemId, roleSkinData);
	}
	template <typename T = void> T OnChangeLoadoutItemAttributeResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1964CE0))(this, res);
	}
	template <typename T = void> T RequestChangeBRLoadoutItem(uintptr_t itemType, uint32_t id, uint64_t guid, uint32_t hostId, uint64_t hostGuid, int32_t subType, uintptr_t roleSkin) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, uint32_t, uint64_t, uint32_t, uint64_t, int32_t, uintptr_t))(Il2CppBase() + 0x1965440))(this, itemType, id, guid, hostId, hostGuid, subType, roleSkin);
	}
	template <typename T = void> T OnChangeBRLoadoutItemResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1965664))(this, res);
	}
	template <typename T = void> T RequestChangePVELoadoutItem(uintptr_t itemType, int32_t subType, uint32_t id, uint64_t guid, uint32_t hostId, uint64_t hostGuid, uintptr_t roleSkin, int32_t targetIdx) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, int32_t, uint32_t, uint64_t, uint32_t, uint64_t, uintptr_t, int32_t))(Il2CppBase() + 0x1965B54))(this, itemType, subType, id, guid, hostId, hostGuid, roleSkin, targetIdx);
	}
	template <typename T = void> T OnChangePVELoadoutItemResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1965DB4))(this, res);
	}
	template <typename T = void> T OnInvnetoryUpdatePVELoadoutNtf(uintptr_t ntf) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x196641C))(this, ntf);
	}
	template <typename T = void> T RequestSelectDefaultLoadout(int32_t index) {
		return ((T (*)(LoadoutSystemAssist*, int32_t))(Il2CppBase() + 0x19666BC))(this, index);
	}
	template <typename T = void> T OnSelectDefaultLoadoutResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1966870))(this, res);
	}
	template <typename T = void> T RequestChangeScoreStreak(uint32_t oldId, uint32_t newId) {
		return ((T (*)(LoadoutSystemAssist*, uint32_t, uint32_t))(Il2CppBase() + 0x1966CF4))(this, oldId, newId);
	}
	template <typename T = void> T OnChangeScoreStreakResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1966E74))(this, res);
	}
	template <typename T = void> T RequestChangeWeaponSkin(uint32_t weaponId, uint32_t skinId, uint64_t skinGuid, uint32_t brWeaponId, uint64_t brWeaponGuid) {
		return ((T (*)(LoadoutSystemAssist*, uint32_t, uint32_t, uint64_t, uint32_t, uint64_t))(Il2CppBase() + 0x1967124))(this, weaponId, skinId, skinGuid, brWeaponId, brWeaponGuid);
	}
	template <typename T = void> T OnChangeWeaponSkinResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1967340))(this, res);
	}
	template <typename T = void> T RequestChangeLoadoutName(int32_t loadoutIndex, Il2CppString* name) {
		return ((T (*)(LoadoutSystemAssist*, int32_t, Il2CppString*))(Il2CppBase() + 0x19677FC))(this, loadoutIndex, name);
	}
	template <typename T = void> T OnChangeLoadoutNameResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x19679EC))(this, res);
	}
	template <typename T = void> T RequestCopyLoaoutTo(int32_t fromIdx, int32_t toIdx) {
		return ((T (*)(LoadoutSystemAssist*, int32_t, int32_t))(Il2CppBase() + 0x1967AF0))(this, fromIdx, toIdx);
	}
	template <typename T = void> T OnCopyLoadoutToResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1967CEC))(this, res);
	}
	template <typename T = void> T RequestSellItems(uintptr_t item) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1967E58))(this, item);
	}
	template <typename T = void> T RequestSellItems_1(void* items) {
		return ((T (*)(LoadoutSystemAssist*, void*))(Il2CppBase() + 0x1968064))(this, items);
	}
	template <typename T = void> T RequestSellChips(uintptr_t item, int32_t num) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t, int32_t))(Il2CppBase() + 0x1968368))(this, item, num);
	}
	template <typename T = void> T OnSellItemsResponse(uintptr_t res) {
		return ((T (*)(LoadoutSystemAssist*, uintptr_t))(Il2CppBase() + 0x1968574))(this, res);
	}

};

}
