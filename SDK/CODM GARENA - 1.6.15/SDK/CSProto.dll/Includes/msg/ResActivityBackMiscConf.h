#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackMiscConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackMiscConf"));
	}

	template <typename T = int32_t> T& _durable_hour() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _record_hour() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _record_number() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _new_content_priority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _login_reward_priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _mission_priority() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _bp_reward_priority() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_durable_hour() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070DDC))(this);
	}
	template <typename T = void> T set_durable_hour(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070DE4))(this, value);
	}
	template <typename T = int32_t> T get_record_hour() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070DEC))(this);
	}
	template <typename T = void> T set_record_hour(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070DF4))(this, value);
	}
	template <typename T = int32_t> T get_record_number() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070DFC))(this);
	}
	template <typename T = void> T set_record_number(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070E04))(this, value);
	}
	template <typename T = int32_t> T get_new_content_priority() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070E0C))(this);
	}
	template <typename T = void> T set_new_content_priority(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070E14))(this, value);
	}
	template <typename T = int32_t> T get_login_reward_priority() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070E1C))(this);
	}
	template <typename T = void> T set_login_reward_priority(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070E24))(this, value);
	}
	template <typename T = int32_t> T get_mission_priority() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070E2C))(this);
	}
	template <typename T = void> T set_mission_priority(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070E34))(this, value);
	}
	template <typename T = int32_t> T get_bp_reward_priority() {
		return ((T (*)(ResActivityBackMiscConf*))(Il2CppBase() + 0x5070E3C))(this);
	}
	template <typename T = void> T set_bp_reward_priority(int32_t value) {
		return ((T (*)(ResActivityBackMiscConf*, int32_t))(Il2CppBase() + 0x5070E44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackMiscConf*, bool))(Il2CppBase() + 0x5070E4C))(this, createIfMissing);
	}

};

}
