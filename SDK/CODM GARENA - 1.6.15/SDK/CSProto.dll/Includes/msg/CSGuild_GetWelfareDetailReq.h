#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetWelfareDetailReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetWelfareDetailReq"));
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
		return ((T (*)(CSGuildGetWelfareDetailReq*))(Il2CppBase() + 0x51DB498))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGetWelfareDetailReq*, uint64_t))(Il2CppBase() + 0x51DB4A0))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGuildGetWelfareDetailReq*))(Il2CppBase() + 0x51DB4B0))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGuildGetWelfareDetailReq*, uint32_t))(Il2CppBase() + 0x51DB4B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetWelfareDetailReq*, bool))(Il2CppBase() + 0x51DB4C0))(this, createIfMissing);
	}

};

}
