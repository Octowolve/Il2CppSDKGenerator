#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildInviteMemberRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_InviteMemberRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildInviteMemberRes*))(Il2CppBase() + 0x51DB9D4))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildInviteMemberRes*, uint32_t))(Il2CppBase() + 0x51DB9DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildInviteMemberRes*, bool))(Il2CppBase() + 0x51DB9E4))(this, createIfMissing);
	}

};

}
