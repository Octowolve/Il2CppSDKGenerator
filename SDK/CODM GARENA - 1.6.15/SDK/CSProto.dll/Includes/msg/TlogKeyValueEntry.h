#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TlogKeyValueEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TlogKeyValueEntry"));
	}

	template <typename T = int32_t> T& _key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _delta_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _old_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _new_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_key() {
		return ((T (*)(TlogKeyValueEntry*))(Il2CppBase() + 0x51AA6D0))(this);
	}
	template <typename T = void> T set_key(int32_t value) {
		return ((T (*)(TlogKeyValueEntry*, int32_t))(Il2CppBase() + 0x51AA6D8))(this, value);
	}
	template <typename T = int32_t> T get_delta_value() {
		return ((T (*)(TlogKeyValueEntry*))(Il2CppBase() + 0x51AA6E0))(this);
	}
	template <typename T = void> T set_delta_value(int32_t value) {
		return ((T (*)(TlogKeyValueEntry*, int32_t))(Il2CppBase() + 0x51AA6E8))(this, value);
	}
	template <typename T = int32_t> T get_reason() {
		return ((T (*)(TlogKeyValueEntry*))(Il2CppBase() + 0x51AA6F0))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(TlogKeyValueEntry*, int32_t))(Il2CppBase() + 0x51AA6F8))(this, value);
	}
	template <typename T = int32_t> T get_old_value() {
		return ((T (*)(TlogKeyValueEntry*))(Il2CppBase() + 0x51AA700))(this);
	}
	template <typename T = void> T set_old_value(int32_t value) {
		return ((T (*)(TlogKeyValueEntry*, int32_t))(Il2CppBase() + 0x51AA708))(this, value);
	}
	template <typename T = int32_t> T get_new_value() {
		return ((T (*)(TlogKeyValueEntry*))(Il2CppBase() + 0x51AA710))(this);
	}
	template <typename T = void> T set_new_value(int32_t value) {
		return ((T (*)(TlogKeyValueEntry*, int32_t))(Il2CppBase() + 0x51AA718))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TlogKeyValueEntry*, bool))(Il2CppBase() + 0x51AA720))(this, createIfMissing);
	}

};

}
