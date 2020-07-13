#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRCollectionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRCollectionConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& StackNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AddPosNum() {
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
	template <typename T = int32_t> T& EquipHP() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DefenseRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_Description() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_Brief() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& GrabSound() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& DropSound() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46478))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46488))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46538))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46540))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46548))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46618))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46620))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46628))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46630))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46638))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46640))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46648))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BRCollectionConfig*, bool))(Il2CppBase() + 0x2D46650))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46658))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46660))(this, value);
	}
	template <typename T = int32_t> T get_AddPosNum() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46668))(this);
	}
	template <typename T = void> T set_AddPosNum(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46670))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46678))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46680))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46688))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D46690))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46698))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D466A0))(this, value);
	}
	template <typename T = int32_t> T get_EquipHP() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466A8))(this);
	}
	template <typename T = void> T set_EquipHP(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D466B0))(this, value);
	}
	template <typename T = int32_t> T get_DefenseRate() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466B8))(this);
	}
	template <typename T = void> T set_DefenseRate(int32_t value) {
		return ((T (*)(BRCollectionConfig*, int32_t))(Il2CppBase() + 0x2D466C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466C8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D466D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466D8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466E8))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D466F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D466F8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46708))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D46710))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46718))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46480))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D46728))(this, value);
	}
	template <typename T = Il2CppString*> T get_GrabSound() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46730))(this);
	}
	template <typename T = void> T set_GrabSound(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D46738))(this, value);
	}
	template <typename T = Il2CppString*> T get_DropSound() {
		return ((T (*)(BRCollectionConfig*))(Il2CppBase() + 0x2D46740))(this);
	}
	template <typename T = void> T set_DropSound(Il2CppString* value) {
		return ((T (*)(BRCollectionConfig*, Il2CppString*))(Il2CppBase() + 0x2D46748))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRCollectionConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D46750))(this, bytes, position);
	}

};

}
