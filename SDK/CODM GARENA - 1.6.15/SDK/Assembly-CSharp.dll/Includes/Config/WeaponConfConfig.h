#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponConfConfig"));
	}

	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Propertys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LotteryAttachmentIDs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& ModelRot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& NotShowInWC() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MaxSPI() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_Levelup_Desc() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& MaxAttach() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& MaxSkill() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& PVEDamage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& FireRate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Mobility() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& LOCID_SkinName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& LotteryAttachment_1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& LotteryAttachment_2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& LotteryAttachment_3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& LotterySkill_1() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& LotterySkill_2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& LotterySkill_3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& DefaultAttachment_1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& DefaultAttachment_2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& DefaultAttachment_3() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& DefaultAttachment_4() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& DefaultSkill_1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& DefaultSkill_2() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& DefaultSkill_3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& DefWeaponSkinID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& CamoLotteryID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& UIAttachPointConfig() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& SpecialAttachment() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& CanEquipOptic() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UIProperty() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UIPropertyUnlockLevel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OpenViewSkill() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OpenViewSkillUnlockLevel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& ExpGroupId() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& SuperShowGroup() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeaponSkinBox() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& FireEffectGroupID() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& WinnerCircleAnimID() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& WinnerCircleWeaponMountType() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& DefaultKillEffectId() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ModelRotation() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& CommercialisedShowGroup() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppString*> T& SpecialWeaponAnimator() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& RightHandAnimName() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& IdleAnimationIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPropertys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPropertiesWithAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPropertysWithAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetWeaponPropertysWithAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetWeaponPropertysWithAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIdleAnimationIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_HowToGetPos() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F47DC))(this);
	}
	template <typename T = void> T set_HowToGetPos(uintptr_t value) {
		return ((T (*)(WeaponConfConfig*, uintptr_t))(Il2CppBase() + 0x30F47E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F47EC))(this);
	}
	template <typename T = void> T set_Propertys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F47F4))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F47FC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertys(int32_t WeaponId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F4AD8))(0, WeaponId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertiesWithAttach(Il2CppArray<uintptr_t>* weaponPorps, void* attachID) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x30F4C70))(0, weaponPorps, attachID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertysWithAttachment(uintptr_t weapon, uintptr_t squadType, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x30F4EDC))(0, weapon, squadType, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertysWithAttachment_1(uintptr_t weapon, Il2CppList<uintptr_t>* attachList) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30F5354))(0, weapon, attachList);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetWeaponPropertysWithAttachment_2(uint32_t weaponID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x30F5740))(0, weaponID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIdleAnimationIDs(uint32_t weaponID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x30F58D8))(0, weaponID);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5BE0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AB0))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(WeaponConfConfig*, uint32_t))(Il2CppBase() + 0x30F5C80))(this, value);
	}
	template <typename T = int32_t> T get_NotShowInWC() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5C88))(this);
	}
	template <typename T = void> T set_NotShowInWC(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5C90))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5C98))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5CA0))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CA8))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5CB0))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CB8))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5CC0))(this, value);
	}
	template <typename T = int32_t> T get_MaxSPI() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CC8))(this);
	}
	template <typename T = void> T set_MaxSPI(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5CD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CD8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5CE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CE8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5CF8))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5D00))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D08))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Levelup_Desc() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D18))(this);
	}
	template <typename T = void> T set_LOCID_Levelup_Desc(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5D20))(this, value);
	}
	template <typename T = Il2CppString*> T get_Levelup_Desc() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D28))(this);
	}
	template <typename T = int32_t> T get_MaxAttach() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D38))(this);
	}
	template <typename T = void> T set_MaxAttach(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D40))(this, value);
	}
	template <typename T = int32_t> T get_MaxSkill() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D48))(this);
	}
	template <typename T = void> T set_MaxSkill(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D50))(this, value);
	}
	template <typename T = int32_t> T get_PVEDamage() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D58))(this);
	}
	template <typename T = void> T set_PVEDamage(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D60))(this, value);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4A88))(this);
	}
	template <typename T = void> T set_Damage(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D68))(this, value);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4A90))(this);
	}
	template <typename T = void> T set_FireRate(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D70))(this, value);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4A98))(this);
	}
	template <typename T = void> T set_Accuracy(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D78))(this, value);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AA0))(this);
	}
	template <typename T = void> T set_Mobility(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D80))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AA8))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5D88))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_SkinName() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5D90))(this);
	}
	template <typename T = void> T set_LOCID_SkinName(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5D98))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkinName() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5DA0))(this);
	}
	template <typename T = int32_t> T get_LotteryAttachment_1() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AB8))(this);
	}
	template <typename T = void> T set_LotteryAttachment_1(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DB0))(this, value);
	}
	template <typename T = int32_t> T get_LotteryAttachment_2() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AC0))(this);
	}
	template <typename T = void> T set_LotteryAttachment_2(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DB8))(this, value);
	}
	template <typename T = int32_t> T get_LotteryAttachment_3() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AC8))(this);
	}
	template <typename T = void> T set_LotteryAttachment_3(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DC0))(this, value);
	}
	template <typename T = int32_t> T get_LotterySkill_1() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5DC8))(this);
	}
	template <typename T = void> T set_LotterySkill_1(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DD0))(this, value);
	}
	template <typename T = int32_t> T get_LotterySkill_2() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5DD8))(this);
	}
	template <typename T = void> T set_LotterySkill_2(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DE0))(this, value);
	}
	template <typename T = int32_t> T get_LotterySkill_3() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5DE8))(this);
	}
	template <typename T = void> T set_LotterySkill_3(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5DF0))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_1() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5DF8))(this);
	}
	template <typename T = void> T set_DefaultAttachment_1(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E00))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_2() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E08))(this);
	}
	template <typename T = void> T set_DefaultAttachment_2(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E10))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_3() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E18))(this);
	}
	template <typename T = void> T set_DefaultAttachment_3(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E20))(this, value);
	}
	template <typename T = int32_t> T get_DefaultAttachment_4() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E28))(this);
	}
	template <typename T = void> T set_DefaultAttachment_4(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E30))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_1() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E38))(this);
	}
	template <typename T = void> T set_DefaultSkill_1(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E40))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_2() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E48))(this);
	}
	template <typename T = void> T set_DefaultSkill_2(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E50))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_3() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E58))(this);
	}
	template <typename T = void> T set_DefaultSkill_3(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E60))(this, value);
	}
	template <typename T = int32_t> T get_DefWeaponSkinID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E68))(this);
	}
	template <typename T = void> T set_DefWeaponSkinID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E70))(this, value);
	}
	template <typename T = int32_t> T get_CamoLotteryID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E78))(this);
	}
	template <typename T = void> T set_CamoLotteryID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5E80))(this, value);
	}
	template <typename T = Il2CppString*> T get_UIAttachPointConfig() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E88))(this);
	}
	template <typename T = void> T set_UIAttachPointConfig(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5E90))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5E98))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(WeaponConfConfig*, bool))(Il2CppBase() + 0x30F5EA0))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5EA8))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5EB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5EB8))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5EC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5EC8))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4A80))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5ED8))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5EE0))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5EE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5EF0))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F5EF8))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F00))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(WeaponConfConfig*, bool))(Il2CppBase() + 0x30F5F08))(this, value);
	}
	template <typename T = int32_t> T get_SpecialAttachment() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F10))(this);
	}
	template <typename T = void> T set_SpecialAttachment(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5F18))(this, value);
	}
	template <typename T = bool> T get_CanEquipOptic() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F20))(this);
	}
	template <typename T = void> T set_CanEquipOptic(bool value) {
		return ((T (*)(WeaponConfConfig*, bool))(Il2CppBase() + 0x30F5F28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UIProperty() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F30))(this);
	}
	template <typename T = void> T set_UIProperty(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F5F38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UIPropertyUnlockLevel() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F40))(this);
	}
	template <typename T = void> T set_UIPropertyUnlockLevel(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F5F48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OpenViewSkill() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F50))(this);
	}
	template <typename T = void> T set_OpenViewSkill(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F5F58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OpenViewSkillUnlockLevel() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F60))(this);
	}
	template <typename T = void> T set_OpenViewSkillUnlockLevel(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F5F68))(this, value);
	}
	template <typename T = int32_t> T get_ExpGroupId() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F70))(this);
	}
	template <typename T = void> T set_ExpGroupId(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5F78))(this, value);
	}
	template <typename T = int32_t> T get_SuperShowGroup() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F80))(this);
	}
	template <typename T = void> T set_SuperShowGroup(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5F88))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WeaponSkinBox() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5F90))(this);
	}
	template <typename T = void> T set_WeaponSkinBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F5F98))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FA0))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(WeaponConfConfig*, bool))(Il2CppBase() + 0x30F5FA8))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FB0))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5FB8))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FC0))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(WeaponConfConfig*, uint32_t))(Il2CppBase() + 0x30F5FC8))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FD0))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5FD8))(this, value);
	}
	template <typename T = int32_t> T get_FireEffectGroupID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FE0))(this);
	}
	template <typename T = void> T set_FireEffectGroupID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5FE8))(this, value);
	}
	template <typename T = int32_t> T get_WinnerCircleAnimID() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5FF0))(this);
	}
	template <typename T = void> T set_WinnerCircleAnimID(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F5FF8))(this, value);
	}
	template <typename T = int32_t> T get_WinnerCircleWeaponMountType() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F6000))(this);
	}
	template <typename T = void> T set_WinnerCircleWeaponMountType(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F6008))(this, value);
	}
	template <typename T = int32_t> T get_DefaultKillEffectId() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F6010))(this);
	}
	template <typename T = void> T set_DefaultKillEffectId(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F6018))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ModelRotation() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F4AD0))(this);
	}
	template <typename T = void> T set_ModelRotation(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30F6020))(this, value);
	}
	template <typename T = int32_t> T get_CommercialisedShowGroup() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F6028))(this);
	}
	template <typename T = void> T set_CommercialisedShowGroup(int32_t value) {
		return ((T (*)(WeaponConfConfig*, int32_t))(Il2CppBase() + 0x30F6030))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialWeaponAnimator() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F6038))(this);
	}
	template <typename T = void> T set_SpecialWeaponAnimator(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F6040))(this, value);
	}
	template <typename T = Il2CppString*> T get_RightHandAnimName() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F6048))(this);
	}
	template <typename T = void> T set_RightHandAnimName(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F6050))(this, value);
	}
	template <typename T = Il2CppString*> T get_IdleAnimationIndex() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F5BD8))(this);
	}
	template <typename T = void> T set_IdleAnimationIndex(Il2CppString* value) {
		return ((T (*)(WeaponConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F6058))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F6060))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WeaponConfConfig*))(Il2CppBase() + 0x30F67E8))(this);
	}

};

}
