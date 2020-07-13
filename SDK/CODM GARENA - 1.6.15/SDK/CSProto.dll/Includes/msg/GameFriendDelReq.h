#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameFriendDelReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameFriendDelReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GameFriendDelReq*))(Il2CppBase() + 0x5227AC0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GameFriendDelReq*, uint64_t))(Il2CppBase() + 0x5227AC8))(this, value);
	}
	template <typename T = int32_t> T get_reason() {
		return ((T (*)(GameFriendDelReq*))(Il2CppBase() + 0x5227AD8))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(GameFriendDelReq*, int32_t))(Il2CppBase() + 0x5227AE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameFriendDelReq*, bool))(Il2CppBase() + 0x5227AE8))(this, createIfMissing);
	}

};

}
