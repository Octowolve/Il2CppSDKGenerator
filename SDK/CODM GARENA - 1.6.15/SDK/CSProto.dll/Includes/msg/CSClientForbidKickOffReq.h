#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSClientForbidKickOffReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSClientForbidKickOffReq"));
	}

	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(CSClientForbidKickOffReq*))(Il2CppBase() + 0x51D0014))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(CSClientForbidKickOffReq*, uintptr_t))(Il2CppBase() + 0x51D001C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSClientForbidKickOffReq*, bool))(Il2CppBase() + 0x51D0024))(this, createIfMissing);
	}

};

}
