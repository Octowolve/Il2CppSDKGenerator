#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2LobbyIDIPKickOffPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Lobby_IDIP_KickOffPlayer"));
	}

	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason_msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_reason() {
		return ((T (*)(Any2LobbyIDIPKickOffPlayer*))(Il2CppBase() + 0x510BDB8))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(Any2LobbyIDIPKickOffPlayer*, int32_t))(Il2CppBase() + 0x510BDC0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason_msg() {
		return ((T (*)(Any2LobbyIDIPKickOffPlayer*))(Il2CppBase() + 0x510BDC8))(this);
	}
	template <typename T = void> T set_reason_msg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Any2LobbyIDIPKickOffPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510BDD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2LobbyIDIPKickOffPlayer*, bool))(Il2CppBase() + 0x510BDD8))(this, createIfMissing);
	}

};

}
