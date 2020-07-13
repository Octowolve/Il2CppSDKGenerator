#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchQuitAllocReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchQuitAllocReq"));
	}

	template <typename T = bool> T& _is_timeout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _match_module() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_is_timeout() {
		return ((T (*)(CSRoomMatchQuitAllocReq*))(Il2CppBase() + 0x51E0B58))(this);
	}
	template <typename T = void> T set_is_timeout(bool value) {
		return ((T (*)(CSRoomMatchQuitAllocReq*, bool))(Il2CppBase() + 0x51E0B60))(this, value);
	}
	template <typename T = int32_t> T get_match_module() {
		return ((T (*)(CSRoomMatchQuitAllocReq*))(Il2CppBase() + 0x51E0B68))(this);
	}
	template <typename T = void> T set_match_module(int32_t value) {
		return ((T (*)(CSRoomMatchQuitAllocReq*, int32_t))(Il2CppBase() + 0x51E0B70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchQuitAllocReq*, bool))(Il2CppBase() + 0x51E0B78))(this, createIfMissing);
	}

};

}
