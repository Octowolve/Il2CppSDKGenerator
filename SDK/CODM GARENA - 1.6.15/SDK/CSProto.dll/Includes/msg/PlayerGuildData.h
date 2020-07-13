#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerGuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerGuildData"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _guild_data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(PlayerGuildData*))(Il2CppBase() + 0x4EA8954))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(PlayerGuildData*, uint64_t))(Il2CppBase() + 0x4EA895C))(this, value);
	}
	template <typename T = uintptr_t> T get_guild_data() {
		return ((T (*)(PlayerGuildData*))(Il2CppBase() + 0x4EA896C))(this);
	}
	template <typename T = void> T set_guild_data(uintptr_t value) {
		return ((T (*)(PlayerGuildData*, uintptr_t))(Il2CppBase() + 0x4EA8974))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerGuildData*, bool))(Il2CppBase() + 0x4EA897C))(this, createIfMissing);
	}

};

}
