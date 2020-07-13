#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutReddotDatastore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutReddotDatastore"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uint64_t, uintptr_t>*>*> T& mItemReddotMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& mLoadoutReddotMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& mWeaponUpgradeReddotMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mUiEntranceTimestampMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& mEntityTimestampMap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& mNoEntityTimestampMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheOriginalList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& CacheAttachTypeListWithoutOptic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& CacheAttachTypeListWithOptic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& CacheAttachTypeListWithAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& nullReddotData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSlotType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCacheData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReddotDataTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUiEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntityItemEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNoEntityItemEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAttachmentReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUpgradeAttachmentNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUpgradeNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAttachmentReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSkinReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasOrnamentReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCrosshairReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasDecorateReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRoleSkinReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasProfessionChipSkinReddotByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveItemReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemListReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWeaponSkinReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemClientReddotData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemClientReddotDataById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsItemNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemNeedReddotByOnlyId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoleNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponSkinNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrThrowingNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrVehicleNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrProfessionChipNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLoadoutSlotReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntranceTypeByLoadoutIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutSlotNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutSlotDetailPosNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveLoadoutReddotByItemCommonData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponNewerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoleNewerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsProfessionChipNewerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomeMainWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomeViceWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomeRoleNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomeSkillNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomeGrenadeNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHomePerkNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsKillStreakNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllLoadoutNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllPvpLoadoutNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPvpLoadoutNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrWeaponNewerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrThrowingNewerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeThrowingNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeVehicleNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeJetpackNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeParachuteNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrHomeProfessionChipNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBrLoadoutNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIndividuationActionNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIndividuationLacquerNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIndividuationNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInventoryNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLobbyIconFrameNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveLoadoutNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeOffWallNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeRoleNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeStickGrenadeNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeTripmineNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeWonderWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeDefaultPistolNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeDefaultMeleeNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPveHomeWeaponNeedReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}

	template <typename T = uintptr_t> T get_SquadInventoryDS() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F26AE8))(this);
	}
	template <typename T = uintptr_t> T get_LoadoutDS() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F26B98))(this);
	}
	template <typename T = uint32_t> T GetLoadoutIndex(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F26C48))(this, idx, squadType);
	}
	template <typename T = uint32_t> static T GetSlotType(uintptr_t menuType, uintptr_t detailType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F26D4C))(0, menuType, detailType);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F26EAC))(this);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F23894))(this);
	}
	template <typename T = void> T AddCacheData(Il2CppList<uintptr_t>* reddotList) {
		return ((T (*)(LoadoutReddotDatastore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F23A90))(this, reddotList);
	}
	template <typename T = void> T UpdateReddotDataTimestamp(Il2CppList<uintptr_t>* reddotList) {
		return ((T (*)(LoadoutReddotDatastore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F25EA8))(this, reddotList);
	}
	template <typename T = void> T UpdateReddotData(Il2CppList<uintptr_t>* reddotList) {
		return ((T (*)(LoadoutReddotDatastore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F23BA0))(this, reddotList);
	}
	template <typename T = void> T ResetReddotData() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F26F8C))(this);
	}
	template <typename T = uint32_t> T GetUiEntranceTimestamp(uintptr_t enteranceType) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t))(Il2CppBase() + 0x1F270F4))(this, enteranceType);
	}
	template <typename T = uint32_t> T GetEntityItemEntranceTimestamp(uint64_t guid, uintptr_t slot) {
		return ((T (*)(LoadoutReddotDatastore*, uint64_t, uintptr_t))(Il2CppBase() + 0x1F27258))(this, guid, slot);
	}
	template <typename T = uint32_t> T GetNoEntityItemEntranceTimestamp(uint32_t id, uintptr_t slot) {
		return ((T (*)(LoadoutReddotDatastore*, uint32_t, uintptr_t))(Il2CppBase() + 0x1F27488))(this, id, slot);
	}
	template <typename T = uint32_t> T GetLoadoutEntranceTimestamp(int32_t idx, uintptr_t squadType, uintptr_t pos) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F276A0))(this, idx, squadType, pos);
	}
	template <typename T = void> T RemoveAttachmentReddot(uintptr_t weaponData, uint32_t attachId, uintptr_t reddotFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F278D8))(this, weaponData, attachId, reddotFlag);
	}
	template <typename T = uintptr_t> T IsUpgradeAttachmentNeedReddot(uint64_t weaponGuid, uint32_t attachId, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uint64_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F27E30))(this, weaponGuid, attachId, parentTimestamp, dataFlag);
	}
	template <typename T = bool> T IsUpgradeNeedReddot(uintptr_t weaponData, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F28044))(this, weaponData, dataFlag);
	}
	template <typename T = bool> T HasAttachmentReddotByType(uintptr_t weaponData, Il2CppList<uintptr_t>* typeList, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1F1A760))(this, weaponData, typeList, dataFlag);
	}
	template <typename T = bool> T HasSkinReddotByType(uintptr_t weaponData, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F1A37C))(this, weaponData, dataFlag);
	}
	template <typename T = bool> T HasOrnamentReddotByType(uintptr_t weaponData, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F28418))(this, weaponData, dataFlag);
	}
	template <typename T = bool> T HasCrosshairReddotByType(uintptr_t weaponData, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F285F0))(this, weaponData, dataFlag);
	}
	template <typename T = bool> T HasDecorateReddotByType(uintptr_t weaponData, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F287C8))(this, weaponData, dataFlag);
	}
	template <typename T = uint32_t> T GetRoleSkinEntranceTimestamp(uint64_t roleGuid, uintptr_t skinType) {
		return ((T (*)(LoadoutReddotDatastore*, uint64_t, uintptr_t))(Il2CppBase() + 0x1F288E0))(this, roleGuid, skinType);
	}
	template <typename T = bool> T HasRoleSkinReddotByType(uintptr_t roleData, uintptr_t skinType, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F28A38))(this, roleData, skinType, dataFlag);
	}
	template <typename T = bool> T HasProfessionChipSkinReddotByType(uintptr_t chipData) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t))(Il2CppBase() + 0x1F28EF4))(this, chipData);
	}
	template <typename T = void> T RemoveItemReddot(uintptr_t itemData, uintptr_t reddotFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F29480))(this, itemData, reddotFlag);
	}
	template <typename T = void> T RemoveItemReddot_1(uint32_t itemId, uint64_t itemGuid, bool removeSameId, uintptr_t reddotFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uint32_t, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x1F295A8))(this, itemId, itemGuid, removeSameId, reddotFlag);
	}
	template <typename T = void> T RemoveItemListReddot(Il2CppList<uint32_t>* itemList, uintptr_t reddotFlag) {
		return ((T (*)(LoadoutReddotDatastore*, Il2CppList<uint32_t>*, uintptr_t))(Il2CppBase() + 0x1F29B54))(this, itemList, reddotFlag);
	}
	template <typename T = void> T RemoveWeaponSkinReddot(uintptr_t skinItem, uintptr_t reddotFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F2A0A4))(this, skinItem, reddotFlag);
	}
	template <typename T = bool> T GetItemClientReddotData(uintptr_t itemData, uintptr_t* reddotData) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1F2A294))(this, itemData, reddotData);
	}
	template <typename T = bool> T GetItemClientReddotDataById(uint32_t itemId, uintptr_t* reddotData) {
		return ((T (*)(LoadoutReddotDatastore*, uint32_t, uintptr_t*))(Il2CppBase() + 0x1F2A49C))(this, itemId, reddotData);
	}
	template <typename T = uintptr_t> T IsItemNeedReddot(uintptr_t itemData, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F282D8))(this, itemData, parentTimestamp, dataFlag);
	}
	template <typename T = uintptr_t> T IsItemNeedReddot_1(uint32_t itemId, uint64_t itemGuid, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uint32_t, uint64_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F2A890))(this, itemId, itemGuid, parentTimestamp, dataFlag);
	}
	template <typename T = uintptr_t> T IsItemNeedReddotByOnlyId(uint32_t itemId, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F290F8))(this, itemId, parentTimestamp, dataFlag);
	}
	template <typename T = uintptr_t> T IsWeaponNeedReddot(uintptr_t weaponData, uint32_t parentTimestamp, uintptr_t reddotFlag, uintptr_t* parentNeedReddot) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1F2AB1C))(this, weaponData, parentTimestamp, reddotFlag, parentNeedReddot);
	}
	template <typename T = uintptr_t> T IsRoleNeedReddot(uintptr_t roleData, uint32_t parentTimestamp, uintptr_t reddotFlag, uintptr_t* parentNeedReddot) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1F2AD24))(this, roleData, parentTimestamp, reddotFlag, parentNeedReddot);
	}
	template <typename T = uintptr_t> T IsWeaponSkinNeedReddot(uintptr_t skinItem, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F2AEFC))(this, skinItem, dataFlag);
	}
	template <typename T = bool> T IsBrWeaponNeedReddot(uintptr_t weaponConf, uint32_t parentTime) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t))(Il2CppBase() + 0x1F2B0EC))(this, weaponConf, parentTime);
	}
	template <typename T = bool> T IsBrThrowingNeedReddot(uintptr_t throwConf) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t))(Il2CppBase() + 0x1F2B320))(this, throwConf);
	}
	template <typename T = bool> T IsBrVehicleNeedReddot(uintptr_t vehicleConf) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t))(Il2CppBase() + 0x1F2B548))(this, vehicleConf);
	}
	template <typename T = uintptr_t> T IsBrProfessionChipNeedReddot(uintptr_t chipItem, uint32_t parentTimestamp, uintptr_t* parentNeedReddot) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x1F2B760))(this, chipItem, parentTimestamp, parentNeedReddot);
	}
	template <typename T = void> T RemoveLoadoutSlotReddot(uintptr_t squadData, int32_t slot) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, int32_t))(Il2CppBase() + 0x1F2B8A4))(this, squadData, slot);
	}
	template <typename T = uintptr_t> T GetEntranceTypeByLoadoutIdx(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2BC58))(this, idx, squadType);
	}
	template <typename T = bool> T IsLoadoutSlotNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2BD60))(this, idx, squadType);
	}
	template <typename T = bool> T IsLoadoutSlotDetailPosNeedReddot(int32_t idx, uintptr_t squadType, uintptr_t pos) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F2BF78))(this, idx, squadType, pos);
	}
	template <typename T = void> T RemoveLoadoutReddotByItemCommonData(Il2CppList<uintptr_t>* itemDataList) {
		return ((T (*)(LoadoutReddotDatastore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1F2C1EC))(this, itemDataList);
	}
	template <typename T = bool> T IsWeaponNewerNeedReddot(uintptr_t weaponData, uint32_t parentTimestamp, uintptr_t dataFlag, uintptr_t* weaponTimestampBiggerThanParent) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1F2C7C4))(this, weaponData, parentTimestamp, dataFlag, weaponTimestampBiggerThanParent);
	}
	template <typename T = bool> T IsRoleNewerNeedReddot(uintptr_t roleData, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F2D014))(this, roleData, parentTimestamp, dataFlag);
	}
	template <typename T = bool> T IsProfessionChipNewerNeedReddot(uintptr_t chipData, uint32_t parentTimestamp, uintptr_t dataFlag) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F2D450))(this, chipData, parentTimestamp, dataFlag);
	}
	template <typename T = bool> T IsHomeMainWeaponNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2D904))(this, idx, squadType);
	}
	template <typename T = bool> T IsHomeViceWeaponNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2DBD0))(this, idx, squadType);
	}
	template <typename T = bool> T IsHomeRoleNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2DF20))(this, idx, squadType);
	}
	template <typename T = bool> T IsHomeSkillNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2E110))(this, idx, squadType);
	}
	template <typename T = bool> T IsHomeGrenadeNeedReddot(int32_t idx, uintptr_t squadType, uintptr_t grenadeType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F2E3F4))(this, idx, squadType, grenadeType);
	}
	template <typename T = bool> T IsHomePerkNeedReddot(int32_t idx, uintptr_t squadType, uintptr_t perkType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F2E754))(this, idx, squadType, perkType);
	}
	template <typename T = bool> T IsKillStreakNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2EA64))(this);
	}
	template <typename T = bool> T IsAllLoadoutNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2EC40))(this);
	}
	template <typename T = bool> T IsAllPvpLoadoutNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2ED64))(this);
	}
	template <typename T = bool> T IsPvpLoadoutNeedReddot(int32_t idx, uintptr_t squadType) {
		return ((T (*)(LoadoutReddotDatastore*, int32_t, uintptr_t))(Il2CppBase() + 0x1F2F554))(this, idx, squadType);
	}
	template <typename T = bool> T IsBrWeaponNewerNeedReddot(uintptr_t weaponConf, uint32_t parentTimestamp) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t))(Il2CppBase() + 0x1F2F9AC))(this, weaponConf, parentTimestamp);
	}
	template <typename T = bool> T IsBrThrowingNewerNeedReddot(uintptr_t throwConf, uint32_t parentTimestamp) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uint32_t))(Il2CppBase() + 0x1F2FBF4))(this, throwConf, parentTimestamp);
	}
	template <typename T = bool> T IsBrHomeWeaponNeedReddot(bool onlyMelee) {
		return ((T (*)(LoadoutReddotDatastore*, bool))(Il2CppBase() + 0x1F2FE3C))(this, onlyMelee);
	}
	template <typename T = bool> T IsBrHomeThrowingNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F3018C))(this);
	}
	template <typename T = bool> T IsBrHomeVehicleNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F3032C))(this);
	}
	template <typename T = bool> T IsBrHomeJetpackNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F3051C))(this);
	}
	template <typename T = bool> T IsBrHomeParachuteNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F3073C))(this);
	}
	template <typename T = bool> T IsBrHomeProfessionChipNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F3095C))(this);
	}
	template <typename T = bool> T IsBrLoadoutNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2F008))(this);
	}
	template <typename T = bool> T IsIndividuationActionNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F30AFC))(this);
	}
	template <typename T = bool> T IsIndividuationLacquerNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F30D28))(this);
	}
	template <typename T = bool> T IsIndividuationNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2F170))(this);
	}
	template <typename T = bool> T IsInventoryNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2F258))(this);
	}
	template <typename T = bool> T IsLobbyIconFrameNeedReddot(uintptr_t enteranceType, uintptr_t HeadFrameType) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F30F54))(this, enteranceType, HeadFrameType);
	}
	template <typename T = bool> T IsPveLoadoutNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F2EE64))(this);
	}
	template <typename T = bool> T IsPveHomeOffWallNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F31354))(this);
	}
	template <typename T = bool> T IsPveHomeRoleNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F31524))(this);
	}
	template <typename T = bool> T IsPveHomeStickGrenadeNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F316DC))(this);
	}
	template <typename T = bool> T IsPveHomeTripmineNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F318D0))(this);
	}
	template <typename T = bool> T IsPveHomeWonderWeaponNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F31AC4))(this);
	}
	template <typename T = bool> T IsPveHomeDefaultPistolNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F31EE4))(this);
	}
	template <typename T = bool> T IsPveHomeDefaultMeleeNeedReddot() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F31CF4))(this);
	}
	template <typename T = bool> T IsPveHomeWeaponNeedReddot(uintptr_t weaponConfig, bool checkParentTime) {
		return ((T (*)(LoadoutReddotDatastore*, uintptr_t, bool))(Il2CppBase() + 0x1F320E4))(this, weaponConfig, checkParentTime);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LoadoutReddotDatastore*))(Il2CppBase() + 0x1F325E4))(this);
	}

};

}
