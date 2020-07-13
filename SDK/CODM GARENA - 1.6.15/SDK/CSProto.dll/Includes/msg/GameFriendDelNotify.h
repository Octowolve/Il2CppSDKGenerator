#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendDelNotify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendDelNotify"));
	}

	template <typename T = uint64_t> T& _del_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_del_player_id() {
		return ((T (*)(GameFriendDelNotify*))(Il2CppBase() + 0x5227A8C))(this);
	}
	template <typename T = void> T set_del_player_id(uint64_t value) {
		return ((T (*)(GameFriendDelNotify*, uint64_t))(Il2CppBase() + 0x5227A94))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendDelNotify*, bool))(Il2CppBase() + 0x5227AA4))(this, createIfMissing);
	}

};

}
