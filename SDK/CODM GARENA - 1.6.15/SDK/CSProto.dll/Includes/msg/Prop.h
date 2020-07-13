#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Prop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Prop"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _gid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _gain_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _durable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _function_param1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _function_param2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _gain_source() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _gain_durable_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _is_repeated() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _sold_currency_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _delete_reason() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _FullGrade() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _tmp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E90C))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(Prop*, uintptr_t))(Il2CppBase() + 0x506E914))(this, value);
	}
	template <typename T = uint64_t> T get_id() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E91C))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(Prop*, uint64_t))(Il2CppBase() + 0x506E924))(this, value);
	}
	template <typename T = uint64_t> T get_gid() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E934))(this);
	}
	template <typename T = void> T set_gid(uint64_t value) {
		return ((T (*)(Prop*, uint64_t))(Il2CppBase() + 0x506E93C))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E94C))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(Prop*, uint32_t))(Il2CppBase() + 0x506E954))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E95C))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(Prop*, uint32_t))(Il2CppBase() + 0x506E964))(this, value);
	}
	template <typename T = int32_t> T get_gain_type() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E96C))(this);
	}
	template <typename T = void> T set_gain_type(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E974))(this, value);
	}
	template <typename T = int32_t> T get_durable() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E97C))(this);
	}
	template <typename T = void> T set_durable(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E984))(this, value);
	}
	template <typename T = int32_t> T get_function_param1() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E98C))(this);
	}
	template <typename T = void> T set_function_param1(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E994))(this, value);
	}
	template <typename T = int32_t> T get_function_param2() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E99C))(this);
	}
	template <typename T = void> T set_function_param2(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E9A4))(this, value);
	}
	template <typename T = int32_t> T get_gain_source() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9AC))(this);
	}
	template <typename T = void> T set_gain_source(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E9B4))(this, value);
	}
	template <typename T = int32_t> T get_gain_durable_time() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9BC))(this);
	}
	template <typename T = void> T set_gain_durable_time(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E9C4))(this, value);
	}
	template <typename T = bool> T get_is_repeated() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9CC))(this);
	}
	template <typename T = void> T set_is_repeated(bool value) {
		return ((T (*)(Prop*, bool))(Il2CppBase() + 0x506E9D4))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9DC))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E9E4))(this, value);
	}
	template <typename T = int32_t> T get_sold_currency_id() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9EC))(this);
	}
	template <typename T = void> T set_sold_currency_id(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506E9F4))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506E9FC))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(Prop*, uint32_t))(Il2CppBase() + 0x506EA04))(this, value);
	}
	template <typename T = uint32_t> T get_delete_reason() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506EA0C))(this);
	}
	template <typename T = void> T set_delete_reason(uint32_t value) {
		return ((T (*)(Prop*, uint32_t))(Il2CppBase() + 0x506EA14))(this, value);
	}
	template <typename T = bool> T get_FullGrade() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506EA1C))(this);
	}
	template <typename T = void> T set_FullGrade(bool value) {
		return ((T (*)(Prop*, bool))(Il2CppBase() + 0x506EA24))(this, value);
	}
	template <typename T = int32_t> T get_tmp() {
		return ((T (*)(Prop*))(Il2CppBase() + 0x506EA2C))(this);
	}
	template <typename T = void> T set_tmp(int32_t value) {
		return ((T (*)(Prop*, int32_t))(Il2CppBase() + 0x506EA34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Prop*, bool))(Il2CppBase() + 0x506EA3C))(this, createIfMissing);
	}

};

}
