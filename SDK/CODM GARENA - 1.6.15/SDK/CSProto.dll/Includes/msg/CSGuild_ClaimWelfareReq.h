#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildClaimWelfareReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ClaimWelfareReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildClaimWelfareReq*))(Il2CppBase() + 0x51DA484))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildClaimWelfareReq*, uint64_t))(Il2CppBase() + 0x51DA48C))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGuildClaimWelfareReq*))(Il2CppBase() + 0x51DA49C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGuildClaimWelfareReq*, uint32_t))(Il2CppBase() + 0x51DA4A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildClaimWelfareReq*, bool))(Il2CppBase() + 0x51DA4AC))(this, createIfMissing);
	}

};

}
