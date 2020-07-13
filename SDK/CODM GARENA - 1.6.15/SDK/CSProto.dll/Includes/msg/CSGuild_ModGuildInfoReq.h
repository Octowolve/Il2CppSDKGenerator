#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildModGuildInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ModGuildInfoReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _new_join_condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_slogan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_bulletin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _new_guild_label() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_sns_group_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _new_guild_local() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA34))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildModGuildInfoReq*, uint64_t))(Il2CppBase() + 0x51DBA3C))(this, value);
	}
	template <typename T = uintptr_t> T get_new_join_condition() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA4C))(this);
	}
	template <typename T = void> T set_new_join_condition(uintptr_t value) {
		return ((T (*)(CSGuildModGuildInfoReq*, uintptr_t))(Il2CppBase() + 0x51DBA54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_slogan() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA5C))(this);
	}
	template <typename T = void> T set_new_guild_slogan(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBA64))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_bulletin() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA6C))(this);
	}
	template <typename T = void> T set_new_guild_bulletin(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBA74))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_icon() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA7C))(this);
	}
	template <typename T = void> T set_new_guild_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBA84))(this, value);
	}
	template <typename T = uint32_t> T get_new_guild_label() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA8C))(this);
	}
	template <typename T = void> T set_new_guild_label(uint32_t value) {
		return ((T (*)(CSGuildModGuildInfoReq*, uint32_t))(Il2CppBase() + 0x51DBA94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_sns_group_id() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBA9C))(this);
	}
	template <typename T = void> T set_new_sns_group_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBAA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_new_guild_local() {
		return ((T (*)(CSGuildModGuildInfoReq*))(Il2CppBase() + 0x51DBAAC))(this);
	}
	template <typename T = void> T set_new_guild_local(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildModGuildInfoReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DBAB4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildModGuildInfoReq*, bool))(Il2CppBase() + 0x51DBABC))(this, createIfMissing);
	}

};

}
