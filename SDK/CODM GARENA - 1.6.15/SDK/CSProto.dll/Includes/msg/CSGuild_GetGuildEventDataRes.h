#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildEventDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildEventDataRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _guild_event_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildGetGuildEventDataRes*))(Il2CppBase() + 0x51DAEAC))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildGetGuildEventDataRes*, uint32_t))(Il2CppBase() + 0x51DAEB4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_guild_event_info() {
		return ((T (*)(CSGuildGetGuildEventDataRes*))(Il2CppBase() + 0x51DAEBC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildEventDataRes*, bool))(Il2CppBase() + 0x51DAEC4))(this, createIfMissing);
	}

};

}
