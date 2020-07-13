#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildAppointViceCaptionRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_AppointViceCaptionRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildAppointViceCaptionRes*))(Il2CppBase() + 0x51DA2E4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildAppointViceCaptionRes*, int32_t))(Il2CppBase() + 0x51DA2EC))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildAppointViceCaptionRes*))(Il2CppBase() + 0x51DA2F4))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildAppointViceCaptionRes*, uint64_t))(Il2CppBase() + 0x51DA2FC))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildAppointViceCaptionRes*))(Il2CppBase() + 0x51DA30C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildAppointViceCaptionRes*, uint64_t))(Il2CppBase() + 0x51DA314))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildAppointViceCaptionRes*, bool))(Il2CppBase() + 0x51DA324))(this, createIfMissing);
	}

};

}
