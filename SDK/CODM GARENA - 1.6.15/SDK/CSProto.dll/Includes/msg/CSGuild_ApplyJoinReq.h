#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildApplyJoinReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ApplyJoinReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _join_msg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_auto_join() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _inviter_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildApplyJoinReq*))(Il2CppBase() + 0x51DA198))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildApplyJoinReq*, uint64_t))(Il2CppBase() + 0x51DA1A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_join_msg() {
		return ((T (*)(CSGuildApplyJoinReq*))(Il2CppBase() + 0x51DA1B0))(this);
	}
	template <typename T = void> T set_join_msg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildApplyJoinReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA1B8))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_level() {
		return ((T (*)(CSGuildApplyJoinReq*))(Il2CppBase() + 0x51DA1C0))(this);
	}
	template <typename T = void> T set_ladder_level(uint32_t value) {
		return ((T (*)(CSGuildApplyJoinReq*, uint32_t))(Il2CppBase() + 0x51DA1C8))(this, value);
	}
	template <typename T = bool> T get_is_auto_join() {
		return ((T (*)(CSGuildApplyJoinReq*))(Il2CppBase() + 0x51DA1D0))(this);
	}
	template <typename T = void> T set_is_auto_join(bool value) {
		return ((T (*)(CSGuildApplyJoinReq*, bool))(Il2CppBase() + 0x51DA1D8))(this, value);
	}
	template <typename T = uint64_t> T get_inviter_id() {
		return ((T (*)(CSGuildApplyJoinReq*))(Il2CppBase() + 0x51DA1E0))(this);
	}
	template <typename T = void> T set_inviter_id(uint64_t value) {
		return ((T (*)(CSGuildApplyJoinReq*, uint64_t))(Il2CppBase() + 0x51DA1E8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildApplyJoinReq*, bool))(Il2CppBase() + 0x51DA1F8))(this, createIfMissing);
	}

};

}
