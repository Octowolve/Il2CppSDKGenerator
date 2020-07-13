#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyHeartbeatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyHeartbeatReq"));
	}

	template <typename T = int32_t> T& _padding() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_padding() {
		return ((T (*)(CSLobbyHeartbeatReq*))(Il2CppBase() + 0x513AC6C))(this);
	}
	template <typename T = void> T set_padding(int32_t value) {
		return ((T (*)(CSLobbyHeartbeatReq*, int32_t))(Il2CppBase() + 0x513AC74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyHeartbeatReq*, bool))(Il2CppBase() + 0x513AC7C))(this, createIfMissing);
	}

};

}
