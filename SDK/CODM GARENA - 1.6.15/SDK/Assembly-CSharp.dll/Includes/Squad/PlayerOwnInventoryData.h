#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class PlayerOwnInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "PlayerOwnInventoryData"));
	}

	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnRoles() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnMainWeapons() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnViceWeapons() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnPerks() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnLethal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnTactical() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnScoreSteak() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnAttachment() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnWeaponSkill() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*> T& m_OwnRoleSkill() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnBox() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnLuckyBox() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& m_BoxStacks() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnChip() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& m_ChipStacks() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnGiftBag() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& m_GiftBagStacks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnConsumeItem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnIndividuationItems() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnNumberItems() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnWeaponSkins() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnChipSkins() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnRoleSkins() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnVehicles() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnWingSuitSkins() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnParachuteSkins() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnProfessionChipItems() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnLuckyDrawBox() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnLuckyBoardBox() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnOrnamentItems() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnCrosshairItems() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnSaleTicketItems() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnTemporaryItems() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OwnCallingCardItems() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_OwnAllItems() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_CacheTimeoutItemMap() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_PrepareToShowReceiveItems() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PrepareToShowReceiveBoxes() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PrepareToShowReceiveLuckyBoxes() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<void*>*> T& m_PrepareToShowDecomposeItems() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& m_otoSpecialItem() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mWPDataStore() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNewOwnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoxDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLuckyBoxDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasContainItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTimeoutItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCacheTimeoutItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheTimeoutItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnLuckBoxItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSIWeapon2Map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSIItem2Map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnScoreStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnRoleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnWeaponSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItemIntoStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnGiftBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnConsumableItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllSameIdItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveDecomposeItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewLuckyBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnMainWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnMainWeaponById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnMainWeaponByGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnViceWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnViceWeaponById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnViceWeaponByGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnPerkList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLethalList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTacticalList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLethalAndTacticalItemById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryLethalAndTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOTOSpecialItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnScoreSteak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkillList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkillByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryRoleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnAttachmentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnAttachmentByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkinByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkinById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnOrnamentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponOrnamentByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCrosshairList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponCrosshairByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnSaleTicketList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnSaleTicketByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTemporaryList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTemporaryByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkinByOnlyGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkinById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryRoleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnVehicleById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCallingCards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryVehicles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnChipSkinById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnConsumableItemById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTemporaryItemById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ifHasInventoryProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryChipSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryJetpack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryParachute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryScoreStreak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryOrnament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryCrosshair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventorySaleTicket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyDrawBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBoardBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCompositeChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnGiftBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnConsumableItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemStackList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnBoxStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnGiftBagStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnChipStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJetpackSkinStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParachuteSkinStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProfessionChipList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoxStackClone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemFromStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndividuationItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnNumberItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOrnamentItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCrosshairItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSaleTicketItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCallingCardItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnOTOSpecialItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumberItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponSkinIItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitProfessionalChipSkinItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVehicleSkinItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnChipSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBRWingSuitSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBRParachuteSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBRProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOwnRoleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}

	template <typename T = uintptr_t> T get_WPDataStore() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x391F00C))(this);
	}
	template <typename T = void> T SetOwnData(uintptr_t totalInfo) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t))(Il2CppBase() + 0x391F0BC))(this, totalInfo);
	}
	template <typename T = void> T InitInventory(uintptr_t totalInfo, bool isAdd) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t, bool))(Il2CppBase() + 0x391F170))(this, totalInfo, isAdd);
	}
	template <typename T = void> T AddNewOwnData(uintptr_t totalInfo) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t))(Il2CppBase() + 0x39245F8))(this, totalInfo);
	}
	template <typename T = void> T AddBoxDelta(Il2CppList<uintptr_t>* boxes) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39246B4))(this, boxes);
	}
	template <typename T = void> T AddLuckyBoxDelta(Il2CppList<uintptr_t>* boxes) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x392476C))(this, boxes);
	}
	template <typename T = void> T AddCurrency() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3924824))(this);
	}
	template <typename T = uintptr_t> T HasContainItem(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x39248F8))(this, guid);
	}
	template <typename T = void> T CheckTimeoutItem(uintptr_t item) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t))(Il2CppBase() + 0x3924A14))(this, item);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T GetCacheTimeoutItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3924B9C))(this);
	}
	template <typename T = void> T ClearCacheTimeoutItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x391F588))(this);
	}
	template <typename T = void> T InitOwnRole(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x391FAE0))(this, list);
	}
	template <typename T = void> T InitOwnLuckBoxItem(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x392290C))(this, list);
	}
	template <typename T = void> T AddSIWeapon2Map(Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>* originMap, uintptr_t data) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*, uintptr_t))(Il2CppBase() + 0x3925454))(this, originMap, data);
	}
	template <typename T = void> T InitOwnWeapon(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3921020))(this, list);
	}
	template <typename T = void> T AddSIItem2Map(Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>* originMap, uintptr_t data) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppDictionary<uint32_t, Il2CppList<uintptr_t>*>*, uintptr_t))(Il2CppBase() + 0x3925CF8))(this, originMap, data);
	}
	template <typename T = void> T InitOwnPerk(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39208B0))(this, list);
	}
	template <typename T = void> T InitOwnGrenade(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3920AFC))(this, list);
	}
	template <typename T = void> T InitOwnScoreStreak(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3920DAC))(this, list);
	}
	template <typename T = void> T InitOwnRoleSkill(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x391F894))(this, list);
	}
	template <typename T = void> T InitOwnWeaponSkill(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x391FE54))(this, list);
	}
	template <typename T = void> T InitOwnAttachment(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39200C8))(this, list);
	}
	template <typename T = void> T AddItemIntoStack(uintptr_t item, uintptr_t stack) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x392606C))(this, item, stack);
	}
	template <typename T = void> T InitOwnChip(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3921720))(this, list);
	}
	template <typename T = void> T InitOwnGiftBag(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39219AC))(this, list);
	}
	template <typename T = void> T InitOwnBox(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39213C4))(this, list);
	}
	template <typename T = void> T InitOwnConsumableItem(Il2CppList<uintptr_t>* list, bool bAdd) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3921F14))(this, list, bAdd);
	}
	template <typename T = void> T InitFrame(Il2CppList<uintptr_t>* picArray, bool isAdd) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x39231FC))(this, picArray, isAdd);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T GetOwnAllItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3926328))(this);
	}
	template <typename T = uintptr_t> T GetItemByGUID(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x39263C8))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllSameIdItem(int32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, int32_t))(Il2CppBase() + 0x392651C))(this, id);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetReceiveNewItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x39267C8))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetReceiveDecomposeItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3926868))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReceiveNewBoxes() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3926908))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReceiveNewLuckyBoxes() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x39269A8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3926A48))(this);
	}
	template <typename T = uintptr_t> T GetOwnRoleByOnlyGuid(uint32_t id, uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t, uint64_t))(Il2CppBase() + 0x3926CC0))(this, id, guid);
	}
	template <typename T = bool> T IfHasInventoryRole(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3926EB0))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnMainWeaponList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3927008))(this);
	}
	template <typename T = uintptr_t> T GetOwnMainWeaponById(uint32_t itemId, uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t, uint64_t))(Il2CppBase() + 0x3925718))(this, itemId, guid);
	}
	template <typename T = uintptr_t> T GetOwnMainWeaponByGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x3927280))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnViceWeaponList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x39275A8))(this);
	}
	template <typename T = uintptr_t> T GetOwnViceWeaponById(uint32_t itemId, uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t, uint64_t))(Il2CppBase() + 0x3925908))(this, itemId, guid);
	}
	template <typename T = uintptr_t> T GetOwnViceWeaponByGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x3927820))(this, guid);
	}
	template <typename T = uintptr_t> T GetWeaponByItemId(uint32_t weaponId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3927B48))(this, weaponId);
	}
	template <typename T = bool> T IfHasInventoryWeapon(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3927D40))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnPerkList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3927F28))(this);
	}
	template <typename T = bool> T IfHasInventoryPerk(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x39281A0))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLethalList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x39282F8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnTacticalList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3928570))(this);
	}
	template <typename T = uintptr_t> T GetOwnLethalAndTacticalItemById(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x39287E8))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryLethalAndTactical(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x39289E4))(this, itemId);
	}
	template <typename T = int32_t> T GetOTOSpecialItemCount(uint32_t specialID) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3928BCC))(this, specialID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnScoreSteak() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3928CCC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleSkillList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3928D6C))(this);
	}
	template <typename T = uintptr_t> T GetOwnRoleSkillByOnlyGuid(uint32_t id, uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t, uint64_t))(Il2CppBase() + 0x3928FE4))(this, id, guid);
	}
	template <typename T = bool> T IfHasInventoryRoleSkill(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x39291D4))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnWeaponSkill() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392932C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnAttachmentList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x39293CC))(this);
	}
	template <typename T = uintptr_t> T GetOwnAttachmentByOnlyGuid(uint32_t id, uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t, uint64_t))(Il2CppBase() + 0x3929644))(this, id, guid);
	}
	template <typename T = bool> T IfHasInventoryAttachment(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3929834))(this, itemId);
	}
	template <typename T = uintptr_t> T GetOwnWeaponSkinByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x392998C))(this, guid);
	}
	template <typename T = uintptr_t> T GetOwnWeaponSkinById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3929B18))(this, id);
	}
	template <typename T = bool> T IfHasInventoryWeaponSkin(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x3929C88))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnOrnamentList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x3929E08))(this);
	}
	template <typename T = uintptr_t> T GetOwnWeaponOrnamentByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x3929EA8))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCrosshairList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392A034))(this);
	}
	template <typename T = uintptr_t> T GetOwnWeaponCrosshairByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x392A0D4))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnSaleTicketList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392A260))(this);
	}
	template <typename T = uintptr_t> T GetOwnSaleTicketByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x392A300))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnTemporaryList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392A48C))(this);
	}
	template <typename T = uintptr_t> T GetOwnTemporaryByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x392A52C))(this, guid);
	}
	template <typename T = uintptr_t> T GetOwnRoleSkinByOnlyGuid(uint64_t guid) {
		return ((T (*)(PlayerOwnInventoryData*, uint64_t))(Il2CppBase() + 0x392A6B8))(this, guid);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleSkinById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392A844))(this, id);
	}
	template <typename T = bool> T IfHasInventoryRoleSkin(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392AA2C))(this, itemId);
	}
	template <typename T = uintptr_t> T GetOwnVehicleById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392AB20))(this, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCallingCards() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392AC90))(this);
	}
	template <typename T = bool> T IfHasInventoryVehicles(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392AD30))(this, itemId);
	}
	template <typename T = uintptr_t> T GetOwnChipSkinById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392ADE8))(this, id);
	}
	template <typename T = uintptr_t> T GetOwnConsumableItemById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392AF58))(this, id);
	}
	template <typename T = uintptr_t> T GetOwnTemporaryItemById(uint32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B0C8))(this, id);
	}
	template <typename T = bool> T ifHasInventoryProfessionChip(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B27C))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryChipSkin(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B3C4))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryJetpack(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B50C))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryParachute(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B654))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryScoreStreak(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B79C))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryOrnament(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392B8E4))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryCrosshair(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392BA2C))(this, itemId);
	}
	template <typename T = bool> T IfHasInventorySaleTicket(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392BB74))(this, itemId);
	}
	template <typename T = bool> T IfHasInventoryTemporary(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392BCBC))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnBox() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392BE04))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyDrawBox() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392BEA4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBoardBox() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392BF44))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBox() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392BFE4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCompositeChip() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C084))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnGiftBag() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C124))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnConsumableItem() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C1C4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetItemStackList(uintptr_t stackDic) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t))(Il2CppBase() + 0x392C264))(this, stackDic);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnBoxStack() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C754))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBoxList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C7FC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnGiftBagStack() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C89C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnChipStack() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C944))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetJetpackSkinStack() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392C9EC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetParachuteSkinStack() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392CA8C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetProfessionChipList() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392CB2C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBoxStackClone(uint32_t BoxID) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392CBCC))(this, BoxID);
	}
	template <typename T = void> T RemoveItemFromStack(uintptr_t item, uintptr_t stack) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x392CE34))(this, item, stack);
	}
	template <typename T = void> T RemoveItem(uintptr_t item) {
		return ((T (*)(PlayerOwnInventoryData*, uintptr_t))(Il2CppBase() + 0x392CFF4))(this, item);
	}
	template <typename T = void> T InitOwnIndividuationItem(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x392226C))(this, list);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetIndividuationItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392E9C0))(this);
	}
	template <typename T = bool> T IfHasInventoryIndividuation(uint32_t itemId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392EA60))(this, itemId);
	}
	template <typename T = void> T InitOwnNumberItem(Il2CppList<uintptr_t>* list, bool bAdd) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3922494))(this, list, bAdd);
	}
	template <typename T = void> T InitOrnamentItems(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3923C64))(this, list);
	}
	template <typename T = void> T InitCrosshairItems(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3923E9C))(this, list);
	}
	template <typename T = void> T InitSaleTicketItems(Il2CppList<uintptr_t>* list, bool bAdd) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x39240D4))(this, list, bAdd);
	}
	template <typename T = void> T InitCallingCardItems(Il2CppList<uintptr_t>* datas) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39243E0))(this, datas);
	}
	template <typename T = void> T InitOwnOTOSpecialItem(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x392274C))(this, list);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNumberItems() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392EBA8))(this);
	}
	template <typename T = void> T InitWeaponSkinIItems(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3920314))(this, list);
	}
	template <typename T = void> T InitProfessionalChipSkinItems(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39239B8))(this, list);
	}
	template <typename T = void> T InitVehicleSkinItem(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3920604))(this, list);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetVehicles() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392EDB4))(this);
	}
	template <typename T = bool> T HasVehicle(uint32_t vehicleId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392EE54))(this, vehicleId);
	}
	template <typename T = uint64_t> T GetVehicleGUID(uint32_t vehicleId) {
		return ((T (*)(PlayerOwnInventoryData*, uint32_t))(Il2CppBase() + 0x392EF04))(this, vehicleId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnWeaponSkins() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392EFC8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnChipSkins() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392F068))(this);
	}
	template <typename T = void> T InitBRWingSuitSkin(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3923310))(this, list);
	}
	template <typename T = void> T InitBRParachuteSkin(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3923548))(this, list);
	}
	template <typename T = void> T InitBRProfessionChip(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3923780))(this, list);
	}
	template <typename T = void> T InitOwnRoleSkin(Il2CppList<uintptr_t>* list) {
		return ((T (*)(PlayerOwnInventoryData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x391F65C))(this, list);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleSkins() {
		return ((T (*)(PlayerOwnInventoryData*))(Il2CppBase() + 0x392F108))(this);
	}
	template <typename T = uintptr_t> T GetCheckUseItem(int32_t id) {
		return ((T (*)(PlayerOwnInventoryData*, int32_t))(Il2CppBase() + 0x392F1A8))(this, id);
	}
	template <typename T = int32_t> static T GetItemStackListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x392F400))(0, a, b);
	}
	template <typename T = bool> static T GetNumberItemsm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x392F594))(0, it);
	}

};

}
