#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ClientModeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ClientModeConfig"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _playtype() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _default_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _limit_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corner_tip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corner_color() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corner_text_up_color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corner_text_down_color() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _corner_text_border_color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EA70))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(ClientModeConfig*, int32_t))(Il2CppBase() + 0x516EA78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_playtype() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EA80))(this);
	}
	template <typename T = void> T set_playtype(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EA88))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EA90))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EA98))(this, value);
	}
	template <typename T = int32_t> T get_default_id() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAA0))(this);
	}
	template <typename T = void> T set_default_id(int32_t value) {
		return ((T (*)(ClientModeConfig*, int32_t))(Il2CppBase() + 0x516EAA8))(this, value);
	}
	template <typename T = int32_t> T get_limit_level() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAB0))(this);
	}
	template <typename T = void> T set_limit_level(int32_t value) {
		return ((T (*)(ClientModeConfig*, int32_t))(Il2CppBase() + 0x516EAB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_mode() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAC0))(this);
	}
	template <typename T = void> T set_show_mode(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EAC8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corner_tip() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAD0))(this);
	}
	template <typename T = void> T set_corner_tip(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EAD8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corner_color() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAE0))(this);
	}
	template <typename T = void> T set_corner_color(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EAE8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corner_text_up_color() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EAF0))(this);
	}
	template <typename T = void> T set_corner_text_up_color(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EAF8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corner_text_down_color() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EB00))(this);
	}
	template <typename T = void> T set_corner_text_down_color(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EB08))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_corner_text_border_color() {
		return ((T (*)(ClientModeConfig*))(Il2CppBase() + 0x516EB10))(this);
	}
	template <typename T = void> T set_corner_text_border_color(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ClientModeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EB18))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ClientModeConfig*, bool))(Il2CppBase() + 0x516EB20))(this, createIfMissing);
	}

};

}
