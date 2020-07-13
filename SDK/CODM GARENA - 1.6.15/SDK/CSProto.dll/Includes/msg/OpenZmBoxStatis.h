#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OpenZmBoxStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OpenZmBoxStatis"));
	}

	template <typename T = uint32_t> T& _box_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _open_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_box_type() {
		return ((T (*)(OpenZmBoxStatis*))(Il2CppBase() + 0x4EA5C24))(this);
	}
	template <typename T = void> T set_box_type(uint32_t value) {
		return ((T (*)(OpenZmBoxStatis*, uint32_t))(Il2CppBase() + 0x4EA5C2C))(this, value);
	}
	template <typename T = uint32_t> T get_open_num() {
		return ((T (*)(OpenZmBoxStatis*))(Il2CppBase() + 0x4EA5C34))(this);
	}
	template <typename T = void> T set_open_num(uint32_t value) {
		return ((T (*)(OpenZmBoxStatis*, uint32_t))(Il2CppBase() + 0x4EA5C3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OpenZmBoxStatis*, bool))(Il2CppBase() + 0x4EA5C44))(this, createIfMissing);
	}

};

}
