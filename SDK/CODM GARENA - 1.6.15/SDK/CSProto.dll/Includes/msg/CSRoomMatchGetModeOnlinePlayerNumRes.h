#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchGetModeOnlinePlayerNumRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchGetModeOnlinePlayerNumRes"));
	}

	template <typename T = float> T& _match_type_rate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = float> T get_match_type_rate() {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumRes*))(Il2CppBase() + 0x51E071C))(this);
	}
	template <typename T = void> T set_match_type_rate(float value) {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumRes*, float))(Il2CppBase() + 0x51E0724))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchGetModeOnlinePlayerNumRes*, bool))(Il2CppBase() + 0x51E072C))(this, createIfMissing);
	}

};

}
