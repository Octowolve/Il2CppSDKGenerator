#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InnerSafeBoxAddEnergyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InnerSafeBoxAddEnergyReq"));
	}

	template <typename T = uint32_t> T& _mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _player_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _login_lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_mode() {
		return ((T (*)(InnerSafeBoxAddEnergyReq*))(Il2CppBase() + 0x50D041C))(this);
	}
	template <typename T = void> T set_mode(uint32_t value) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, uint32_t))(Il2CppBase() + 0x50D0424))(this, value);
	}
	template <typename T = int32_t> T get_game_time() {
		return ((T (*)(InnerSafeBoxAddEnergyReq*))(Il2CppBase() + 0x50D042C))(this);
	}
	template <typename T = void> T set_game_time(int32_t value) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, int32_t))(Il2CppBase() + 0x50D0434))(this, value);
	}
	template <typename T = uint32_t> T get_player_level() {
		return ((T (*)(InnerSafeBoxAddEnergyReq*))(Il2CppBase() + 0x50D043C))(this);
	}
	template <typename T = void> T set_player_level(uint32_t value) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, uint32_t))(Il2CppBase() + 0x50D0444))(this, value);
	}
	template <typename T = uint32_t> T get_login_lobby_bus_id() {
		return ((T (*)(InnerSafeBoxAddEnergyReq*))(Il2CppBase() + 0x50D044C))(this);
	}
	template <typename T = void> T set_login_lobby_bus_id(uint32_t value) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, uint32_t))(Il2CppBase() + 0x50D0454))(this, value);
	}
	template <typename T = int32_t> T get_country_id() {
		return ((T (*)(InnerSafeBoxAddEnergyReq*))(Il2CppBase() + 0x50D045C))(this);
	}
	template <typename T = void> T set_country_id(int32_t value) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, int32_t))(Il2CppBase() + 0x50D0464))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InnerSafeBoxAddEnergyReq*, bool))(Il2CppBase() + 0x50D046C))(this, createIfMissing);
	}

};

}
