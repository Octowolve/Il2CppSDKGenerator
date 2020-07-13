#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendBlackListNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendBlackListNtf"));
	}

	template <typename T = uint64_t> T& _friend_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_friend_id() {
		return ((T (*)(GameFriendBlackListNtf*))(Il2CppBase() + 0x52279C8))(this);
	}
	template <typename T = void> T set_friend_id(uint64_t value) {
		return ((T (*)(GameFriendBlackListNtf*, uint64_t))(Il2CppBase() + 0x52279D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendBlackListNtf*, bool))(Il2CppBase() + 0x52279E0))(this, createIfMissing);
	}

};

}
