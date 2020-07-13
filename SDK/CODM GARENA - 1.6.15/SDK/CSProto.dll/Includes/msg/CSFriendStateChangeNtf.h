#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSFriendStateChangeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSFriendStateChangeNtf"));
	}

	template <typename T = uintptr_t> T& _player_state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_player_state() {
		return ((T (*)(CSFriendStateChangeNtf*))(Il2CppBase() + 0x51D1F10))(this);
	}
	template <typename T = void> T set_player_state(uintptr_t value) {
		return ((T (*)(CSFriendStateChangeNtf*, uintptr_t))(Il2CppBase() + 0x51D1F18))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSFriendStateChangeNtf*, bool))(Il2CppBase() + 0x51D1F20))(this, createIfMissing);
	}

};

}
