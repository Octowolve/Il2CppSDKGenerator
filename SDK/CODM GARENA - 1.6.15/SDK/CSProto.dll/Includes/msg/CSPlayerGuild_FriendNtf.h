#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerGuildFriendNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerGuild_FriendNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSPlayerGuildFriendNtf*))(Il2CppBase() + 0x51F14E0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSPlayerGuildFriendNtf*, uint64_t))(Il2CppBase() + 0x51F14E8))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSPlayerGuildFriendNtf*))(Il2CppBase() + 0x51F14F8))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSPlayerGuildFriendNtf*, uint64_t))(Il2CppBase() + 0x51F1500))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerGuildFriendNtf*, bool))(Il2CppBase() + 0x51F1510))(this, createIfMissing);
	}

};

}
