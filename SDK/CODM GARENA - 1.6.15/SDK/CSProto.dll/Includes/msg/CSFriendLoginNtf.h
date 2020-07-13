#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSFriendLoginNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSFriendLoginNtf"));
	}

	template <typename T = uint64_t> T& _friend_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _friend_game_nick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _friend_pic_url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_friend_player_id() {
		return ((T (*)(CSFriendLoginNtf*))(Il2CppBase() + 0x51D1EBC))(this);
	}
	template <typename T = void> T set_friend_player_id(uint64_t value) {
		return ((T (*)(CSFriendLoginNtf*, uint64_t))(Il2CppBase() + 0x51D1EC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friend_game_nick() {
		return ((T (*)(CSFriendLoginNtf*))(Il2CppBase() + 0x51D1ED4))(this);
	}
	template <typename T = void> T set_friend_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFriendLoginNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1EDC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friend_pic_url() {
		return ((T (*)(CSFriendLoginNtf*))(Il2CppBase() + 0x51D1EE4))(this);
	}
	template <typename T = void> T set_friend_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFriendLoginNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1EEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSFriendLoginNtf*, bool))(Il2CppBase() + 0x51D1EF4))(this, createIfMissing);
	}

};

}
