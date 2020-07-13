#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PVEWeaponConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PVEWeaponConfig"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& _cacheOffWallWeaponList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SquareName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& WhitePicture() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& BaseCritDamage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& BaseWeaknessDamage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& BaseDamageValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& BaseFireInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& DefaultSkill_1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& DefaultSkill_2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& DefaultSkill_3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& DefaultSkill_4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& DefaultSkill_5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& DefaultSkill_6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& BasicPower() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& TalentGroupId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& StrengthenGroupId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& AttrId_1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& AttrValue_1() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& AttrId_2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& AttrValue_2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& AttrId_3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& AttrValue_3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& AttrId_4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& AttrValue_4() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& AttrId_5() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& AttrValue_5() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& InOffWall() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& InWonderBox() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& OffWallShowSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OffWallSelectBox() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uint32_t>*> T get_CacheOffWallWeaponList() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C4FC))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C634))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C6D4))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(PVEWeaponConfig*, uint32_t))(Il2CppBase() + 0x378C6DC))(this, value);
	}
	template <typename T = int32_t> T get_WeaponCategory() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C6E4))(this);
	}
	template <typename T = void> T set_WeaponCategory(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C6EC))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C6F4))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(PVEWeaponConfig*, bool))(Il2CppBase() + 0x378C6FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C704))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C70C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C714))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C724))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C72C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C734))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C744))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C74C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C754))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C764))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C76C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SquareName() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C774))(this);
	}
	template <typename T = void> T set_SquareName(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C77C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WhitePicture() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C784))(this);
	}
	template <typename T = void> T set_WhitePicture(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C78C))(this, value);
	}
	template <typename T = int32_t> T get_BaseCritDamage() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C794))(this);
	}
	template <typename T = void> T set_BaseCritDamage(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C79C))(this, value);
	}
	template <typename T = int32_t> T get_BaseWeaknessDamage() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7A4))(this);
	}
	template <typename T = void> T set_BaseWeaknessDamage(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C7AC))(this, value);
	}
	template <typename T = int32_t> T get_BaseDamageValue() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7B4))(this);
	}
	template <typename T = void> T set_BaseDamageValue(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C7BC))(this, value);
	}
	template <typename T = float> T get_BaseFireInterval() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7C4))(this);
	}
	template <typename T = void> T set_BaseFireInterval(float value) {
		return ((T (*)(PVEWeaponConfig*, float))(Il2CppBase() + 0x378C7CC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_1() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7D4))(this);
	}
	template <typename T = void> T set_DefaultSkill_1(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C7DC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_2() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7E4))(this);
	}
	template <typename T = void> T set_DefaultSkill_2(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C7EC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_3() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C7F4))(this);
	}
	template <typename T = void> T set_DefaultSkill_3(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C7FC))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_4() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C804))(this);
	}
	template <typename T = void> T set_DefaultSkill_4(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C80C))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_5() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C814))(this);
	}
	template <typename T = void> T set_DefaultSkill_5(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C81C))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSkill_6() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C824))(this);
	}
	template <typename T = void> T set_DefaultSkill_6(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C82C))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C834))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C83C))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C844))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(PVEWeaponConfig*, uint32_t))(Il2CppBase() + 0x378C84C))(this, value);
	}
	template <typename T = int32_t> T get_BasicPower() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C854))(this);
	}
	template <typename T = void> T set_BasicPower(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C85C))(this, value);
	}
	template <typename T = int32_t> T get_TalentGroupId() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C864))(this);
	}
	template <typename T = void> T set_TalentGroupId(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C86C))(this, value);
	}
	template <typename T = int32_t> T get_StrengthenGroupId() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C874))(this);
	}
	template <typename T = void> T set_StrengthenGroupId(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C87C))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_1() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C884))(this);
	}
	template <typename T = void> T set_AttrId_1(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C88C))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_1() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C894))(this);
	}
	template <typename T = void> T set_AttrValue_1(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C89C))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_2() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8A4))(this);
	}
	template <typename T = void> T set_AttrId_2(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8AC))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_2() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8B4))(this);
	}
	template <typename T = void> T set_AttrValue_2(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8BC))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_3() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8C4))(this);
	}
	template <typename T = void> T set_AttrId_3(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8CC))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_3() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8D4))(this);
	}
	template <typename T = void> T set_AttrValue_3(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8DC))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_4() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8E4))(this);
	}
	template <typename T = void> T set_AttrId_4(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8EC))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_4() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C8F4))(this);
	}
	template <typename T = void> T set_AttrValue_4(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C8FC))(this, value);
	}
	template <typename T = int32_t> T get_AttrId_5() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C904))(this);
	}
	template <typename T = void> T set_AttrId_5(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C90C))(this, value);
	}
	template <typename T = int32_t> T get_AttrValue_5() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C914))(this);
	}
	template <typename T = void> T set_AttrValue_5(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C91C))(this, value);
	}
	template <typename T = int32_t> T get_InOffWall() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C924))(this);
	}
	template <typename T = void> T set_InOffWall(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C92C))(this, value);
	}
	template <typename T = int32_t> T get_InWonderBox() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C934))(this);
	}
	template <typename T = void> T set_InWonderBox(int32_t value) {
		return ((T (*)(PVEWeaponConfig*, int32_t))(Il2CppBase() + 0x378C93C))(this, value);
	}
	template <typename T = Il2CppString*> T get_OffWallShowSprite() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C944))(this);
	}
	template <typename T = void> T set_OffWallShowSprite(Il2CppString* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppString*))(Il2CppBase() + 0x378C94C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OffWallSelectBox() {
		return ((T (*)(PVEWeaponConfig*))(Il2CppBase() + 0x378C62C))(this);
	}
	template <typename T = void> T set_OffWallSelectBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PVEWeaponConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x378C954))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PVEWeaponConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378C95C))(this, bytes, position);
	}

};

}
