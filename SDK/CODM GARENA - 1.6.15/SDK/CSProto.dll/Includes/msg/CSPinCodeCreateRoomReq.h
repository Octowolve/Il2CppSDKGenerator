#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPinCodeCreateRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPinCodeCreateRoomReq"));
	}

	template <typename T = int32_t> T& _pin_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _latitude() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _longitude() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_pin_code() {
		return ((T (*)(CSPinCodeCreateRoomReq*))(Il2CppBase() + 0x51F10C4))(this);
	}
	template <typename T = void> T set_pin_code(int32_t value) {
		return ((T (*)(CSPinCodeCreateRoomReq*, int32_t))(Il2CppBase() + 0x51F10CC))(this, value);
	}
	template <typename T = int32_t> T get_latitude() {
		return ((T (*)(CSPinCodeCreateRoomReq*))(Il2CppBase() + 0x51F10D4))(this);
	}
	template <typename T = void> T set_latitude(int32_t value) {
		return ((T (*)(CSPinCodeCreateRoomReq*, int32_t))(Il2CppBase() + 0x51F10DC))(this, value);
	}
	template <typename T = int32_t> T get_longitude() {
		return ((T (*)(CSPinCodeCreateRoomReq*))(Il2CppBase() + 0x51F10E4))(this);
	}
	template <typename T = void> T set_longitude(int32_t value) {
		return ((T (*)(CSPinCodeCreateRoomReq*, int32_t))(Il2CppBase() + 0x51F10EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPinCodeCreateRoomReq*, bool))(Il2CppBase() + 0x51F10F4))(this, createIfMissing);
	}

};

}
