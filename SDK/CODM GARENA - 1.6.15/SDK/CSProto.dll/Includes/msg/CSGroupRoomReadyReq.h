#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomReadyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomReadyReq"));
	}

	template <typename T = bool> T& _is_ready() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_is_ready() {
		return ((T (*)(CSGroupRoomReadyReq*))(Il2CppBase() + 0x51DEFC8))(this);
	}
	template <typename T = void> T set_is_ready(bool value) {
		return ((T (*)(CSGroupRoomReadyReq*, bool))(Il2CppBase() + 0x51DEFD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomReadyReq*, bool))(Il2CppBase() + 0x51DEFD8))(this, createIfMissing);
	}

};

}
