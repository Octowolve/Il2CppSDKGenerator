#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildSearchGuildReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_SearchGuildReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _search_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _guild_label() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _noneed_approve() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_local() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD1C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildSearchGuildReq*, uint64_t))(Il2CppBase() + 0x51DBD24))(this, value);
	}
	template <typename T = uint32_t> T get_search_type() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD34))(this);
	}
	template <typename T = void> T set_search_type(uint32_t value) {
		return ((T (*)(CSGuildSearchGuildReq*, uint32_t))(Il2CppBase() + 0x51DBD3C))(this, value);
	}
	template <typename T = uint32_t> T get_guild_label() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD44))(this);
	}
	template <typename T = void> T set_guild_label(uint32_t value) {
		return ((T (*)(CSGuildSearchGuildReq*, uint32_t))(Il2CppBase() + 0x51DBD4C))(this, value);
	}
	template <typename T = bool> T get_noneed_approve() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD54))(this);
	}
	template <typename T = void> T set_noneed_approve(bool value) {
		return ((T (*)(CSGuildSearchGuildReq*, bool))(Il2CppBase() + 0x51DBD5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD64))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildSearchGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBD6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_local() {
		return ((T (*)(CSGuildSearchGuildReq*))(Il2CppBase() + 0x51DBD74))(this);
	}
	template <typename T = void> T set_guild_local(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildSearchGuildReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBD7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildSearchGuildReq*, bool))(Il2CppBase() + 0x51DBD84))(this, createIfMissing);
	}

};

}
