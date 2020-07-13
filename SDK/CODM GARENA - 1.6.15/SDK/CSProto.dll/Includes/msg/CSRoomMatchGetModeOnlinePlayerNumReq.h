#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchGetModeOnlinePlayerNumReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchGetModeOnlinePlayerNumReq"));
	}

	template <typename T = int32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _core_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_match_type() {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumReq*))(Il2CppBase() + 0x51E06E0))(this);
	}
	template <typename T = void> T set_match_type(int32_t value) {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumReq*, int32_t))(Il2CppBase() + 0x51E06E8))(this, value);
	}
	template <typename T = int32_t> T get_core_type() {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumReq*))(Il2CppBase() + 0x51E06F0))(this);
	}
	template <typename T = void> T set_core_type(int32_t value) {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumReq*, int32_t))(Il2CppBase() + 0x51E06F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumReq*, bool))(Il2CppBase() + 0x51E0700))(this, createIfMissing);
	}

};

}
