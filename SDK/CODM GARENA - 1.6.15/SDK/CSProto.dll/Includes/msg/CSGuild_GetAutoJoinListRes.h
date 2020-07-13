#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetAutoJoinListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetAutoJoinListRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildGetAutoJoinListRes*))(Il2CppBase() + 0x51DABF4))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildGetAutoJoinListRes*, uint32_t))(Il2CppBase() + 0x51DABFC))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_guild_id() {
		return ((T (*)(CSGuildGetAutoJoinListRes*))(Il2CppBase() + 0x51DAC04))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetAutoJoinListRes*, bool))(Il2CppBase() + 0x51DAC0C))(this, createIfMissing);
	}

};

}
