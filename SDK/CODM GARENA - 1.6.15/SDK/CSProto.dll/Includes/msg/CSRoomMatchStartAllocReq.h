#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchStartAllocReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchStartAllocReq"));
	}

	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _hard_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _match_module() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _pve_spi_damage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _squad_idx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _fire_mode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uint32_t> T& _phone_perf() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CA8))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0CB0))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CB8))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0CC0))(this, value);
	}
	template <typename T = int32_t> T get_hard_level() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CC8))(this);
	}
	template <typename T = void> T set_hard_level(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0CD0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CD8))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E0CE0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CE8))(this);
	}
	template <typename T = int32_t> T get_match_module() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0CF0))(this);
	}
	template <typename T = void> T set_match_module(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0CF8))(this, value);
	}
	template <typename T = bool> T get_pve_spi_damage() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D00))(this);
	}
	template <typename T = void> T set_pve_spi_damage(bool value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, bool))(Il2CppBase() + 0x51E0D08))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D10))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0D18))(this, value);
	}
	template <typename T = int32_t> T get_mission_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D20))(this);
	}
	template <typename T = void> T set_mission_id(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0D28))(this, value);
	}
	template <typename T = int32_t> T get_squad_idx() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D30))(this);
	}
	template <typename T = void> T set_squad_idx(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, int32_t))(Il2CppBase() + 0x51E0D38))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D40))(this);
	}
	template <typename T = uint32_t> T get_fire_mode() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D48))(this);
	}
	template <typename T = void> T set_fire_mode(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint32_t))(Il2CppBase() + 0x51E0D50))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D58))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint64_t))(Il2CppBase() + 0x51E0D60))(this, value);
	}
	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D70))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, bool))(Il2CppBase() + 0x51E0D78))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D80))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint32_t))(Il2CppBase() + 0x51E0D88))(this, value);
	}
	template <typename T = uint32_t> T get_match_type() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0D90))(this);
	}
	template <typename T = void> T set_match_type(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint32_t))(Il2CppBase() + 0x51E0D98))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0DA0))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, bool))(Il2CppBase() + 0x51E0DA8))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0DB0))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, bool))(Il2CppBase() + 0x51E0DB8))(this, value);
	}
	template <typename T = uint32_t> T get_phone_perf() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0DC0))(this);
	}
	template <typename T = void> T set_phone_perf(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint32_t))(Il2CppBase() + 0x51E0DC8))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(CSRoomMatchStartAllocReq*))(Il2CppBase() + 0x51E0DD0))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocReq*, uint32_t))(Il2CppBase() + 0x51E0DD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchStartAllocReq*, bool))(Il2CppBase() + 0x51E0DE0))(this, createIfMissing);
	}

};

}
