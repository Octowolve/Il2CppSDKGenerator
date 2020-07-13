#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRMedicineConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRMedicineConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SettingItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SortParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& HealType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxPoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& UseTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AddPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& AddPointSec() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SecondHalfUseTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AddSignalPoint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& AutoPickUpCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& AnimationName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& AnimationTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& FPModelAssetId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& TPModelAssetId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsShowModel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& PriorityFull() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& PriorityMore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& PriorityMiddle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& PriorityLess() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& SoundKey() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& SoundStopKey() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& SoundKey3P() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& SoundStopKey3P() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& LotteryRotation() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPriorityLevelByHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F4E8))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F4F8))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F5A8))(this);
	}
	template <typename T = uintptr_t> T get_EBRMedicineItemType() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F5B0))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F5C0))(this);
	}
	template <typename T = int32_t> T GetPriority(uintptr_t level) {
		return ((T (*)(BRMedicineConfig*, uintptr_t))(Il2CppBase() + 0x2D4F6BC))(this, level);
	}
	template <typename T = uintptr_t> static T GetPriorityLevelByHP(float hp) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2D4F7F8))(0, hp);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F970))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D478E0))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA40))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F5B8))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA48))(this, value);
	}
	template <typename T = int32_t> T get_SettingItemType() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F6B4))(this);
	}
	template <typename T = void> T set_SettingItemType(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA50))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FA58))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA60))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FA68))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRMedicineConfig*, bool))(Il2CppBase() + 0x2D4FA70))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FA78))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA80))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FA88))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FA90))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FA98))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAA0))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAA8))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAB0))(this, value);
	}
	template <typename T = int32_t> T get_HealType() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAB8))(this);
	}
	template <typename T = void> T set_HealType(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAC0))(this, value);
	}
	template <typename T = int32_t> T get_MaxPoint() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAC8))(this);
	}
	template <typename T = void> T set_MaxPoint(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAD0))(this, value);
	}
	template <typename T = int32_t> T get_UseTime() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAD8))(this);
	}
	template <typename T = void> T set_UseTime(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAE0))(this, value);
	}
	template <typename T = int32_t> T get_AddPoint() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAE8))(this);
	}
	template <typename T = void> T set_AddPoint(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FAF0))(this, value);
	}
	template <typename T = int32_t> T get_AddPointSec() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FAF8))(this);
	}
	template <typename T = void> T set_AddPointSec(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FB00))(this, value);
	}
	template <typename T = int32_t> T get_SecondHalfUseTime() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB08))(this);
	}
	template <typename T = void> T set_SecondHalfUseTime(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FB10))(this, value);
	}
	template <typename T = int32_t> T get_AddSignalPoint() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB18))(this);
	}
	template <typename T = void> T set_AddSignalPoint(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FB20))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB28))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FB30))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB38))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB48))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FB50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB58))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB68))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FB70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB78))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F4F0))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FB88))(this, value);
	}
	template <typename T = int32_t> T get_AutoPickUpCount() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FB90))(this);
	}
	template <typename T = void> T set_AutoPickUpCount(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FB98))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnimationName() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FBA0))(this);
	}
	template <typename T = void> T set_AnimationName(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FBA8))(this, value);
	}
	template <typename T = int32_t> T get_AnimationTime() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FBB0))(this);
	}
	template <typename T = void> T set_AnimationTime(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FBB8))(this, value);
	}
	template <typename T = int32_t> T get_FPModelAssetId() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FBC0))(this);
	}
	template <typename T = void> T set_FPModelAssetId(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FBC8))(this, value);
	}
	template <typename T = int32_t> T get_TPModelAssetId() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FBD0))(this);
	}
	template <typename T = void> T set_TPModelAssetId(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FBD8))(this, value);
	}
	template <typename T = bool> T get_IsShowModel() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FBE0))(this);
	}
	template <typename T = void> T set_IsShowModel(bool value) {
		return ((T (*)(BRMedicineConfig*, bool))(Il2CppBase() + 0x2D4FBE8))(this, value);
	}
	template <typename T = int32_t> T get_PriorityFull() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F7D8))(this);
	}
	template <typename T = void> T set_PriorityFull(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FBF0))(this, value);
	}
	template <typename T = int32_t> T get_PriorityMore() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F7E0))(this);
	}
	template <typename T = void> T set_PriorityMore(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FBF8))(this, value);
	}
	template <typename T = int32_t> T get_PriorityMiddle() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F7E8))(this);
	}
	template <typename T = void> T set_PriorityMiddle(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FC00))(this, value);
	}
	template <typename T = int32_t> T get_PriorityLess() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4F7F0))(this);
	}
	template <typename T = void> T set_PriorityLess(int32_t value) {
		return ((T (*)(BRMedicineConfig*, int32_t))(Il2CppBase() + 0x2D4FC08))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundKey() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FC10))(this);
	}
	template <typename T = void> T set_SoundKey(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FC18))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundStopKey() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FC20))(this);
	}
	template <typename T = void> T set_SoundStopKey(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FC28))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundKey3P() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FC30))(this);
	}
	template <typename T = void> T set_SoundKey3P(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FC38))(this, value);
	}
	template <typename T = Il2CppString*> T get_SoundStopKey3P() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FC40))(this);
	}
	template <typename T = void> T set_SoundStopKey3P(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FC48))(this, value);
	}
	template <typename T = Il2CppString*> T get_LotteryRotation() {
		return ((T (*)(BRMedicineConfig*))(Il2CppBase() + 0x2D4FC50))(this);
	}
	template <typename T = void> T set_LotteryRotation(Il2CppString* value) {
		return ((T (*)(BRMedicineConfig*, Il2CppString*))(Il2CppBase() + 0x2D4FC58))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRMedicineConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4FC60))(this, bytes, position);
	}

};

}
