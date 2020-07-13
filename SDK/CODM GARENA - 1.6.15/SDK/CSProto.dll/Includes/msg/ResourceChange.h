#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResourceChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResourceChange"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _delta() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _delta_today() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _balance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _last_count_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _next_level_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071A9C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(ResourceChange*, int32_t))(Il2CppBase() + 0x5071AA4))(this, value);
	}
	template <typename T = int32_t> T get_delta() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071AAC))(this);
	}
	template <typename T = void> T set_delta(int32_t value) {
		return ((T (*)(ResourceChange*, int32_t))(Il2CppBase() + 0x5071AB4))(this, value);
	}
	template <typename T = int32_t> T get_delta_today() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071ABC))(this);
	}
	template <typename T = void> T set_delta_today(int32_t value) {
		return ((T (*)(ResourceChange*, int32_t))(Il2CppBase() + 0x5071AC4))(this, value);
	}
	template <typename T = int64_t> T get_balance() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071ACC))(this);
	}
	template <typename T = void> T set_balance(int64_t value) {
		return ((T (*)(ResourceChange*, int64_t))(Il2CppBase() + 0x5071AD4))(this, value);
	}
	template <typename T = uint32_t> T get_last_count_time() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071AE4))(this);
	}
	template <typename T = void> T set_last_count_time(uint32_t value) {
		return ((T (*)(ResourceChange*, uint32_t))(Il2CppBase() + 0x5071AEC))(this, value);
	}
	template <typename T = int32_t> T get_level() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071AF4))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(ResourceChange*, int32_t))(Il2CppBase() + 0x5071AFC))(this, value);
	}
	template <typename T = int32_t> T get_next_level_value() {
		return ((T (*)(ResourceChange*))(Il2CppBase() + 0x5071B04))(this);
	}
	template <typename T = void> T set_next_level_value(int32_t value) {
		return ((T (*)(ResourceChange*, int32_t))(Il2CppBase() + 0x5071B0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResourceChange*, bool))(Il2CppBase() + 0x5071B14))(this, createIfMissing);
	}

};

}
