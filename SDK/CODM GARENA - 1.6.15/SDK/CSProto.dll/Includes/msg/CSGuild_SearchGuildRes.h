#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildSearchGuildRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_SearchGuildRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _guild_info_ary() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildSearchGuildRes*))(Il2CppBase() + 0x51DBE44))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildSearchGuildRes*, uint32_t))(Il2CppBase() + 0x51DBE4C))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildSearchGuildRes*))(Il2CppBase() + 0x51DBE54))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildSearchGuildRes*, uint64_t))(Il2CppBase() + 0x51DBE5C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_guild_info_ary() {
		return ((T (*)(CSGuildSearchGuildRes*))(Il2CppBase() + 0x51DBE6C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildSearchGuildRes*, bool))(Il2CppBase() + 0x51DBE74))(this, createIfMissing);
	}

};

}
