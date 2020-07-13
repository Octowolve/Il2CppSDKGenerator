#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFriendListReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFriendListReq"));
	}

	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_friend_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _serial_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _need_game_stat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _ignore_cache() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _is_mini_demand() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521651C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGetFriendListReq*, int32_t))(Il2CppBase() + 0x5216524))(this, value);
	}
	template <typename T = int32_t> T get_page_friend_count() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521652C))(this);
	}
	template <typename T = void> T set_page_friend_count(int32_t value) {
		return ((T (*)(CSGetFriendListReq*, int32_t))(Il2CppBase() + 0x5216534))(this, value);
	}
	template <typename T = uint32_t> T get_serial_id() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521653C))(this);
	}
	template <typename T = void> T set_serial_id(uint32_t value) {
		return ((T (*)(CSGetFriendListReq*, uint32_t))(Il2CppBase() + 0x5216544))(this, value);
	}
	template <typename T = int32_t> T get_need_game_stat() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521654C))(this);
	}
	template <typename T = void> T set_need_game_stat(int32_t value) {
		return ((T (*)(CSGetFriendListReq*, int32_t))(Il2CppBase() + 0x5216554))(this, value);
	}
	template <typename T = int32_t> T get_ignore_cache() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521655C))(this);
	}
	template <typename T = void> T set_ignore_cache(int32_t value) {
		return ((T (*)(CSGetFriendListReq*, int32_t))(Il2CppBase() + 0x5216564))(this, value);
	}
	template <typename T = int32_t> T get_is_mini_demand() {
		return ((T (*)(CSGetFriendListReq*))(Il2CppBase() + 0x521656C))(this);
	}
	template <typename T = void> T set_is_mini_demand(int32_t value) {
		return ((T (*)(CSGetFriendListReq*, int32_t))(Il2CppBase() + 0x5216574))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFriendListReq*, bool))(Il2CppBase() + 0x521657C))(this, createIfMissing);
	}

};

}
