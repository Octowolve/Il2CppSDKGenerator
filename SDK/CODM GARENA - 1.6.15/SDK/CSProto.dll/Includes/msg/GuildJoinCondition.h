#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildJoinCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildJoinCondition"));
	}

	template <typename T = bool> T& _allow_join() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _join_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _need_approval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_allow_join() {
		return ((T (*)(GuildJoinCondition*))(Il2CppBase() + 0x50CFCC4))(this);
	}
	template <typename T = void> T set_allow_join(bool value) {
		return ((T (*)(GuildJoinCondition*, bool))(Il2CppBase() + 0x50CFCCC))(this, value);
	}
	template <typename T = uint32_t> T get_join_level() {
		return ((T (*)(GuildJoinCondition*))(Il2CppBase() + 0x50CFCD4))(this);
	}
	template <typename T = void> T set_join_level(uint32_t value) {
		return ((T (*)(GuildJoinCondition*, uint32_t))(Il2CppBase() + 0x50CFCDC))(this, value);
	}
	template <typename T = bool> T get_need_approval() {
		return ((T (*)(GuildJoinCondition*))(Il2CppBase() + 0x50CFCE4))(this);
	}
	template <typename T = void> T set_need_approval(bool value) {
		return ((T (*)(GuildJoinCondition*, bool))(Il2CppBase() + 0x50CFCEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildJoinCondition*, bool))(Il2CppBase() + 0x50CFCF4))(this, createIfMissing);
	}

};

}
