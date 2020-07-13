#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendBlacklistRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendBlacklistRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _black_friend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _add_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameFriendBlacklistRes*))(Il2CppBase() + 0x5227A40))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameFriendBlacklistRes*, int32_t))(Il2CppBase() + 0x5227A48))(this, value);
	}
	template <typename T = uintptr_t> T get_black_friend() {
		return ((T (*)(GameFriendBlacklistRes*))(Il2CppBase() + 0x5227A50))(this);
	}
	template <typename T = void> T set_black_friend(uintptr_t value) {
		return ((T (*)(GameFriendBlacklistRes*, uintptr_t))(Il2CppBase() + 0x5227A58))(this, value);
	}
	template <typename T = bool> T get_add_flag() {
		return ((T (*)(GameFriendBlacklistRes*))(Il2CppBase() + 0x5227A60))(this);
	}
	template <typename T = void> T set_add_flag(bool value) {
		return ((T (*)(GameFriendBlacklistRes*, bool))(Il2CppBase() + 0x5227A68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendBlacklistRes*, bool))(Il2CppBase() + 0x5227A70))(this, createIfMissing);
	}

};

}
