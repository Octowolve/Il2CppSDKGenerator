#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendBlacklistReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendBlacklistReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _add_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GameFriendBlacklistReq*))(Il2CppBase() + 0x52279FC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GameFriendBlacklistReq*, uint64_t))(Il2CppBase() + 0x5227A04))(this, value);
	}
	template <typename T = bool> T get_add_flag() {
		return ((T (*)(GameFriendBlacklistReq*))(Il2CppBase() + 0x5227A14))(this);
	}
	template <typename T = void> T set_add_flag(bool value) {
		return ((T (*)(GameFriendBlacklistReq*, bool))(Il2CppBase() + 0x5227A1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendBlacklistReq*, bool))(Il2CppBase() + 0x5227A24))(this, createIfMissing);
	}

};

}
