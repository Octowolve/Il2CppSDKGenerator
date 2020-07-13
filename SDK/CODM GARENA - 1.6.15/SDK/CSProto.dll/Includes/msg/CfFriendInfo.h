#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CfFriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CfFriendInfo"));
	}

	template <typename T = int32_t> T& _cf_friend_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _cf_friend_openid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cf_friend_nick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_cf_friend_uin() {
		return ((T (*)(CfFriendInfo*))(Il2CppBase() + 0x516DF14))(this);
	}
	template <typename T = void> T set_cf_friend_uin(int32_t value) {
		return ((T (*)(CfFriendInfo*, int32_t))(Il2CppBase() + 0x516DF1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_cf_friend_openid() {
		return ((T (*)(CfFriendInfo*))(Il2CppBase() + 0x516DF24))(this);
	}
	template <typename T = void> T set_cf_friend_openid(Il2CppString* value) {
		return ((T (*)(CfFriendInfo*, Il2CppString*))(Il2CppBase() + 0x516DF2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cf_friend_nick() {
		return ((T (*)(CfFriendInfo*))(Il2CppBase() + 0x516DF34))(this);
	}
	template <typename T = void> T set_cf_friend_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CfFriendInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516DF3C))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CfFriendInfo*))(Il2CppBase() + 0x516DF44))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CfFriendInfo*, uint64_t))(Il2CppBase() + 0x516DF4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CfFriendInfo*, bool))(Il2CppBase() + 0x516DF5C))(this, createIfMissing);
	}

};

}
