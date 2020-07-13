#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildAppointViceCaptionReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_AppointViceCaptionReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildAppointViceCaptionReq*))(Il2CppBase() + 0x51DA298))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildAppointViceCaptionReq*, uint64_t))(Il2CppBase() + 0x51DA2A0))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGuildAppointViceCaptionReq*))(Il2CppBase() + 0x51DA2B0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGuildAppointViceCaptionReq*, uint64_t))(Il2CppBase() + 0x51DA2B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildAppointViceCaptionReq*, bool))(Il2CppBase() + 0x51DA2C8))(this, createIfMissing);
	}

};

}
