#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyHeartbeatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyHeartbeatRes"));
	}

	template <typename T = int32_t> T& _padding() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _tick_count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_padding() {
		return ((T (*)(CSLobbyHeartbeatRes*))(Il2CppBase() + 0x513AC98))(this);
	}
	template <typename T = void> T set_padding(int32_t value) {
		return ((T (*)(CSLobbyHeartbeatRes*, int32_t))(Il2CppBase() + 0x513ACA0))(this, value);
	}
	template <typename T = uint64_t> T get_tick_count() {
		return ((T (*)(CSLobbyHeartbeatRes*))(Il2CppBase() + 0x513ACA8))(this);
	}
	template <typename T = void> T set_tick_count(uint64_t value) {
		return ((T (*)(CSLobbyHeartbeatRes*, uint64_t))(Il2CppBase() + 0x513ACB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyHeartbeatRes*, bool))(Il2CppBase() + 0x513ACC0))(this, createIfMissing);
	}

};

}
