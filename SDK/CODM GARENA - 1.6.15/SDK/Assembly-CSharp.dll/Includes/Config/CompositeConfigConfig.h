#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CompositeConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CompositeConfigConfig"));
	}

	template <typename T = uintptr_t> T& ItemType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SynType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NeedMaterialList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NeedCommonPoolItemList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaterialColorId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ColorId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Subtype() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Time_cost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Coin_cost() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Powder_cost() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& New_unlock_req() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Old_unlock_seq() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Output_type() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Output_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Output_num() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Output_duration() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Com_material_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Com_material_color() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Com_material_num() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Spe_material_type_num() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Spe_material_1_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Spe_material_1_num() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Spe_material_2_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Spe_material_2_num() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Spe_material_3_id() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& Spe_material_3_num() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& Spe_material_4_id() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Spe_material_4_num() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Spe_material_5_id() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Spe_material_5_num() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInCommonMaterialPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToMaterialList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeciallyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfByResultId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D7C8))(this);
	}
	template <typename T = bool> T IsInCommonMaterialPool(int32_t itemId) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462DAA4))(this, itemId);
	}
	template <typename T = void> T AddToMaterialList(int32_t id, int32_t needCount) {
		return ((T (*)(CompositeConfigConfig*, int32_t, int32_t))(Il2CppBase() + 0x462D920))(this, id, needCount);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetSpeciallyList(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x462DC24))(0, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRandomList(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x462DE74))(0, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllList(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x462E0C4))(0, type);
	}
	template <typename T = uintptr_t> static T GetConfByResultId(int32_t ResultId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x462E314))(0, ResultId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E4A4))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E544))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E54C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E554))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CompositeConfigConfig*, Il2CppString*))(Il2CppBase() + 0x462E55C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E564))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E574))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(CompositeConfigConfig*, Il2CppString*))(Il2CppBase() + 0x462E57C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E584))(this);
	}
	template <typename T = int32_t> T get_ColorId() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D908))(this);
	}
	template <typename T = void> T set_ColorId(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E594))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D8F8))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E59C))(this, value);
	}
	template <typename T = int32_t> T get_Subtype() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5A4))(this);
	}
	template <typename T = void> T set_Subtype(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5AC))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5B4))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5BC))(this, value);
	}
	template <typename T = int32_t> T get_Time_cost() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5C4))(this);
	}
	template <typename T = void> T set_Time_cost(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5CC))(this, value);
	}
	template <typename T = int32_t> T get_Coin_cost() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5D4))(this);
	}
	template <typename T = void> T set_Coin_cost(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5DC))(this, value);
	}
	template <typename T = int32_t> T get_Powder_cost() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5E4))(this);
	}
	template <typename T = void> T set_Powder_cost(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5EC))(this, value);
	}
	template <typename T = int32_t> T get_New_unlock_req() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E5F4))(this);
	}
	template <typename T = void> T set_New_unlock_req(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E5FC))(this, value);
	}
	template <typename T = int32_t> T get_Old_unlock_seq() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E604))(this);
	}
	template <typename T = void> T set_Old_unlock_seq(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E60C))(this, value);
	}
	template <typename T = int32_t> T get_Output_type() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D900))(this);
	}
	template <typename T = void> T set_Output_type(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E614))(this, value);
	}
	template <typename T = int32_t> T get_Output_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E61C))(this);
	}
	template <typename T = void> T set_Output_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E624))(this, value);
	}
	template <typename T = int32_t> T get_Output_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E62C))(this);
	}
	template <typename T = void> T set_Output_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E634))(this, value);
	}
	template <typename T = int32_t> T get_Output_duration() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E63C))(this);
	}
	template <typename T = void> T set_Output_duration(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E644))(this, value);
	}
	template <typename T = int32_t> T get_Com_material_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA9C))(this);
	}
	template <typename T = void> T set_Com_material_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E64C))(this, value);
	}
	template <typename T = int32_t> T get_Com_material_color() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E654))(this);
	}
	template <typename T = void> T set_Com_material_color(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E65C))(this, value);
	}
	template <typename T = int32_t> T get_Com_material_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E664))(this);
	}
	template <typename T = void> T set_Com_material_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E66C))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_type_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462E674))(this);
	}
	template <typename T = void> T set_Spe_material_type_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E67C))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_1_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D910))(this);
	}
	template <typename T = void> T set_Spe_material_1_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E684))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_1_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462D918))(this);
	}
	template <typename T = void> T set_Spe_material_1_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E68C))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_2_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA5C))(this);
	}
	template <typename T = void> T set_Spe_material_2_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E694))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_2_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA64))(this);
	}
	template <typename T = void> T set_Spe_material_2_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E69C))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_3_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA6C))(this);
	}
	template <typename T = void> T set_Spe_material_3_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6A4))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_3_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA74))(this);
	}
	template <typename T = void> T set_Spe_material_3_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6AC))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_4_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA7C))(this);
	}
	template <typename T = void> T set_Spe_material_4_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6B4))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_4_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA84))(this);
	}
	template <typename T = void> T set_Spe_material_4_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6BC))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_5_id() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA8C))(this);
	}
	template <typename T = void> T set_Spe_material_5_id(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6C4))(this, value);
	}
	template <typename T = int32_t> T get_Spe_material_5_num() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462DA94))(this);
	}
	template <typename T = void> T set_Spe_material_5_num(int32_t value) {
		return ((T (*)(CompositeConfigConfig*, int32_t))(Il2CppBase() + 0x462E6CC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CompositeConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462E6D4))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSpeciallyListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x462EBB4))(0, a, b);
	}
	template <typename T = int32_t> static T GetRandomListm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x462EBE4))(0, a, b);
	}
	template <typename T = int32_t> static T GetAllListm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x462EC14))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(CompositeConfigConfig*))(Il2CppBase() + 0x462EC44))(this);
	}

};

}
