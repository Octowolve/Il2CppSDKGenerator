#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildMembersRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildMembersRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _number_per_page() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _total_member_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _member_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _state_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB240))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersRes*, int32_t))(Il2CppBase() + 0x51DB248))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB250))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersRes*, int32_t))(Il2CppBase() + 0x51DB258))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB260))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersRes*, int32_t))(Il2CppBase() + 0x51DB268))(this, value);
	}
	template <typename T = int32_t> T get_total_member_count() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB270))(this);
	}
	template <typename T = void> T set_total_member_count(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersRes*, int32_t))(Il2CppBase() + 0x51DB278))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB280))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGetGuildMembersRes*, uint64_t))(Il2CppBase() + 0x51DB288))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_member_list() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB298))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_state_info() {
		return ((T (*)(CSGuildGetGuildMembersRes*))(Il2CppBase() + 0x51DB2A0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildMembersRes*, bool))(Il2CppBase() + 0x51DB2A8))(this, createIfMissing);
	}

};

}
