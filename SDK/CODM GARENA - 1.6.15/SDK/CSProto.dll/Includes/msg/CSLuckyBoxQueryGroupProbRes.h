#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLuckyBoxQueryGroupProbRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLuckyBoxQueryGroupProbRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _box_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _curr_lucky_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _max_lucky_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _allow_restore_flag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _color_prob_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _box_desc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _open_count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pub_group_list() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title_cdn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFB7C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, int32_t))(Il2CppBase() + 0x51EFB84))(this, value);
	}
	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFB8C))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFB94))(this, value);
	}
	template <typename T = uint32_t> T get_box_type() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFB9C))(this);
	}
	template <typename T = void> T set_box_type(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFBA4))(this, value);
	}
	template <typename T = uint32_t> T get_curr_lucky_value() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBAC))(this);
	}
	template <typename T = void> T set_curr_lucky_value(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFBB4))(this, value);
	}
	template <typename T = uint32_t> T get_max_lucky_value() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBBC))(this);
	}
	template <typename T = void> T set_max_lucky_value(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFBC4))(this, value);
	}
	template <typename T = uint32_t> T get_allow_restore_flag() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBCC))(this);
	}
	template <typename T = void> T set_allow_restore_flag(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFBD4))(this, value);
	}
	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBDC))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, int32_t))(Il2CppBase() + 0x51EFBE4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_color_prob_list() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBEC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBF4))(this);
	}
	template <typename T = uintptr_t> T get_box_desc() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFBFC))(this);
	}
	template <typename T = void> T set_box_desc(uintptr_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uintptr_t))(Il2CppBase() + 0x51EFC04))(this, value);
	}
	template <typename T = uint32_t> T get_open_count() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFC0C))(this);
	}
	template <typename T = void> T set_open_count(uint32_t value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, uint32_t))(Il2CppBase() + 0x51EFC14))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pub_group_list() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFC1C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title_cdn() {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*))(Il2CppBase() + 0x51EFC24))(this);
	}
	template <typename T = void> T set_title_cdn(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51EFC2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLuckyBoxQueryGroupProbRes*, bool))(Il2CppBase() + 0x51EFC34))(this, createIfMissing);
	}

};

}
