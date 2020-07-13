#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendAddRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendAddRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _punish_item() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendAddRes*))(Il2CppBase() + 0x5227974))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendAddRes*, int32_t))(Il2CppBase() + 0x522797C))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(GameFriendAddRes*))(Il2CppBase() + 0x5227984))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(GameFriendAddRes*, uint64_t))(Il2CppBase() + 0x522798C))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_item() {
		return ((T (*)(GameFriendAddRes*))(Il2CppBase() + 0x522799C))(this);
	}
	template <typename T = void> T set_punish_item(uintptr_t value) {
		return ((T (*)(GameFriendAddRes*, uintptr_t))(Il2CppBase() + 0x52279A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendAddRes*, bool))(Il2CppBase() + 0x52279AC))(this, createIfMissing);
	}

};

}
