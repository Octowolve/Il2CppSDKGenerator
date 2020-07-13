#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FireModeFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FireModeFlag"));
	}

	template <typename T = int32_t> T& _server_module() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _fire_flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_server_module() {
		return ((T (*)(FireModeFlag*))(Il2CppBase() + 0x5227494))(this);
	}
	template <typename T = void> T set_server_module(int32_t value) {
		return ((T (*)(FireModeFlag*, int32_t))(Il2CppBase() + 0x522749C))(this, value);
	}
	template <typename T = int32_t> T get_fire_flag() {
		return ((T (*)(FireModeFlag*))(Il2CppBase() + 0x52274A4))(this);
	}
	template <typename T = void> T set_fire_flag(int32_t value) {
		return ((T (*)(FireModeFlag*, int32_t))(Il2CppBase() + 0x52274AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FireModeFlag*, bool))(Il2CppBase() + 0x52274B4))(this, createIfMissing);
	}

};

}
