#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRThrowingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRThrowingConfig"));
	}

	template <typename T = uintptr_t> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CanAIUse() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SettingItemType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ClipItemId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& WhitePicture() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& MaxAttach() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Mobility() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Damage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& FireRate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& LotteryRotation() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkinBox() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55954))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55964))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55A14))(this);
	}
	template <typename T = uintptr_t> T get_WeaponCategory() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55A1C))(this);
	}
	template <typename T = void> T set_WeaponCategory(uintptr_t value) {
		return ((T (*)(BRThrowingConfig*, uintptr_t))(Il2CppBase() + 0x2D55A24))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55A2C))(this);
	}
	template <typename T = void> T set_WeaponName(uintptr_t value) {
		return ((T (*)(BRThrowingConfig*, uintptr_t))(Il2CppBase() + 0x2D55A34))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_CanAttachments() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55A3C))(this);
	}
	template <typename T = uintptr_t> T get_EBRWeaponItemType() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55AE0))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55AE8))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55BE4))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55E10))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D478E8))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55EE0))(this, value);
	}
	template <typename T = bool> T get_CanAIUse() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55EE8))(this);
	}
	template <typename T = void> T set_CanAIUse(bool value) {
		return ((T (*)(BRThrowingConfig*, bool))(Il2CppBase() + 0x2D55EF0))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55EF8))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F00))(this, value);
	}
	template <typename T = int32_t> T get_SettingItemType() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55BDC))(this);
	}
	template <typename T = void> T set_SettingItemType(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F08))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F10))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F18))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F20))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRThrowingConfig*, bool))(Il2CppBase() + 0x2D55F28))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F30))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F38))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F40))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F48))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F50))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F58))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F60))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F68))(this, value);
	}
	template <typename T = int32_t> T get_ClipItemId() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F70))(this);
	}
	template <typename T = void> T set_ClipItemId(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D55F78))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F80))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D55F88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55F90))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FA0))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D55FA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FB0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FC0))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D55FC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FD0))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D5595C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D55FE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_WhitePicture() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FE8))(this);
	}
	template <typename T = void> T set_WhitePicture(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D55FF0))(this, value);
	}
	template <typename T = int32_t> T get_MaxAttach() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D55FF8))(this);
	}
	template <typename T = void> T set_MaxAttach(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56000))(this, value);
	}
	template <typename T = int32_t> T get_Mobility() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56008))(this);
	}
	template <typename T = void> T set_Mobility(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56010))(this, value);
	}
	template <typename T = int32_t> T get_Damage() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56018))(this);
	}
	template <typename T = void> T set_Damage(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56020))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56028))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56030))(this, value);
	}
	template <typename T = int32_t> T get_FireRate() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56038))(this);
	}
	template <typename T = void> T set_FireRate(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56040))(this, value);
	}
	template <typename T = int32_t> T get_Accuracy() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56048))(this);
	}
	template <typename T = void> T set_Accuracy(int32_t value) {
		return ((T (*)(BRThrowingConfig*, int32_t))(Il2CppBase() + 0x2D56050))(this, value);
	}
	template <typename T = bool> T get_IsShow() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56058))(this);
	}
	template <typename T = void> T set_IsShow(bool value) {
		return ((T (*)(BRThrowingConfig*, bool))(Il2CppBase() + 0x2D56060))(this, value);
	}
	template <typename T = Il2CppString*> T get_LotteryRotation() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56068))(this);
	}
	template <typename T = void> T set_LotteryRotation(Il2CppString* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppString*))(Il2CppBase() + 0x2D56070))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkinBox() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D56078))(this);
	}
	template <typename T = void> T set_SkinBox(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRThrowingConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D56080))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRThrowingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D56088))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BRThrowingConfig*))(Il2CppBase() + 0x2D5647C))(this);
	}

};

}
