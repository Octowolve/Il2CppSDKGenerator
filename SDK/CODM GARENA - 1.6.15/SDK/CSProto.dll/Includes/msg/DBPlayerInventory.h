#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBPlayerInventory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBPlayerInventory"));
	}

	template <typename T = uintptr_t> T& _LoadoutBagInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnAttachmentData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnGrenadeData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnPerkData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnScoreStreakData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnFireArmData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnRoleData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnBoxData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _unlocked_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _unlocked_pic() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnWeaponSkillData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnRoleSkillData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnItems() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnCompositeData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnChipData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnJetpackData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _powder() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnConsumableData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _composite_num() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnWingsuitData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnSkinData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnParachuteData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnAppearData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _acc_nice_weapon_num() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _unlocked_peak_level() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnNumberItem() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _WeekWeaponExp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _LastAddWeaponExpTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnTimeLimitData() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnVehicleSkinData() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnSkillItemSkinData() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnOtherItemSkinData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnLuckyBoxList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _SL1Relock() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnOtoSpecialInfo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnIndividuationItems() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& _daily_gain_item() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& _last_update_item_time() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _item_consume_records() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnProfessionChipData() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _SL2Login() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _SL1UnlockAttachment() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_upgrade_data() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnRechargeSpecialInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _inventory_statis() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _firearm_upgrade_record() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _DeleteItems() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _expire_item_list() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _rebuild_expire_item_list() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& _individuationitems_resort() {
		return *(T*)((uintptr_t)this + 0xCD);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _collected_suite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _individuationitems_resort2() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnOrnamentData() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnCrosshairData() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnSaleticketData() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _resort_role_wwl4() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OwnNameCardData() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xEC);
	}

	template <typename T = uintptr_t> T get_LoadoutBagInfo() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8F74))(this);
	}
	template <typename T = void> T set_LoadoutBagInfo(uintptr_t value) {
		return ((T (*)(DBPlayerInventory*, uintptr_t))(Il2CppBase() + 0x51B8F7C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnAttachmentData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8F84))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnGrenadeData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8F8C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnPerkData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8F94))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnScoreStreakData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8F9C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnFireArmData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FA4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnRoleData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FAC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnBoxData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FB4))(this);
	}
	template <typename T = uint32_t> T get_unlocked_level() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FBC))(this);
	}
	template <typename T = void> T set_unlocked_level(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B8FC4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_unlocked_pic() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FCC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnWeaponSkillData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FD4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnRoleSkillData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FDC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnItems() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FE4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnCompositeData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FEC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnChipData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FF4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnJetpackData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B8FFC))(this);
	}
	template <typename T = uint32_t> T get_powder() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9004))(this);
	}
	template <typename T = void> T set_powder(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B900C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnConsumableData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9014))(this);
	}
	template <typename T = uint32_t> T get_composite_num() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B901C))(this);
	}
	template <typename T = void> T set_composite_num(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B9024))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnWingsuitData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B902C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnSkinData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9034))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnParachuteData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B903C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnAppearData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9044))(this);
	}
	template <typename T = uint32_t> T get_acc_nice_weapon_num() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B904C))(this);
	}
	template <typename T = void> T set_acc_nice_weapon_num(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B9054))(this, value);
	}
	template <typename T = uint32_t> T get_unlocked_peak_level() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B905C))(this);
	}
	template <typename T = void> T set_unlocked_peak_level(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B9064))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnNumberItem() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B906C))(this);
	}
	template <typename T = int32_t> T get_WeekWeaponExp() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9074))(this);
	}
	template <typename T = void> T set_WeekWeaponExp(int32_t value) {
		return ((T (*)(DBPlayerInventory*, int32_t))(Il2CppBase() + 0x51B907C))(this, value);
	}
	template <typename T = uint32_t> T get_LastAddWeaponExpTime() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9084))(this);
	}
	template <typename T = void> T set_LastAddWeaponExpTime(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B908C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnTimeLimitData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9094))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnVehicleSkinData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B909C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnSkillItemSkinData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnOtherItemSkinData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnLuckyBoxList() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90B4))(this);
	}
	template <typename T = bool> T get_SL1Relock() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90BC))(this);
	}
	template <typename T = void> T set_SL1Relock(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B90C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnOtoSpecialInfo() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90CC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnIndividuationItems() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90D4))(this);
	}
	template <typename T = uint32_t> T get_daily_gain_item() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90DC))(this);
	}
	template <typename T = void> T set_daily_gain_item(uint32_t value) {
		return ((T (*)(DBPlayerInventory*, uint32_t))(Il2CppBase() + 0x51B90E4))(this, value);
	}
	template <typename T = uint64_t> T get_last_update_item_time() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B90EC))(this);
	}
	template <typename T = void> T set_last_update_item_time(uint64_t value) {
		return ((T (*)(DBPlayerInventory*, uint64_t))(Il2CppBase() + 0x51B90F4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_item_consume_records() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9104))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnProfessionChipData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B910C))(this);
	}
	template <typename T = bool> T get_SL2Login() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9114))(this);
	}
	template <typename T = void> T set_SL2Login(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B911C))(this, value);
	}
	template <typename T = bool> T get_SL1UnlockAttachment() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9124))(this);
	}
	template <typename T = void> T set_SL1UnlockAttachment(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B912C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_upgrade_data() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9134))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnRechargeSpecialInfo() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B913C))(this);
	}
	template <typename T = uintptr_t> T get_inventory_statis() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9144))(this);
	}
	template <typename T = void> T set_inventory_statis(uintptr_t value) {
		return ((T (*)(DBPlayerInventory*, uintptr_t))(Il2CppBase() + 0x51B914C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_firearm_upgrade_record() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9154))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_DeleteItems() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B915C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_expire_item_list() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9164))(this);
	}
	template <typename T = bool> T get_rebuild_expire_item_list() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B916C))(this);
	}
	template <typename T = void> T set_rebuild_expire_item_list(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B9174))(this, value);
	}
	template <typename T = bool> T get_individuationitems_resort() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B917C))(this);
	}
	template <typename T = void> T set_individuationitems_resort(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B9184))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_collected_suite() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B918C))(this);
	}
	template <typename T = bool> T get_individuationitems_resort2() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B9194))(this);
	}
	template <typename T = void> T set_individuationitems_resort2(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B919C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnOrnamentData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B91A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnCrosshairData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B91AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnSaleticketData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B91B4))(this);
	}
	template <typename T = bool> T get_resort_role_wwl4() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B91BC))(this);
	}
	template <typename T = void> T set_resort_role_wwl4(bool value) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B91C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OwnNameCardData() {
		return ((T (*)(DBPlayerInventory*))(Il2CppBase() + 0x51B91CC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBPlayerInventory*, bool))(Il2CppBase() + 0x51B91D4))(this, createIfMissing);
	}

};

}
