#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSStateGetRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSStateGetRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _state_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSStateGetRes*))(Il2CppBase() + 0x51E2D64))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSStateGetRes*, int32_t))(Il2CppBase() + 0x51E2D6C))(this, value);
	}
	template <typename T = uintptr_t> T get_state_info() {
		return ((T (*)(CSStateGetRes*))(Il2CppBase() + 0x51E2D74))(this);
	}
	template <typename T = void> T set_state_info(uintptr_t value) {
		return ((T (*)(CSStateGetRes*, uintptr_t))(Il2CppBase() + 0x51E2D7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSStateGetRes*, bool))(Il2CppBase() + 0x51E2D84))(this, createIfMissing);
	}

};

}
