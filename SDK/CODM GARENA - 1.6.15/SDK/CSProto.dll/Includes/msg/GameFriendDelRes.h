#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendDelRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendDelRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendDelRes*))(Il2CppBase() + 0x5227B04))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendDelRes*, int32_t))(Il2CppBase() + 0x5227B0C))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(GameFriendDelRes*))(Il2CppBase() + 0x5227B14))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(GameFriendDelRes*, uint64_t))(Il2CppBase() + 0x5227B1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendDelRes*, bool))(Il2CppBase() + 0x5227B2C))(this, createIfMissing);
	}

};

}
