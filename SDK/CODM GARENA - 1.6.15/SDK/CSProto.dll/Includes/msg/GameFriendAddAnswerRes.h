#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendAddAnswerRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendAddAnswerRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _friend_profile() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _accept_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _punish_item() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendAddAnswerRes*))(Il2CppBase() + 0x5227888))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendAddAnswerRes*, int32_t))(Il2CppBase() + 0x5227890))(this, value);
	}
	template <typename T = uintptr_t> T get_friend_profile() {
		return ((T (*)(GameFriendAddAnswerRes*))(Il2CppBase() + 0x5227898))(this);
	}
	template <typename T = void> T set_friend_profile(uintptr_t value) {
		return ((T (*)(GameFriendAddAnswerRes*, uintptr_t))(Il2CppBase() + 0x52278A0))(this, value);
	}
	template <typename T = int32_t> T get_accept_flag() {
		return ((T (*)(GameFriendAddAnswerRes*))(Il2CppBase() + 0x52278A8))(this);
	}
	template <typename T = void> T set_accept_flag(int32_t value) {
		return ((T (*)(GameFriendAddAnswerRes*, int32_t))(Il2CppBase() + 0x52278B0))(this, value);
	}
	template <typename T = uintptr_t> T get_punish_item() {
		return ((T (*)(GameFriendAddAnswerRes*))(Il2CppBase() + 0x52278B8))(this);
	}
	template <typename T = void> T set_punish_item(uintptr_t value) {
		return ((T (*)(GameFriendAddAnswerRes*, uintptr_t))(Il2CppBase() + 0x52278C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendAddAnswerRes*, bool))(Il2CppBase() + 0x52278C8))(this, createIfMissing);
	}

};

}
