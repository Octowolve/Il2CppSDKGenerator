#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OneKeyEnterPara
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OneKeyEnterPara"));
	}

	template <typename T = Il2CppList<uint32_t>*> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _need_same_language() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _mic_is_open() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _max_dsc_delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _fail_list() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _last_quit_room_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _join_source() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppList<uint32_t>*> T get_ticket_type() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA5994))(this);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA599C))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(OneKeyEnterPara*, uint32_t))(Il2CppBase() + 0x4EA59A4))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59AC))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(OneKeyEnterPara*, uint32_t))(Il2CppBase() + 0x4EA59B4))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59BC))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(OneKeyEnterPara*, uint32_t))(Il2CppBase() + 0x4EA59C4))(this, value);
	}
	template <typename T = bool> T get_need_same_language() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59CC))(this);
	}
	template <typename T = void> T set_need_same_language(bool value) {
		return ((T (*)(OneKeyEnterPara*, bool))(Il2CppBase() + 0x4EA59D4))(this, value);
	}
	template <typename T = int32_t> T get_language_code() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59DC))(this);
	}
	template <typename T = void> T set_language_code(int32_t value) {
		return ((T (*)(OneKeyEnterPara*, int32_t))(Il2CppBase() + 0x4EA59E4))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59EC))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(OneKeyEnterPara*, bool))(Il2CppBase() + 0x4EA59F4))(this, value);
	}
	template <typename T = uint32_t> T get_mic_is_open() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA59FC))(this);
	}
	template <typename T = void> T set_mic_is_open(uint32_t value) {
		return ((T (*)(OneKeyEnterPara*, uint32_t))(Il2CppBase() + 0x4EA5A04))(this, value);
	}
	template <typename T = uint32_t> T get_max_dsc_delay() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA5A0C))(this);
	}
	template <typename T = void> T set_max_dsc_delay(uint32_t value) {
		return ((T (*)(OneKeyEnterPara*, uint32_t))(Il2CppBase() + 0x4EA5A14))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_fail_list() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA5A1C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_last_quit_room_list() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA5A24))(this);
	}
	template <typename T = int32_t> T get_join_source() {
		return ((T (*)(OneKeyEnterPara*))(Il2CppBase() + 0x4EA5A2C))(this);
	}
	template <typename T = void> T set_join_source(int32_t value) {
		return ((T (*)(OneKeyEnterPara*, int32_t))(Il2CppBase() + 0x4EA5A34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OneKeyEnterPara*, bool))(Il2CppBase() + 0x4EA5A3C))(this, createIfMissing);
	}

};

}
