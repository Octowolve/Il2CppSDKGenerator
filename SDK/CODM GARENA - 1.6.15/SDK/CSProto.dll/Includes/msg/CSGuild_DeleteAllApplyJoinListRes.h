#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildDeleteAllApplyJoinListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_DeleteAllApplyJoinListRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildDeleteAllApplyJoinListRes*))(Il2CppBase() + 0x51DA6EC))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildDeleteAllApplyJoinListRes*, uint32_t))(Il2CppBase() + 0x51DA6F4))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildDeleteAllApplyJoinListRes*))(Il2CppBase() + 0x51DA6FC))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildDeleteAllApplyJoinListRes*, uint64_t))(Il2CppBase() + 0x51DA704))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildDeleteAllApplyJoinListRes*, bool))(Il2CppBase() + 0x51DA714))(this, createIfMissing);
	}

};

}
