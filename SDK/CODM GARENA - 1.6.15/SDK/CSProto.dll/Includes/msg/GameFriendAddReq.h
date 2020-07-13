#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendAddReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendAddReq"));
	}

	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_from_comrade() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(GameFriendAddReq*))(Il2CppBase() + 0x5227920))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(GameFriendAddReq*, uint64_t))(Il2CppBase() + 0x5227928))(this, value);
	}
	template <typename T = int32_t> T get_source() {
		return ((T (*)(GameFriendAddReq*))(Il2CppBase() + 0x5227938))(this);
	}
	template <typename T = void> T set_source(int32_t value) {
		return ((T (*)(GameFriendAddReq*, int32_t))(Il2CppBase() + 0x5227940))(this, value);
	}
	template <typename T = bool> T get_is_from_comrade() {
		return ((T (*)(GameFriendAddReq*))(Il2CppBase() + 0x5227948))(this);
	}
	template <typename T = void> T set_is_from_comrade(bool value) {
		return ((T (*)(GameFriendAddReq*, bool))(Il2CppBase() + 0x5227950))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendAddReq*, bool))(Il2CppBase() + 0x5227958))(this, createIfMissing);
	}

};

}
