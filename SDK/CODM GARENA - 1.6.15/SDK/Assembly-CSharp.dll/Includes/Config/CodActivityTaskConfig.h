#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CodActivityTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CodActivityTaskConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Describe() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Seq_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Task_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Sub_condition_value1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Sub_condition_value2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Sub_condition_value3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Condition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Task_points() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Exchange_item_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Exchange_item_num() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Exchange_limit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Task_award_type1() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Task_award_id1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Task_award_num1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Task_award_type2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Task_award_id2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Task_award_num2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Task_award_type3() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Task_award_id3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Task_award_num3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Task_award_type4() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& Task_award_id4() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& Task_award_num4() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Task_award_type5() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Task_award_id5() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Task_award_num5() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& Wx_atcv_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Qq_actv_id() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& Qq_share_url() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EB7C))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(CodActivityTaskConfig*, Il2CppString*))(Il2CppBase() + 0x2D5EB84))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EB8C))(this);
	}
	template <typename T = Il2CppString*> T get_Describe() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EB9C))(this);
	}
	template <typename T = void> T set_Describe(Il2CppString* value) {
		return ((T (*)(CodActivityTaskConfig*, Il2CppString*))(Il2CppBase() + 0x2D5EBA4))(this, value);
	}
	template <typename T = int32_t> T get_Seq_id() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBAC))(this);
	}
	template <typename T = void> T set_Seq_id(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EBB4))(this, value);
	}
	template <typename T = int32_t> T get_Task_id() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBBC))(this);
	}
	template <typename T = void> T set_Task_id(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EBC4))(this, value);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBCC))(this);
	}
	template <typename T = void> T set_GoPos(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EBD4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBDC))(this);
	}
	template <typename T = void> T set_Pre_condition_type1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EBE4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBEC))(this);
	}
	template <typename T = void> T set_Pre_condition_value1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EBF4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EBFC))(this);
	}
	template <typename T = void> T set_Pre_condition_type2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC04))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC0C))(this);
	}
	template <typename T = void> T set_Pre_condition_value2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC14))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC1C))(this);
	}
	template <typename T = void> T set_Pre_condition_type3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC24))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC2C))(this);
	}
	template <typename T = void> T set_Pre_condition_value3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC34))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC3C))(this);
	}
	template <typename T = void> T set_Sub_condition_value1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC44))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC4C))(this);
	}
	template <typename T = void> T set_Sub_condition_value2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC54))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC5C))(this);
	}
	template <typename T = void> T set_Sub_condition_value3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC64))(this, value);
	}
	template <typename T = int32_t> T get_Condition() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC6C))(this);
	}
	template <typename T = void> T set_Condition(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC74))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC7C))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC84))(this, value);
	}
	template <typename T = int32_t> T get_Task_points() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC8C))(this);
	}
	template <typename T = void> T set_Task_points(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EC94))(this, value);
	}
	template <typename T = int32_t> T get_Exchange_item_id() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EC9C))(this);
	}
	template <typename T = void> T set_Exchange_item_id(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECA4))(this, value);
	}
	template <typename T = int32_t> T get_Exchange_item_num() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECAC))(this);
	}
	template <typename T = void> T set_Exchange_item_num(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECB4))(this, value);
	}
	template <typename T = int32_t> T get_Exchange_limit() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECBC))(this);
	}
	template <typename T = void> T set_Exchange_limit(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECC4))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_type1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECCC))(this);
	}
	template <typename T = void> T set_Task_award_type1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECD4))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECDC))(this);
	}
	template <typename T = void> T set_Task_award_id1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECE4))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num1() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECEC))(this);
	}
	template <typename T = void> T set_Task_award_num1(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ECF4))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_type2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ECFC))(this);
	}
	template <typename T = void> T set_Task_award_type2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED04))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED0C))(this);
	}
	template <typename T = void> T set_Task_award_id2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED14))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num2() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED1C))(this);
	}
	template <typename T = void> T set_Task_award_num2(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED24))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_type3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED2C))(this);
	}
	template <typename T = void> T set_Task_award_type3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED34))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED3C))(this);
	}
	template <typename T = void> T set_Task_award_id3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED44))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num3() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED4C))(this);
	}
	template <typename T = void> T set_Task_award_num3(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED54))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_type4() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED5C))(this);
	}
	template <typename T = void> T set_Task_award_type4(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED64))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id4() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED6C))(this);
	}
	template <typename T = void> T set_Task_award_id4(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED74))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num4() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED7C))(this);
	}
	template <typename T = void> T set_Task_award_num4(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED84))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_type5() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED8C))(this);
	}
	template <typename T = void> T set_Task_award_type5(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5ED94))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id5() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5ED9C))(this);
	}
	template <typename T = void> T set_Task_award_id5(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EDA4))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num5() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EDAC))(this);
	}
	template <typename T = void> T set_Task_award_num5(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EDB4))(this, value);
	}
	template <typename T = int32_t> T get_Wx_atcv_id() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EDBC))(this);
	}
	template <typename T = void> T set_Wx_atcv_id(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EDC4))(this, value);
	}
	template <typename T = int32_t> T get_Qq_actv_id() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EDCC))(this);
	}
	template <typename T = void> T set_Qq_actv_id(int32_t value) {
		return ((T (*)(CodActivityTaskConfig*, int32_t))(Il2CppBase() + 0x2D5EDD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Qq_share_url() {
		return ((T (*)(CodActivityTaskConfig*))(Il2CppBase() + 0x2D5EDDC))(this);
	}
	template <typename T = void> T set_Qq_share_url(Il2CppString* value) {
		return ((T (*)(CodActivityTaskConfig*, Il2CppString*))(Il2CppBase() + 0x2D5EDE4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CodActivityTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5EDEC))(this, bytes, position);
	}

};

}
