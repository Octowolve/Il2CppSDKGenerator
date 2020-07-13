#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class KeyValueEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "KeyValueEntry"));
	}

	template <typename T = bool> T& _is_add() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_is_add() {
		return ((T (*)(KeyValueEntry*))(Il2CppBase() + 0x50D0D08))(this);
	}
	template <typename T = void> T set_is_add(bool value) {
		return ((T (*)(KeyValueEntry*, bool))(Il2CppBase() + 0x50D0D10))(this, value);
	}
	template <typename T = int32_t> T get_key() {
		return ((T (*)(KeyValueEntry*))(Il2CppBase() + 0x50D0D18))(this);
	}
	template <typename T = void> T set_key(int32_t value) {
		return ((T (*)(KeyValueEntry*, int32_t))(Il2CppBase() + 0x50D0D20))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(KeyValueEntry*))(Il2CppBase() + 0x50D0D28))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(KeyValueEntry*, int32_t))(Il2CppBase() + 0x50D0D30))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(KeyValueEntry*, bool))(Il2CppBase() + 0x50D0D38))(this, createIfMissing);
	}

};

}
