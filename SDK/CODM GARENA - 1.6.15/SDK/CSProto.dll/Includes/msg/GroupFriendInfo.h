#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupFriendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupFriendInfo"));
	}

	template <typename T = uintptr_t> T& _friend_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _battle_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_friend_info() {
		return ((T (*)(GroupFriendInfo*))(Il2CppBase() + 0x50CDF48))(this);
	}
	template <typename T = void> T set_friend_info(uintptr_t value) {
		return ((T (*)(GroupFriendInfo*, uintptr_t))(Il2CppBase() + 0x50CDF50))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_info() {
		return ((T (*)(GroupFriendInfo*))(Il2CppBase() + 0x50CDF58))(this);
	}
	template <typename T = void> T set_battle_info(uintptr_t value) {
		return ((T (*)(GroupFriendInfo*, uintptr_t))(Il2CppBase() + 0x50CDF60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupFriendInfo*, bool))(Il2CppBase() + 0x50CDF68))(this, createIfMissing);
	}

};

}
