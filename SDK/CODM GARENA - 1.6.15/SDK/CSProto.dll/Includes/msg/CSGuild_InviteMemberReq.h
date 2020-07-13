#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildInviteMemberReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_InviteMemberReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _member_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildInviteMemberReq*))(Il2CppBase() + 0x51DB988))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildInviteMemberReq*, uint64_t))(Il2CppBase() + 0x51DB990))(this, value);
	}
	template <typename T = uint64_t> T get_member_id() {
		return ((T (*)(CSGuildInviteMemberReq*))(Il2CppBase() + 0x51DB9A0))(this);
	}
	template <typename T = void> T set_member_id(uint64_t value) {
		return ((T (*)(CSGuildInviteMemberReq*, uint64_t))(Il2CppBase() + 0x51DB9A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildInviteMemberReq*, bool))(Il2CppBase() + 0x51DB9B8))(this, createIfMissing);
	}

};

}
