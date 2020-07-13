#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadInventoryDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadInventoryDataStore"));
	}

	template <typename T = int32_t> static T& NotificationIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_OwnData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_OwnWeaponLoadoutData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_OwnRoleLoadoutData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponLoadoutData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponLoadoutData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkillByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkinByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponOrnamentByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCrosshairByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttachListByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleLoadoutData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleLoadoutData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleAttrData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleHatByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleBagByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleClothByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSuitByLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnVehicleById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCallingCards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOTOSpecialItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemByGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipmentById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByOnlyGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleByGUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipSkinByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnConsumableItemById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTemporaryItemById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNewOwnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoxDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddLuckyBoxDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllSameIdItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveDecomposeItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReceiveNewLuckyBoxes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnMainWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnViceWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLethal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnScoreSteak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCompositeChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnChipStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnJetpackSkinStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnParachuteSkinStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnProfessionProfessionChipList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnGiftBagStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnBoxStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoxStackClone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnGiftBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyDrawBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnLuckyBoardBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnIndividuationItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnNumberItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnConsumableItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnWeaponSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnChipSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnRoleSkins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnOrnaments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnCrosshairs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnSaleTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnTemporarys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeoutItemsMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimeoutItemsMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBadgeNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfHasInventoryData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOwnRoleSkinData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOwnLuckyBoxEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnSaleTicketsForLoadOutShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}

	template <typename T = void> T ReLogin() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3935DDC))(this);
	}
	template <typename T = void> T SetWeaponLoadoutData(uint64_t weaponGuid, uintptr_t data) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x3935F18))(this, weaponGuid, data);
	}
	template <typename T = uintptr_t> T GetWeaponLoadoutData(uint64_t weaponGuid) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t))(Il2CppBase() + 0x39360D0))(this, weaponGuid);
	}
	template <typename T = uintptr_t> T GetWeaponAttrData(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3936450))(this, weapon, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponSkillByLoadoutIndex(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x39366B4))(this, weapon, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponSkinByLoadoutIndex(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x39368B4))(this, weapon, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponOrnamentByLoadoutIndex(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3936AB4))(this, weapon, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponCrosshairByLoadoutIndex(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3936CB4))(this, weapon, squadType, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponAttachListByLoadoutIndex(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3936EB4))(this, weapon, squadType, index);
	}
	template <typename T = uintptr_t> T GetWeaponAttach(uintptr_t weapon, uintptr_t squadType, int32_t index, int32_t pos) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x39370B4))(this, weapon, squadType, index, pos);
	}
	template <typename T = bool> T ContainAttach(uintptr_t weapon, uintptr_t squadType, int32_t index, uint64_t itemGuid) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t, uint64_t))(Il2CppBase() + 0x3937340))(this, weapon, squadType, index, itemGuid);
	}
	template <typename T = void> T SetRoleLoadoutData(uint64_t roleGuid, uintptr_t data) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x3937700))(this, roleGuid, data);
	}
	template <typename T = uintptr_t> T GetRoleLoadoutData(uint64_t roleGuid) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t))(Il2CppBase() + 0x39378B8))(this, roleGuid);
	}
	template <typename T = uintptr_t> T GetRoleAttrData(uintptr_t role, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3937A74))(this, role, squadType, index);
	}
	template <typename T = uintptr_t> T GetRoleHatByLoadoutIndex(uintptr_t role, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3937B9C))(this, role, squadType, index);
	}
	template <typename T = uintptr_t> T GetRoleBagByLoadoutIndex(uintptr_t role, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3937CC4))(this, role, squadType, index);
	}
	template <typename T = uintptr_t> T GetRoleClothByLoadoutIndex(uintptr_t role, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3937DEC))(this, role, squadType, index);
	}
	template <typename T = uintptr_t> T GetRoleSuitByLoadoutIndex(uintptr_t role, uintptr_t squadType, int32_t index) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3937F14))(this, role, squadType, index);
	}
	template <typename T = bool> T HasVehicle(uint32_t vehicleId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x393803C))(this, vehicleId);
	}
	template <typename T = uint64_t> T GetVehicleGUID(uint32_t vehicleId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938130))(this, vehicleId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllVehicle() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3938224))(this);
	}
	template <typename T = uintptr_t> T GetOwnVehicleById(uint32_t ID) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x393830C))(this, ID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCallingCards() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3938400))(this);
	}
	template <typename T = int32_t> T GetOTOSpecialItemCount(uint32_t specialItemID) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x39384E8))(this, specialItemID);
	}
	template <typename T = uintptr_t> T GetItemByGUID(uint64_t guid) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t))(Il2CppBase() + 0x39385DC))(this, guid);
	}
	template <typename T = uintptr_t> T GetEquipmentById(uint32_t id) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x39386EC))(this, id);
	}
	template <typename T = uintptr_t> T GetWeaponByGUID(uint32_t id, uint64_t guid) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t, uint64_t))(Il2CppBase() + 0x39387E0))(this, id, guid);
	}
	template <typename T = uintptr_t> T GetWeaponByOnlyGUID(uint64_t guid) {
		return ((T (*)(SquadInventoryDataStore*, uint64_t))(Il2CppBase() + 0x3938918))(this, guid);
	}
	template <typename T = uintptr_t> T GetWeaponByID(uint32_t weaponId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938A44))(this, weaponId);
	}
	template <typename T = uintptr_t> T GetRoleByGUID(uint32_t id, uint64_t guid) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t, uint64_t))(Il2CppBase() + 0x3938B38))(this, id, guid);
	}
	template <typename T = uintptr_t> T GetSkinByID(uint32_t skinId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938C50))(this, skinId);
	}
	template <typename T = uintptr_t> T GetChipSkinByID(uint32_t skinId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938D44))(this, skinId);
	}
	template <typename T = uintptr_t> T GetOwnConsumableItemById(uint32_t itemId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938E38))(this, itemId);
	}
	template <typename T = uintptr_t> T GetOwnTemporaryItemById(uint32_t itemId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3938F2C))(this, itemId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRoleSkinByID(uint32_t skinId) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x3939020))(this, skinId);
	}
	template <typename T = void> T RemoveItem(uintptr_t item) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t))(Il2CppBase() + 0x3939114))(this, item);
	}
	template <typename T = void> T RemoveItemList(Il2CppList<uintptr_t>* itemList) {
		return ((T (*)(SquadInventoryDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39392C0))(this, itemList);
	}
	template <typename T = void> T SetOwnData(uintptr_t totalInfo) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t))(Il2CppBase() + 0x39394E4))(this, totalInfo);
	}
	template <typename T = void> T AddNewOwnData(uintptr_t totalInfo) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t))(Il2CppBase() + 0x3939674))(this, totalInfo);
	}
	template <typename T = void> T AddBoxDelta(Il2CppList<uintptr_t>* boxes) {
		return ((T (*)(SquadInventoryDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3939820))(this, boxes);
	}
	template <typename T = void> T AddLuckyBoxDelta(Il2CppList<uintptr_t>* luckyboxes) {
		return ((T (*)(SquadInventoryDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39399CC))(this, luckyboxes);
	}
	template <typename T = void> T AddCurrency() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3939B78))(this);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T GetOwnAllItems() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3939C60))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllSameIdItem(int32_t Id) {
		return ((T (*)(SquadInventoryDataStore*, int32_t))(Il2CppBase() + 0x3939D48))(this, Id);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetReceiveNewItems() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3939E3C))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetReceiveDecomposeItems() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x3939F24))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReceiveNewBoxes() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A00C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetReceiveNewLuckyBoxes() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A0F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRole() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A1DC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnMainWeapon() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A2C4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnViceWeapon() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A3AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnWeaponList() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A494))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnPerk() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A5C4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLethal() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A6AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnTactical() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A794))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnScoreSteak() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A87C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleSkill() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393A964))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnWeaponSkill() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AA4C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnAttachment() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AB34))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCompositeChip() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AC1C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnChipStack() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AD04))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnJetpackSkinStack() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393ADEC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnParachuteSkinStack() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AED4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnProfessionProfessionChipList() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393AFBC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnGiftBagStack() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B0A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnBoxStack() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B18C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBoxList() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B274))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetBoxStackClone(uint32_t BoxID) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t))(Il2CppBase() + 0x393B35C))(this, BoxID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnBox() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B450))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnGiftBag() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B538))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBox() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B620))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyDrawBox() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B708))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnLuckyBoardBox() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B7F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnIndividuationItems() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B8D8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnNumberItems() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393B9C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnConsumableItem() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BAA8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnWeaponSkins() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BB90))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnChipSkins() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BC78))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnRoleSkins() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BD60))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnOrnaments() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BE48))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnCrosshairs() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393BF30))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnSaleTickets() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393C018))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnTemporarys() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393C100))(this);
	}
	template <typename T = uintptr_t> T GetCheckUseItem(int32_t goodsId) {
		return ((T (*)(SquadInventoryDataStore*, int32_t))(Il2CppBase() + 0x393C1E8))(this, goodsId);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T GetTimeoutItemsMap() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393C2DC))(this);
	}
	template <typename T = void> T ClearTimeoutItemsMap() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393C3C4))(this);
	}
	template <typename T = int32_t> T GetBadgeNumber() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393C4AC))(this);
	}
	template <typename T = bool> T IfHasInventoryData(uintptr_t itemType, uint32_t itemId) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t, uint32_t))(Il2CppBase() + 0x393C62C))(this, itemType, itemId);
	}
	template <typename T = void> T AddOwnRoleSkinData(uintptr_t roleInfo) {
		return ((T (*)(SquadInventoryDataStore*, uintptr_t))(Il2CppBase() + 0x393C994))(this, roleInfo);
	}
	template <typename T = bool> T IsOwnLuckyBoxEnough(uint32_t boxId, int32_t num) {
		return ((T (*)(SquadInventoryDataStore*, uint32_t, int32_t))(Il2CppBase() + 0x393CAD8))(this, boxId, num);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetOwnSaleTicketsForLoadOutShow() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393CCBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(SquadInventoryDataStore*))(Il2CppBase() + 0x393D038))(this);
	}

};

}
