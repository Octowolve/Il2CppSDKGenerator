#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAddFriendMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAddFriendMessage"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _source() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _add_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _accept_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _friend_profile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _read_flag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E4174))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSAddFriendMessage*, int32_t))(Il2CppBase() + 0x51E417C))(this, value);
	}
	template <typename T = int32_t> T get_source() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E4184))(this);
	}
	template <typename T = void> T set_source(int32_t value) {
		return ((T (*)(CSAddFriendMessage*, int32_t))(Il2CppBase() + 0x51E418C))(this, value);
	}
	template <typename T = uint32_t> T get_add_time() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E4194))(this);
	}
	template <typename T = void> T set_add_time(uint32_t value) {
		return ((T (*)(CSAddFriendMessage*, uint32_t))(Il2CppBase() + 0x51E419C))(this, value);
	}
	template <typename T = int32_t> T get_accept_flag() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E41A4))(this);
	}
	template <typename T = void> T set_accept_flag(int32_t value) {
		return ((T (*)(CSAddFriendMessage*, int32_t))(Il2CppBase() + 0x51E41AC))(this, value);
	}
	template <typename T = uintptr_t> T get_friend_profile() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E41B4))(this);
	}
	template <typename T = void> T set_friend_profile(uintptr_t value) {
		return ((T (*)(CSAddFriendMessage*, uintptr_t))(Il2CppBase() + 0x51E41BC))(this, value);
	}
	template <typename T = int32_t> T get_read_flag() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E41C4))(this);
	}
	template <typename T = void> T set_read_flag(int32_t value) {
		return ((T (*)(CSAddFriendMessage*, int32_t))(Il2CppBase() + 0x51E41CC))(this, value);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(CSAddFriendMessage*))(Il2CppBase() + 0x51E41D4))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(CSAddFriendMessage*, uintptr_t))(Il2CppBase() + 0x51E41DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAddFriendMessage*, bool))(Il2CppBase() + 0x51E41E4))(this, createIfMissing);
	}

};

}
