#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildFireMemberReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_FireMemberReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _member_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildFireMemberReq*))(Il2CppBase() + 0x51DA8F4))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildFireMemberReq*, uint64_t))(Il2CppBase() + 0x51DA8FC))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_member_list() {
		return ((T (*)(CSGuildFireMemberReq*))(Il2CppBase() + 0x51DA90C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildFireMemberReq*, bool))(Il2CppBase() + 0x51DA914))(this, createIfMissing);
	}

};

}
