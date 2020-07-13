#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mWeaponPromotionDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> static T& DEFAULT_BR_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& DEFAULT_BR_ROLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& bIfNeedResetCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bIfNeedToRefreshLoadoutWeaponView() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& bIfNeedToRefreshLoadoutSkillView() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& bIfNeedToRefreshLoadoutEquipmentView() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& bIfNeedToRefreshLoadoutPveOffWallView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bIfNeedToRefreshLoadoutPveWeaponView() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& DynamicFilterItemHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> T& NewScoreStreakIdList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mCacheFakeWeaponMap() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mCacheFakeWeaponSkinMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mCacheFakeItemMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mCacheFakeVehicleItemMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& mCacheFakeRoleMap() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByLevelDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByGetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachSortById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkinUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkinConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrWeaponSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrThrowingSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAttachmentUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAttachmentAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponOpticList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachAvailableForReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttachWithoutOpticList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAvailableAttachList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAvailableSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCompareWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponSortByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrVehicleSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProfessionChipList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProChipSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProChipInCsvSortComparision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrMeleeWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrThrowingList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleConfFakeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoleSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoleInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkillList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkillAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkillSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkillInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentEquipmentItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrenadeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGrenadeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckGrenadeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GrenadeSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GrenadeInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveGrenadeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerkList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPerkAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerkSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerkInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJetpackSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JetpackSkinSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParachuteSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParachuteSkinSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillStreakList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KillStreakSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_KillStreakInCsvSortComparison() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponDetailItemUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrLobbyShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrLobbyShowSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrLobbyShowProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProfessionChipSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherProfessionalChipSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelfWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinItemMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinAseet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHatSkinAseet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagSkinAseet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClothSkinAseet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetRoleSkinAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachConflict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponDetailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquitmentGUIDSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeShadowDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetIDForBREquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleSkinByRoleAppearance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAttr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithBrLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithMpLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithPveLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrderedIndexWithGettime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortItemWithGettime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSIItemDatasWithType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSquadTypeToViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponOrnamentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCrosshairList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A2D3E4))(this);
	}
	template <typename T = uintptr_t> T GetWeaponConfFakeItem(uintptr_t conf) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A2D598))(this, conf);
	}
	template <typename T = uintptr_t> T GetWeaponConfFakeItem_1(uint32_t weaponId) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A2D764))(this, weaponId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponList(uintptr_t type, uintptr_t subWeaponType, uintptr_t curEquipedWeapon, bool viceToMain) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A2D954))(this, type, subWeaponType, curEquipedWeapon, viceToMain);
	}
	template <typename T = bool> T CheckWeaponAvailable(uintptr_t east, uint32_t weaponId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uint32_t))(Il2CppBase() + 0x1A2E104))(this, east, weaponId);
	}
	template <typename T = uintptr_t> T GetPerkType(uintptr_t lpt) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A2E330))(this, lpt);
	}
	template <typename T = int32_t> T WeaponSortByDefault(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2E41C))(this, a, b);
	}
	template <typename T = int32_t> T WeaponSortByLevelUp(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2E6AC))(this, a, b);
	}
	template <typename T = int32_t> T WeaponSortByLevelDown(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2E854))(this, a, b);
	}
	template <typename T = int32_t> T WeaponSortByGetTime(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2E9EC))(this, a, b);
	}
	template <typename T = int32_t> T WeaponSortByName(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2EBC0))(this, a, b);
	}
	template <typename T = int32_t> T AttachSortById(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2EDC4))(this, a, b);
	}
	template <typename T = bool> T CheckSkinUnlock(uintptr_t east, uintptr_t weapon, uint32_t skinId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1A2EFEC))(this, east, weapon, skinId);
	}
	template <typename T = uintptr_t> T GetWeaponSkinConfFakeItem(uintptr_t conf) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A2F254))(this, conf);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponSkinList(uintptr_t weapon, uintptr_t squadType) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2F420))(this, weapon, squadType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrWeaponSkinList(uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A1AE5C))(this, weapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChipSkinList(uintptr_t chip) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A2F9D0))(this, chip);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrThrowingSkinList(uintptr_t throwItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A06F9C))(this, throwItem);
	}
	template <typename T = bool> T CheckAttachmentUnlock(uintptr_t east, uintptr_t weapon, uint32_t attachId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1A30080))(this, east, weapon, attachId);
	}
	template <typename T = bool> T CheckAttachmentAvailable(uintptr_t east, uintptr_t weapon, uint32_t attachId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1A302E8))(this, east, weapon, attachId);
	}
	template <typename T = uintptr_t> T GetConfFakeItem(uintptr_t conf) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A30564))(this, conf);
	}
	template <typename T = uintptr_t> T GetConfFakeItem_1(uint32_t itemId) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A2FE90))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponOpticList(uintptr_t east, uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A307FC))(this, east, weapon);
	}
	template <typename T = bool> T IsAttachAvailableForReddot(uintptr_t east, uintptr_t weapon, uint32_t attachId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1A30DF8))(this, east, weapon, attachId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponAttachWithoutOpticList(uintptr_t east, uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A30F30))(this, east, weapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponAvailableAttachList(uintptr_t east, uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3152C))(this, east, weapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponAvailableSkinList(uintptr_t weapon, uintptr_t squadType) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A31858))(this, weapon, squadType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCompareWeaponList(uintptr_t weaponType, uintptr_t equipedWeapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A31B8C))(this, weaponType, equipedWeapon);
	}
	template <typename T = int32_t> T WeaponSortByID(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A321F8))(this, a, b);
	}
	template <typename T = int32_t> T WeaponInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A323A0))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrWeaponList() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A16B70))(this);
	}
	template <typename T = uintptr_t> T GetVehicleConfFakeItem(uint32_t itemId) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A32548))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrVehicleSkins() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A1020C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetProfessionChipList() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A32720))(this);
	}
	template <typename T = int32_t> T ProChipSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A32D18))(this, a, b);
	}
	template <typename T = int32_t> T ProChipInCsvSortComparision(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A32E40))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrMeleeWeaponList(uintptr_t equipedMelee) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A33040))(this, equipedMelee);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBrThrowingList() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A03488))(this);
	}
	template <typename T = uintptr_t> T GetRoleConfFakeItem(uintptr_t conf) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A333B8))(this, conf);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoleList(uintptr_t type, uintptr_t curEquipedRole) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A33650))(this, type, curEquipedRole);
	}
	template <typename T = int32_t> T RoleSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A33BB8))(this, a, b);
	}
	template <typename T = int32_t> T RoleInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A33DD8))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSkillList(uintptr_t type, uintptr_t curEquipedSkill) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A33F48))(this, type, curEquipedSkill);
	}
	template <typename T = bool> T CheckSkillAvailable(uintptr_t type, uint32_t skillId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uint32_t))(Il2CppBase() + 0x1A344A4))(this, type, skillId);
	}
	template <typename T = int32_t> T SkillSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A34640))(this, a, b);
	}
	template <typename T = int32_t> T SkillInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A34830))(this, a, b);
	}
	template <typename T = uintptr_t> T GetCurrentEquipmentItem(uintptr_t smd, uintptr_t lpt) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A275FC))(this, smd, lpt);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGrenadeList(uintptr_t type, uintptr_t grenadeType, uintptr_t curEquipedItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A27770))(this, type, grenadeType, curEquipedItem);
	}
	template <typename T = bool> T CheckGrenadeAvailable(uintptr_t type, uint32_t grenadeId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uint32_t))(Il2CppBase() + 0x1A34A30))(this, type, grenadeId);
	}
	template <typename T = bool> T CheckGrenadeAvailable_1(uintptr_t type, uintptr_t conf) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A34B9C))(this, type, conf);
	}
	template <typename T = int32_t> T GrenadeSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A34D18))(this, a, b);
	}
	template <typename T = int32_t> T GrenadeInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A34F08))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPveGrenadeList(uintptr_t grenadeType, uintptr_t curEquipedItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A35108))(this, grenadeType, curEquipedItem);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPerkList(uintptr_t type, uintptr_t perkType, uintptr_t curEquipedItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A27D4C))(this, type, perkType, curEquipedItem);
	}
	template <typename T = bool> T CheckPerkAvailable(uintptr_t type, uint32_t perkId, uintptr_t perkType) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1A356B8))(this, type, perkId, perkType);
	}
	template <typename T = int32_t> T PerkSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A358F4))(this, a, b);
	}
	template <typename T = int32_t> T PerkInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A35A1C))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetJetpackSkinList(uintptr_t curEquipedItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A35C1C))(this, curEquipedItem);
	}
	template <typename T = int32_t> T JetpackSkinSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A36214))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetParachuteSkinList(uintptr_t curEquipedItem) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A36430))(this, curEquipedItem);
	}
	template <typename T = int32_t> T ParachuteSkinSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A36A28))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetKillStreakList() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A36C44))(this);
	}
	template <typename T = int32_t> T KillStreakSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A37130))(this, a, b);
	}
	template <typename T = int32_t> T KillStreakInCsvSortComparison(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3734C))(this, a, b);
	}
	template <typename T = bool> T CheckWeaponDetailItemUnlock(uintptr_t east, uintptr_t weapon, uint32_t itemId) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1A1BF08))(this, east, weapon, itemId);
	}
	template <typename T = uint32_t> T GetBrLobbyShowWeapon() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A37568))(this);
	}
	template <typename T = uint32_t> T GetBrLobbyShowSkin() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A3769C))(this);
	}
	template <typename T = uint32_t> T GetBrLobbyShowProfessionChip() {
		return ((T (*)(LoadoutHelper*))(Il2CppBase() + 0x1A37784))(this);
	}
	template <typename T = uint32_t> T GetProfessionChipSkin(uint32_t weaponID) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A37894))(this, weaponID);
	}
	template <typename T = uint32_t> T GetOtherProfessionalChipSkin(uint32_t weaponID, uintptr_t loadoutInfo) {
		return ((T (*)(LoadoutHelper*, uint32_t, uintptr_t))(Il2CppBase() + 0x1A379A4))(this, weaponID, loadoutInfo);
	}
	template <typename T = void> T ShowSelfWeaponModel(uintptr_t weaponData, uintptr_t squadType, int32_t loadoutIdx) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A37BD4))(this, weaponData, squadType, loadoutIdx);
	}
	template <typename T = uintptr_t> T GetRoleSkinItem(uintptr_t role, uintptr_t aType, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A37F60))(this, role, aType, squadType, loadoutIndex);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T GetRoleSkinItemMap(uintptr_t role, uintptr_t squadType, int32_t loadoutIndex) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A381B8))(this, role, squadType, loadoutIndex);
	}
	template <typename T = void> T GetRoleSkinAseet(uint32_t suitID, uintptr_t outRoleID) {
		return ((T (*)(LoadoutHelper*, uint32_t, uintptr_t))(Il2CppBase() + 0x1A3852C))(this, suitID, outRoleID);
	}
	template <typename T = void> T GetHatSkinAseet(uint32_t hatID, uintptr_t outHatID) {
		return ((T (*)(LoadoutHelper*, uint32_t, uintptr_t))(Il2CppBase() + 0x1A3866C))(this, hatID, outHatID);
	}
	template <typename T = void> T GetBagSkinAseet(uint32_t bagID, uintptr_t outBagID) {
		return ((T (*)(LoadoutHelper*, uint32_t, uintptr_t))(Il2CppBase() + 0x1A387AC))(this, bagID, outBagID);
	}
	template <typename T = void> T GetClothSkinAseet(uint32_t clothID, uintptr_t outClothID, uintptr_t outType) {
		return ((T (*)(LoadoutHelper*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A388EC))(this, clothID, outClothID, outType);
	}
	template <typename T = void> T GetRoleSkinAsset(bool bShowInLoadout, uintptr_t hatItem, uintptr_t bagItem, uintptr_t clothItem, uintptr_t suitItem, uintptr_t roleId, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset) {
		return ((T (*)(LoadoutHelper*, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A38AD4))(this, bShowInLoadout, hatItem, bagItem, clothItem, suitItem, roleId, hatAsset, bagAsset, clothAsset);
	}
	template <typename T = void> T GetRoleSkinAsset_1(bool bShowInLoadout, uint32_t hatId, uint32_t bagId, uint32_t clothId, uint32_t suitId, uintptr_t roleId, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset) {
		return ((T (*)(LoadoutHelper*, bool, uint32_t, uint32_t, uint32_t, uint32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A38CB8))(this, bShowInLoadout, hatId, bagId, clothId, suitId, roleId, hatAsset, bagAsset, clothAsset);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T GetRoleSkinMap(uintptr_t appearance) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3915C))(this, appearance);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoleSkinList(uintptr_t role, uintptr_t skinType) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A39490))(this, role, skinType);
	}
	template <typename T = bool> T IsAttachConflict(uint32_t a, uint32_t b) {
		return ((T (*)(LoadoutHelper*, uint32_t, uint32_t))(Il2CppBase() + 0x1A39A10))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponDetailList(uint32_t itemId) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A39CA0))(this, itemId);
	}
	template <typename T = void> T GetEquitmentGUIDSet(uintptr_t sets) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3A11C))(this, sets);
	}
	template <typename T = void> T ChangeShadowDistance(bool isFar) {
		return ((T (*)(LoadoutHelper*, bool))(Il2CppBase() + 0x1A3AB70))(this, isFar);
	}
	template <typename T = bool> T GetAssetIDForBREquipment(uint32_t weaponID, uint32_t skinID, uintptr_t assetID) {
		return ((T (*)(LoadoutHelper*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1A3AC40))(this, weaponID, skinID, assetID);
	}
	template <typename T = void> T SetRoleSkinByRoleAppearance(uintptr_t roleData, uintptr_t squadType, int32_t loadoutIdx, uintptr_t roleSkin) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A3AFA8))(this, roleData, squadType, loadoutIdx, roleSkin);
	}
	template <typename T = void> T SetWeaponAttr(uintptr_t squadType, int32_t loadoutIdx, uintptr_t weaponAttrConf) {
		return ((T (*)(LoadoutHelper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A3B2DC))(this, squadType, loadoutIdx, weaponAttrConf);
	}
	template <typename T = void> T ShowPlayerModelWithBrLoadoutInfo(uintptr_t loadoutInfo) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3B800))(this, loadoutInfo);
	}
	template <typename T = void> T ShowPlayerModelWithMpLoadoutInfo(uintptr_t loadoutInfo) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3BDE0))(this, loadoutInfo);
	}
	template <typename T = void> T ShowPlayerModelWithPveLoadoutInfo(uintptr_t loadoutInfo) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3C5B8))(this, loadoutInfo);
	}
	template <typename T = int32_t> T GetOrderedIndexWithGettime(uint32_t itemID, uint64_t guid) {
		return ((T (*)(LoadoutHelper*, uint32_t, uint64_t))(Il2CppBase() + 0x1A3CC6C))(this, itemID, guid);
	}
	template <typename T = int32_t> T SortItemWithGettime(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3D2E0))(this, a, b);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSIItemDatasWithType(uint32_t itemID) {
		return ((T (*)(LoadoutHelper*, uint32_t))(Il2CppBase() + 0x1A3CFD0))(this, itemID);
	}
	template <typename T = void> T Copy(Il2CppList<uintptr_t>* src, Il2CppList<uintptr_t>* dest) {
		return ((T (*)(LoadoutHelper*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A3D45C))(this, src, dest);
	}
	template <typename T = void> T Copy_1(Il2CppList<uintptr_t>* src, Il2CppList<uintptr_t>* dest) {
		return ((T (*)(LoadoutHelper*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A3D668))(this, src, dest);
	}
	template <typename T = uintptr_t> T ChangeSquadTypeToViewType(uintptr_t squadType) {
		return ((T (*)(LoadoutHelper*, uintptr_t))(Il2CppBase() + 0x1A3D874))(this, squadType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponOrnamentList(uintptr_t east, uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3D95C))(this, east, weapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponCrosshairList(uintptr_t east, uintptr_t weapon) {
		return ((T (*)(LoadoutHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A3DD30))(this, east, weapon);
	}

};

}
