#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipPartConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipPartConfig"));
	}

	template <typename T = uintptr_t> T& AttachSlotType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Propertys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CanBeAssembled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& AssembledInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& CanAIUse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SettingItemType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SlotType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& MirrorRatio() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WeaponCanUseBox() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& SubScriptSpriteName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& EquipSound() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& GrabSound() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& DropSound() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Mobility() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& FireRate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& ForAR() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ForSniper() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& ForLMG() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = bool> T& ForSMG() {
		return *(T*)((uintptr_t)this + 0x83);
	}
	template <typename T = bool> T& ForShotgun() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& ForPistol() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& ForLaunch() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = bool> T& ForMelee() {
		return *(T*)((uintptr_t)this + 0x87);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssembledInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AA94))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AAA4))(this);
	}
	template <typename T = uintptr_t> T get_AttachType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AAAC))(this);
	}
	template <typename T = uintptr_t> T get_AttachSlotType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AABC))(this);
	}
	template <typename T = void> T set_AttachSlotType(uintptr_t value) {
		return ((T (*)(BREquipPartConfig*, uintptr_t))(Il2CppBase() + 0x2D4AAC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Propertys() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D47D54))(this);
	}
	template <typename T = void> T set_Propertys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4AACC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CanBeAssembled() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AAD4))(this);
	}
	template <typename T = void> T set_CanBeAssembled(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4AADC))(this, value);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AAE4))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4ABEC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetAssembledInfo(uintptr_t assembledType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D4AFFC))(0, assembledType);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B408))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D478D8))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B4D8))(this, value);
	}
	template <typename T = bool> T get_CanAIUse() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B4E0))(this);
	}
	template <typename T = void> T set_CanAIUse(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B4E8))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AAB4))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B4F0))(this, value);
	}
	template <typename T = int32_t> T get_SettingItemType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4ABE4))(this);
	}
	template <typename T = void> T set_SettingItemType(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B4F8))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B500))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B508))(this, value);
	}
	template <typename T = int32_t> T get_SlotType() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AF8C))(this);
	}
	template <typename T = void> T set_SlotType(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B510))(this, value);
	}
	template <typename T = float> T get_MirrorRatio() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B518))(this);
	}
	template <typename T = void> T set_MirrorRatio(float value) {
		return ((T (*)(BREquipPartConfig*, float))(Il2CppBase() + 0x2D4B520))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B528))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B530))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B538))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B540))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B548))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B550))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B558))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B560))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B568))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B570))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B578))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B580))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B588))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B598))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B5A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B5A8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B5B8))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B5C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B5C8))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AA9C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B5D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WeaponCanUseBox() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B5E0))(this);
	}
	template <typename T = void> T set_WeaponCanUseBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D4B5E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B5F0))(this);
	}
	template <typename T = void> T set_SubScriptSpriteName(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B5F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EquipSound() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B600))(this);
	}
	template <typename T = void> T set_EquipSound(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B608))(this, value);
	}
	template <typename T = Il2CppString*> T get_GrabSound() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B610))(this);
	}
	template <typename T = void> T set_GrabSound(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B618))(this, value);
	}
	template <typename T = Il2CppString*> T get_DropSound() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4B620))(this);
	}
	template <typename T = void> T set_DropSound(Il2CppString* value) {
		return ((T (*)(BREquipPartConfig*, Il2CppString*))(Il2CppBase() + 0x2D4B628))(this, value);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFAC))(this);
	}
	template <typename T = void> T set_Mobility(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B630))(this, value);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AF94))(this);
	}
	template <typename T = void> T set_Damage(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B638))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFB4))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B640))(this, value);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AF9C))(this);
	}
	template <typename T = void> T set_FireRate(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B648))(this, value);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFA4))(this);
	}
	template <typename T = void> T set_Accuracy(int32_t value) {
		return ((T (*)(BREquipPartConfig*, int32_t))(Il2CppBase() + 0x2D4B650))(this, value);
	}
	template <typename T = bool> T get_ForAR() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFBC))(this);
	}
	template <typename T = void> T set_ForAR(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B658))(this, value);
	}
	template <typename T = bool> T get_ForSniper() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFC4))(this);
	}
	template <typename T = void> T set_ForSniper(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B660))(this, value);
	}
	template <typename T = bool> T get_ForLMG() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFD4))(this);
	}
	template <typename T = void> T set_ForLMG(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B668))(this, value);
	}
	template <typename T = bool> T get_ForSMG() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFCC))(this);
	}
	template <typename T = void> T set_ForSMG(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B670))(this, value);
	}
	template <typename T = bool> T get_ForShotgun() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFDC))(this);
	}
	template <typename T = void> T set_ForShotgun(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B678))(this, value);
	}
	template <typename T = bool> T get_ForPistol() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFE4))(this);
	}
	template <typename T = void> T set_ForPistol(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B680))(this, value);
	}
	template <typename T = bool> T get_ForLaunch() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFF4))(this);
	}
	template <typename T = void> T set_ForLaunch(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B688))(this, value);
	}
	template <typename T = bool> T get_ForMelee() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4AFEC))(this);
	}
	template <typename T = void> T set_ForMelee(bool value) {
		return ((T (*)(BREquipPartConfig*, bool))(Il2CppBase() + 0x2D4B690))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipPartConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4B698))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BREquipPartConfig*))(Il2CppBase() + 0x2D4BB64))(this);
	}

};

}
