#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildMembersReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildMembersReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _number_per_page() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildGetGuildMembersReq*))(Il2CppBase() + 0x51DB114))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGetGuildMembersReq*, uint64_t))(Il2CppBase() + 0x51DB11C))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSGuildGetGuildMembersReq*))(Il2CppBase() + 0x51DB12C))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersReq*, int32_t))(Il2CppBase() + 0x51DB134))(this, value);
	}
	template <typename T = int32_t> T get_number_per_page() {
		return ((T (*)(CSGuildGetGuildMembersReq*))(Il2CppBase() + 0x51DB13C))(this);
	}
	template <typename T = void> T set_number_per_page(int32_t value) {
		return ((T (*)(CSGuildGetGuildMembersReq*, int32_t))(Il2CppBase() + 0x51DB144))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildMembersReq*, bool))(Il2CppBase() + 0x51DB14C))(this, createIfMissing);
	}

};

}
