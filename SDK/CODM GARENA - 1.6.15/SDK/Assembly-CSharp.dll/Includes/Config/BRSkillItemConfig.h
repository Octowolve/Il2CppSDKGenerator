#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRSkillItemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRSkillItemConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CanAIUse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SkillType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& SpriteLargeName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsDoubleCheck() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& CoolDown() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& ItemClass() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& CheckUseSpace() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& ValidUseSpaceSize() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& NeedToStopMove() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& CanUseInAir() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& CanUseInWater() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = bool> T& IsRemoteControlled() {
		return *(T*)((uintptr_t)this + 0x63);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSkillThrowingItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54C24))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54C34))(this);
	}
	template <typename T = uintptr_t> T get_BRSkillType() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54CE4))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54F14))(this);
	}
	template <typename T = uintptr_t> T get_EBRSkillItemType() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54F1C))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54F2C))(this);
	}
	template <typename T = bool> static T IsSkillThrowingItem(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D54F34))(0, itemId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55080))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D478F0))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D55150))(this, value);
	}
	template <typename T = bool> T get_CanAIUse() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55158))(this);
	}
	template <typename T = void> T set_CanAIUse(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D55160))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54F24))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D55168))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55170))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D55178))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkillType() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54F0C))(this);
	}
	template <typename T = void> T set_SkillType(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55180))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55188))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D55190))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55198))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D551A0))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551A8))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D551B0))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551B8))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D551C0))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551C8))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D551D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551D8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D551E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551E8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D551F8))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55200))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55208))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55218))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55220))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55228))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D54C2C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55238))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteLargeName() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55240))(this);
	}
	template <typename T = void> T set_SpriteLargeName(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55248))(this, value);
	}
	template <typename T = bool> T get_IsDoubleCheck() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55250))(this);
	}
	template <typename T = void> T set_IsDoubleCheck(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D55258))(this, value);
	}
	template <typename T = int32_t> T get_CoolDown() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55260))(this);
	}
	template <typename T = void> T set_CoolDown(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D55268))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemClass() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55270))(this);
	}
	template <typename T = void> T set_ItemClass(Il2CppString* value) {
		return ((T (*)(BRSkillItemConfig*, Il2CppString*))(Il2CppBase() + 0x2D55278))(this, value);
	}
	template <typename T = int32_t> T get_UltID() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55280))(this);
	}
	template <typename T = void> T set_UltID(int32_t value) {
		return ((T (*)(BRSkillItemConfig*, int32_t))(Il2CppBase() + 0x2D55288))(this, value);
	}
	template <typename T = bool> T get_CheckUseSpace() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D55290))(this);
	}
	template <typename T = void> T set_CheckUseSpace(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D55298))(this, value);
	}
	template <typename T = float> T get_ValidUseSpaceSize() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D552A0))(this);
	}
	template <typename T = void> T set_ValidUseSpaceSize(float value) {
		return ((T (*)(BRSkillItemConfig*, float))(Il2CppBase() + 0x2D552A8))(this, value);
	}
	template <typename T = bool> T get_NeedToStopMove() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D552B0))(this);
	}
	template <typename T = void> T set_NeedToStopMove(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D552B8))(this, value);
	}
	template <typename T = bool> T get_CanUseInAir() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D552C0))(this);
	}
	template <typename T = void> T set_CanUseInAir(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D552C8))(this, value);
	}
	template <typename T = bool> T get_CanUseInWater() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D552D0))(this);
	}
	template <typename T = void> T set_CanUseInWater(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D552D8))(this, value);
	}
	template <typename T = bool> T get_IsRemoteControlled() {
		return ((T (*)(BRSkillItemConfig*))(Il2CppBase() + 0x2D552E0))(this);
	}
	template <typename T = void> T set_IsRemoteControlled(bool value) {
		return ((T (*)(BRSkillItemConfig*, bool))(Il2CppBase() + 0x2D552E8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRSkillItemConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D552F0))(this, bytes, position);
	}

};

}
