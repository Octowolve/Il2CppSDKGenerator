#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatGuildNewMessageNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_GuildNewMessage_Ntf"));
	}

	template <typename T = uint64_t> T& _leader_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_leader_player_id() {
		return ((T (*)(CSChatGuildNewMessageNtf*))(Il2CppBase() + 0x51CFD34))(this);
	}
	template <typename T = void> T set_leader_player_id(uint64_t value) {
		return ((T (*)(CSChatGuildNewMessageNtf*, uint64_t))(Il2CppBase() + 0x51CFD3C))(this, value);
	}
	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSChatGuildNewMessageNtf*))(Il2CppBase() + 0x51CFD4C))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSChatGuildNewMessageNtf*, uintptr_t))(Il2CppBase() + 0x51CFD54))(this, value);
	}
	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(CSChatGuildNewMessageNtf*))(Il2CppBase() + 0x51CFD5C))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(CSChatGuildNewMessageNtf*, uint64_t))(Il2CppBase() + 0x51CFD64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatGuildNewMessageNtf*, bool))(Il2CppBase() + 0x51CFD74))(this, createIfMissing);
	}

};

}
