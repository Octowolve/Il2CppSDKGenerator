#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSearchRoomByPlayerIdReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSearchRoomByPlayerIdReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSSearchRoomByPlayerIdReq*))(Il2CppBase() + 0x51E1180))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSSearchRoomByPlayerIdReq*, uint64_t))(Il2CppBase() + 0x51E1188))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSearchRoomByPlayerIdReq*, bool))(Il2CppBase() + 0x51E1198))(this, createIfMissing);
	}

};

}
