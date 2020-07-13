#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSFriend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSFriend"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _openid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _profile() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_online() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_nick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _is_relation_friend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _login_lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_openid() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1DD4))(this);
	}
	template <typename T = void> T set_openid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFriend*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1DDC))(this, value);
	}
	template <typename T = uintptr_t> T get_profile() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1DE4))(this);
	}
	template <typename T = void> T set_profile(uintptr_t value) {
		return ((T (*)(CSFriend*, uintptr_t))(Il2CppBase() + 0x51D1DEC))(this, value);
	}
	template <typename T = bool> T get_is_online() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1DF4))(this);
	}
	template <typename T = void> T set_is_online(bool value) {
		return ((T (*)(CSFriend*, bool))(Il2CppBase() + 0x51D1DFC))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E04))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSFriend*, int32_t))(Il2CppBase() + 0x51D1E0C))(this, value);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E14))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(CSFriend*, uintptr_t))(Il2CppBase() + 0x51D1E1C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_nick() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E24))(this);
	}
	template <typename T = void> T set_relation_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFriend*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1E2C))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E34))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSFriend*, uint32_t))(Il2CppBase() + 0x51D1E3C))(this, value);
	}
	template <typename T = uint32_t> T get_game_time() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E44))(this);
	}
	template <typename T = void> T set_game_time(uint32_t value) {
		return ((T (*)(CSFriend*, uint32_t))(Il2CppBase() + 0x51D1E4C))(this, value);
	}
	template <typename T = bool> T get_is_relation_friend() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E54))(this);
	}
	template <typename T = void> T set_is_relation_friend(bool value) {
		return ((T (*)(CSFriend*, bool))(Il2CppBase() + 0x51D1E5C))(this, value);
	}
	template <typename T = uint32_t> T get_friend_type() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E64))(this);
	}
	template <typename T = void> T set_friend_type(uint32_t value) {
		return ((T (*)(CSFriend*, uint32_t))(Il2CppBase() + 0x51D1E6C))(this, value);
	}
	template <typename T = uint32_t> T get_login_lobby_bus_id() {
		return ((T (*)(CSFriend*))(Il2CppBase() + 0x51D1E74))(this);
	}
	template <typename T = void> T set_login_lobby_bus_id(uint32_t value) {
		return ((T (*)(CSFriend*, uint32_t))(Il2CppBase() + 0x51D1E7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSFriend*, bool))(Il2CppBase() + 0x51D1E84))(this, createIfMissing);
	}

};

}
