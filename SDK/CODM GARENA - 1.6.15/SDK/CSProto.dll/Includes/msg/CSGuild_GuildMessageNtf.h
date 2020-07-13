#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGuildMessageNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GuildMessageNtf"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildGuildMessageNtf*))(Il2CppBase() + 0x51DB8CC))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGuildMessageNtf*, uint64_t))(Il2CppBase() + 0x51DB8D4))(this, value);
	}
	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSGuildGuildMessageNtf*))(Il2CppBase() + 0x51DB8E4))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSGuildGuildMessageNtf*, uintptr_t))(Il2CppBase() + 0x51DB8EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGuildMessageNtf*, bool))(Il2CppBase() + 0x51DB8F4))(this, createIfMissing);
	}

};

}
