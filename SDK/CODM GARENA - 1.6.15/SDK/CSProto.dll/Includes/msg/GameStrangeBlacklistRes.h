#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameStrangeBlacklistRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameStrangeBlacklistRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _add_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GameStrangeBlacklistRes*))(Il2CppBase() + 0x50CD630))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GameStrangeBlacklistRes*, int32_t))(Il2CppBase() + 0x50CD638))(this, value);
	}
	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(GameStrangeBlacklistRes*))(Il2CppBase() + 0x50CD640))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(GameStrangeBlacklistRes*, uint64_t))(Il2CppBase() + 0x50CD648))(this, value);
	}
	template <typename T = bool> T get_add_flag() {
		return ((T (*)(GameStrangeBlacklistRes*))(Il2CppBase() + 0x50CD658))(this);
	}
	template <typename T = void> T set_add_flag(bool value) {
		return ((T (*)(GameStrangeBlacklistRes*, bool))(Il2CppBase() + 0x50CD660))(this, value);
	}
	template <typename T = uint32_t> T get_friend_type() {
		return ((T (*)(GameStrangeBlacklistRes*))(Il2CppBase() + 0x50CD668))(this);
	}
	template <typename T = void> T set_friend_type(uint32_t value) {
		return ((T (*)(GameStrangeBlacklistRes*, uint32_t))(Il2CppBase() + 0x50CD670))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameStrangeBlacklistRes*, bool))(Il2CppBase() + 0x50CD678))(this, createIfMissing);
	}

};

}
