#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendAddAnswerReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendAddAnswerReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _accept_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GameFriendAddAnswerReq*))(Il2CppBase() + 0x5227844))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GameFriendAddAnswerReq*, uint64_t))(Il2CppBase() + 0x522784C))(this, value);
	}
	template <typename T = int32_t> T get_accept_flag() {
		return ((T (*)(GameFriendAddAnswerReq*))(Il2CppBase() + 0x522785C))(this);
	}
	template <typename T = void> T set_accept_flag(int32_t value) {
		return ((T (*)(GameFriendAddAnswerReq*, int32_t))(Il2CppBase() + 0x5227864))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendAddAnswerReq*, bool))(Il2CppBase() + 0x522786C))(this, createIfMissing);
	}

};

}
