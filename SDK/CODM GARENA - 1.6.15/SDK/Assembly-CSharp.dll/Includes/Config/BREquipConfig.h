#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BREquipConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BREquipConfig"));
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
	template <typename T = int32_t> T& DefenseMulti() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& DefenseDiv() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ExplodeDefenseMulti() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ExplodeDefenseDiv() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ExplodeInversionRate() {
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
	template <typename T = int32_t> T& MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BagOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& FMeshAssetID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FBagOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& LvlType() {
		return *(T*)((uintptr_t)this + 0x68);
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
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48DD8))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48DE8))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48E98))(this);
	}
	template <typename T = uintptr_t> T get_EBREquipItemType() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48EA0))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48EB0))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48EB8))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D478D0))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48F88))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48EA8))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48F90))(this, value);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48F98))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48FA0))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FA8))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(BREquipConfig*, bool))(Il2CppBase() + 0x2D48FB0))(this, value);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FB8))(this);
	}
	template <typename T = void> T set_StackNum(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48FC0))(this, value);
	}
	template <typename T = int32_t> T get_AddPosNum() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FC8))(this);
	}
	template <typename T = void> T set_AddPosNum(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48FD0))(this, value);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FD8))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48FE0))(this, value);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FE8))(this);
	}
	template <typename T = void> T set_SortParam(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D48FF0))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48FF8))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49000))(this, value);
	}
	template <typename T = int32_t> T get_EquipHP() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49008))(this);
	}
	template <typename T = void> T set_EquipHP(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49010))(this, value);
	}
	template <typename T = int32_t> T get_DefenseMulti() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49018))(this);
	}
	template <typename T = void> T set_DefenseMulti(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49020))(this, value);
	}
	template <typename T = int32_t> T get_DefenseDiv() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49028))(this);
	}
	template <typename T = void> T set_DefenseDiv(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49030))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeDefenseMulti() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49038))(this);
	}
	template <typename T = void> T set_ExplodeDefenseMulti(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49040))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeDefenseDiv() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49048))(this);
	}
	template <typename T = void> T set_ExplodeDefenseDiv(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49050))(this, value);
	}
	template <typename T = int32_t> T get_ExplodeInversionRate() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49058))(this);
	}
	template <typename T = void> T set_ExplodeInversionRate(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49060))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49068))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BREquipConfig*, Il2CppString*))(Il2CppBase() + 0x2D49070))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49078))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Description() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49088))(this);
	}
	template <typename T = void> T set_LOCID_Description(Il2CppString* value) {
		return ((T (*)(BREquipConfig*, Il2CppString*))(Il2CppBase() + 0x2D49090))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49098))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Brief() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D490A8))(this);
	}
	template <typename T = void> T set_LOCID_Brief(Il2CppString* value) {
		return ((T (*)(BREquipConfig*, Il2CppString*))(Il2CppBase() + 0x2D490B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D490B8))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D48DE0))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(BREquipConfig*, Il2CppString*))(Il2CppBase() + 0x2D490C8))(this, value);
	}
	template <typename T = int32_t> T get_MeshAssetID() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D490D0))(this);
	}
	template <typename T = void> T set_MeshAssetID(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D490D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BagOffset() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D490E0))(this);
	}
	template <typename T = void> T set_BagOffset(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D490E8))(this, value);
	}
	template <typename T = int32_t> T get_FMeshAssetID() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D490F0))(this);
	}
	template <typename T = void> T set_FMeshAssetID(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D490F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FBagOffset() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49100))(this);
	}
	template <typename T = void> T set_FBagOffset(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BREquipConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D49108))(this, value);
	}
	template <typename T = int32_t> T get_LvlType() {
		return ((T (*)(BREquipConfig*))(Il2CppBase() + 0x2D49110))(this);
	}
	template <typename T = void> T set_LvlType(int32_t value) {
		return ((T (*)(BREquipConfig*, int32_t))(Il2CppBase() + 0x2D49118))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BREquipConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D49120))(this, bytes, position);
	}

};

}
