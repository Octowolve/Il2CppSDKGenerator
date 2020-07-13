#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildPlayerGuildDataChgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_PlayerGuildDataChgNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*))(Il2CppBase() + 0x51DBBD8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*, uint64_t))(Il2CppBase() + 0x51DBBE0))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*))(Il2CppBase() + 0x51DBBF0))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*, uint64_t))(Il2CppBase() + 0x51DBBF8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*))(Il2CppBase() + 0x51DBC08))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBC10))(this, value);
	}
	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*))(Il2CppBase() + 0x51DBC18))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*, uint32_t))(Il2CppBase() + 0x51DBC20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildPlayerGuildDataChgNtf*, bool))(Il2CppBase() + 0x51DBC28))(this, createIfMissing);
	}

};

}
