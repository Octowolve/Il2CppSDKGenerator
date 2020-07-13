#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildShoutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ShoutReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pay_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _invitation_data1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildShoutReq*))(Il2CppBase() + 0x51DBE90))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildShoutReq*, uint64_t))(Il2CppBase() + 0x51DBE98))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildShoutReq*))(Il2CppBase() + 0x51DBEA8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildShoutReq*, uint64_t))(Il2CppBase() + 0x51DBEB0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pay_name() {
		return ((T (*)(CSGuildShoutReq*))(Il2CppBase() + 0x51DBEC0))(this);
	}
	template <typename T = void> T set_pay_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildShoutReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBEC8))(this, value);
	}
	template <typename T = uint32_t> T get_invitation_data1() {
		return ((T (*)(CSGuildShoutReq*))(Il2CppBase() + 0x51DBED0))(this);
	}
	template <typename T = void> T set_invitation_data1(uint32_t value) {
		return ((T (*)(CSGuildShoutReq*, uint32_t))(Il2CppBase() + 0x51DBED8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildShoutReq*, bool))(Il2CppBase() + 0x51DBEE0))(this, createIfMissing);
	}

};

}
