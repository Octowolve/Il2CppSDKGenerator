#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxCheckInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxCheckInfo"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _box_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _box_color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _max_lucky_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _allow_buy_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _curr_lucky_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _group_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D884))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D88C))(this, value);
	}
	template <typename T = uint32_t> T get_box_type() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D894))(this);
	}
	template <typename T = void> T set_box_type(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D89C))(this, value);
	}
	template <typename T = uint32_t> T get_box_color() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D8A4))(this);
	}
	template <typename T = void> T set_box_color(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D8AC))(this, value);
	}
	template <typename T = uint32_t> T get_max_lucky_value() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D8B4))(this);
	}
	template <typename T = void> T set_max_lucky_value(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D8BC))(this, value);
	}
	template <typename T = uint32_t> T get_allow_buy_flag() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D8C4))(this);
	}
	template <typename T = void> T set_allow_buy_flag(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D8CC))(this, value);
	}
	template <typename T = uint32_t> T get_curr_lucky_value() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D8D4))(this);
	}
	template <typename T = void> T set_curr_lucky_value(uint32_t value) {
		return ((T (*)(BoxCheckInfo*, uint32_t))(Il2CppBase() + 0x510D8DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_group_list() {
		return ((T (*)(BoxCheckInfo*))(Il2CppBase() + 0x510D8E4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxCheckInfo*, bool))(Il2CppBase() + 0x510D8EC))(this, createIfMissing);
	}

};

}
