#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildIndexInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildIndexInfo"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _guild_active() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _allow_join() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _join_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _guild_label() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _guild_active_valid_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _guild_member_score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _need_approve() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _guild_type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _last_active_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFB54))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(GuildIndexInfo*, uint64_t))(Il2CppBase() + 0x50CFB5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFB6C))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildIndexInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50CFB74))(this, value);
	}
	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFB7C))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFB84))(this, value);
	}
	template <typename T = uint32_t> T get_guild_active() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFB8C))(this);
	}
	template <typename T = void> T set_guild_active(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFB94))(this, value);
	}
	template <typename T = bool> T get_allow_join() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFB9C))(this);
	}
	template <typename T = void> T set_allow_join(bool value) {
		return ((T (*)(GuildIndexInfo*, bool))(Il2CppBase() + 0x50CFBA4))(this, value);
	}
	template <typename T = uint32_t> T get_join_level() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBAC))(this);
	}
	template <typename T = void> T set_join_level(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFBB4))(this, value);
	}
	template <typename T = uint32_t> T get_guild_label() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBBC))(this);
	}
	template <typename T = void> T set_guild_label(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFBC4))(this, value);
	}
	template <typename T = uint32_t> T get_guild_active_valid_time() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBCC))(this);
	}
	template <typename T = void> T set_guild_active_valid_time(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFBD4))(this, value);
	}
	template <typename T = uint32_t> T get_guild_member_score() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBDC))(this);
	}
	template <typename T = void> T set_guild_member_score(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFBE4))(this, value);
	}
	template <typename T = uint32_t> T get_need_approve() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBEC))(this);
	}
	template <typename T = void> T set_need_approve(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFBF4))(this, value);
	}
	template <typename T = uint32_t> T get_country_id() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFBFC))(this);
	}
	template <typename T = void> T set_country_id(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFC04))(this, value);
	}
	template <typename T = int32_t> T get_guild_type() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFC0C))(this);
	}
	template <typename T = void> T set_guild_type(int32_t value) {
		return ((T (*)(GuildIndexInfo*, int32_t))(Il2CppBase() + 0x50CFC14))(this, value);
	}
	template <typename T = uint32_t> T get_last_active_time() {
		return ((T (*)(GuildIndexInfo*))(Il2CppBase() + 0x50CFC1C))(this);
	}
	template <typename T = void> T set_last_active_time(uint32_t value) {
		return ((T (*)(GuildIndexInfo*, uint32_t))(Il2CppBase() + 0x50CFC24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildIndexInfo*, bool))(Il2CppBase() + 0x50CFC2C))(this, createIfMissing);
	}

};

}
