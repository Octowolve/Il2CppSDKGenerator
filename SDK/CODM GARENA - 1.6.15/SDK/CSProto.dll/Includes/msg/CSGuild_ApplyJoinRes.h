#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildApplyJoinRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ApplyJoinRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _guild_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _can_join_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _is_join() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA214))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildApplyJoinRes*, int32_t))(Il2CppBase() + 0x51DA21C))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA224))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildApplyJoinRes*, uint64_t))(Il2CppBase() + 0x51DA22C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_guild_name() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA23C))(this);
	}
	template <typename T = void> T set_guild_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildApplyJoinRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA244))(this, value);
	}
	template <typename T = uint32_t> T get_can_join_time() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA24C))(this);
	}
	template <typename T = void> T set_can_join_time(uint32_t value) {
		return ((T (*)(CSGuildApplyJoinRes*, uint32_t))(Il2CppBase() + 0x51DA254))(this, value);
	}
	template <typename T = uint32_t> T get_is_join() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA25C))(this);
	}
	template <typename T = void> T set_is_join(uint32_t value) {
		return ((T (*)(CSGuildApplyJoinRes*, uint32_t))(Il2CppBase() + 0x51DA264))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSGuildApplyJoinRes*))(Il2CppBase() + 0x51DA26C))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGuildApplyJoinRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DA274))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildApplyJoinRes*, bool))(Il2CppBase() + 0x51DA27C))(this, createIfMissing);
	}

};

}
