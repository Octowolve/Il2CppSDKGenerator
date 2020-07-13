#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RspBonusDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RspBonusDesc"));
	}

	template <typename T = int32_t> T& _time_zone() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _show_min_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _show_max_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _min_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _max_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _show_begin_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _actv_begin_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _actv_end_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _exp_bonus() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _gold_bonus() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _drop_bonus() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_time_zone() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F14))(this);
	}
	template <typename T = void> T set_time_zone(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F1C))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F24))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F34))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RspBonusDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071F3C))(this, value);
	}
	template <typename T = int32_t> T get_show_min_level() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F44))(this);
	}
	template <typename T = void> T set_show_min_level(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F4C))(this, value);
	}
	template <typename T = int32_t> T get_show_max_level() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F54))(this);
	}
	template <typename T = void> T set_show_max_level(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F5C))(this, value);
	}
	template <typename T = int32_t> T get_min_level() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F64))(this);
	}
	template <typename T = void> T set_min_level(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F6C))(this, value);
	}
	template <typename T = int32_t> T get_max_level() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F74))(this);
	}
	template <typename T = void> T set_max_level(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F7C))(this, value);
	}
	template <typename T = int32_t> T get_show_begin_time() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F84))(this);
	}
	template <typename T = void> T set_show_begin_time(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F8C))(this, value);
	}
	template <typename T = int32_t> T get_show_end_time() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071F94))(this);
	}
	template <typename T = void> T set_show_end_time(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071F9C))(this, value);
	}
	template <typename T = int32_t> T get_actv_begin_time() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FA4))(this);
	}
	template <typename T = void> T set_actv_begin_time(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071FAC))(this, value);
	}
	template <typename T = int32_t> T get_actv_end_time() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FB4))(this);
	}
	template <typename T = void> T set_actv_end_time(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071FBC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FC4))(this);
	}
	template <typename T = void> T set_message(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RspBonusDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071FCC))(this, value);
	}
	template <typename T = int32_t> T get_exp_bonus() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FD4))(this);
	}
	template <typename T = void> T set_exp_bonus(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071FDC))(this, value);
	}
	template <typename T = int32_t> T get_gold_bonus() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FE4))(this);
	}
	template <typename T = void> T set_gold_bonus(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071FEC))(this, value);
	}
	template <typename T = int32_t> T get_drop_bonus() {
		return ((T (*)(RspBonusDesc*))(Il2CppBase() + 0x5071FF4))(this);
	}
	template <typename T = void> T set_drop_bonus(int32_t value) {
		return ((T (*)(RspBonusDesc*, int32_t))(Il2CppBase() + 0x5071FFC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RspBonusDesc*, bool))(Il2CppBase() + 0x5072004))(this, createIfMissing);
	}

};

}
