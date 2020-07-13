#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildHomePageDataReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildHomePageDataReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_take_prize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildGetGuildHomePageDataReq*))(Il2CppBase() + 0x51DAEE0))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGetGuildHomePageDataReq*, uint64_t))(Il2CppBase() + 0x51DAEE8))(this, value);
	}
	template <typename T = bool> T get_is_take_prize() {
		return ((T (*)(CSGuildGetGuildHomePageDataReq*))(Il2CppBase() + 0x51DAEF8))(this);
	}
	template <typename T = void> T set_is_take_prize(bool value) {
		return ((T (*)(CSGuildGetGuildHomePageDataReq*, bool))(Il2CppBase() + 0x51DAF00))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildHomePageDataReq*, bool))(Il2CppBase() + 0x51DAF08))(this, createIfMissing);
	}

};

}
