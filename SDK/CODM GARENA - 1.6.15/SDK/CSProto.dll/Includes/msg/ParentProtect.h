#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ParentProtect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ParentProtect"));
	}

	template <typename T = uint32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_value() {
		return ((T (*)(ParentProtect*))(Il2CppBase() + 0x4EA5D84))(this);
	}
	template <typename T = void> T set_value(uint32_t value) {
		return ((T (*)(ParentProtect*, uint32_t))(Il2CppBase() + 0x4EA5D8C))(this, value);
	}
	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(ParentProtect*))(Il2CppBase() + 0x4EA5D94))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(ParentProtect*, uint32_t))(Il2CppBase() + 0x4EA5D9C))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(ParentProtect*))(Il2CppBase() + 0x4EA5DA4))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(ParentProtect*, uint32_t))(Il2CppBase() + 0x4EA5DAC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(ParentProtect*))(Il2CppBase() + 0x4EA5DB4))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ParentProtect*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5DBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ParentProtect*, bool))(Il2CppBase() + 0x4EA5DC4))(this, createIfMissing);
	}

};

}
