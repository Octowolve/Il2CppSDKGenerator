#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxShowPropInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxShowPropInfo"));
	}

	template <typename T = uint32_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _min_drop_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _max_drop_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _allow_lottery_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _group_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _prop_index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _durable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _prop_color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = double> T& _prob() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_prop_id() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA2C))(this);
	}
	template <typename T = void> T set_prop_id(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA34))(this, value);
	}
	template <typename T = uint32_t> T get_min_drop_num() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA3C))(this);
	}
	template <typename T = void> T set_min_drop_num(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA44))(this, value);
	}
	template <typename T = uint32_t> T get_max_drop_num() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA4C))(this);
	}
	template <typename T = void> T set_max_drop_num(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA54))(this, value);
	}
	template <typename T = uint32_t> T get_allow_lottery_flag() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA5C))(this);
	}
	template <typename T = void> T set_allow_lottery_flag(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA64))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA6C))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA74))(this, value);
	}
	template <typename T = uint32_t> T get_group_index() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA7C))(this);
	}
	template <typename T = void> T set_group_index(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA84))(this, value);
	}
	template <typename T = uint32_t> T get_prop_index() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA8C))(this);
	}
	template <typename T = void> T set_prop_index(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DA94))(this, value);
	}
	template <typename T = int32_t> T get_durable() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DA9C))(this);
	}
	template <typename T = void> T set_durable(int32_t value) {
		return ((T (*)(BoxShowPropInfo*, int32_t))(Il2CppBase() + 0x510DAA4))(this, value);
	}
	template <typename T = uint32_t> T get_prop_color() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DAAC))(this);
	}
	template <typename T = void> T set_prop_color(uint32_t value) {
		return ((T (*)(BoxShowPropInfo*, uint32_t))(Il2CppBase() + 0x510DAB4))(this, value);
	}
	template <typename T = double> T get_prob() {
		return ((T (*)(BoxShowPropInfo*))(Il2CppBase() + 0x510DABC))(this);
	}
	template <typename T = void> T set_prob(double value) {
		return ((T (*)(BoxShowPropInfo*, double))(Il2CppBase() + 0x510DAC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxShowPropInfo*, bool))(Il2CppBase() + 0x510DAD8))(this, createIfMissing);
	}

};

}
