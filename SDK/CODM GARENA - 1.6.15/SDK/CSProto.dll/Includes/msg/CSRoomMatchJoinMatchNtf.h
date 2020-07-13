#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchJoinMatchNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchJoinMatchNtf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ds_ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ds_port() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _dsa_bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ds_host_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _ds_crypt_key() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _ds_domain_name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _room_owner_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _pve_spi_damage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _is_newbie() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& _use_local_server() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& _replace_bot_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _lup_ip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _lup_port() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _gvoice_domain() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& _is_warm() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0958))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E0960))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0968))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0970))(this, value);
	}
	template <typename T = uint32_t> T get_ds_ip() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0978))(this);
	}
	template <typename T = void> T set_ds_ip(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0980))(this, value);
	}
	template <typename T = uint32_t> T get_ds_port() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0988))(this);
	}
	template <typename T = void> T set_ds_port(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0990))(this, value);
	}
	template <typename T = int32_t> T get_dsa_bus_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0998))(this);
	}
	template <typename T = void> T set_dsa_bus_id(int32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E09A0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09A8))(this);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09B0))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E09B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ds_host_list() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09C0))(this);
	}
	template <typename T = Il2CppString*> T get_ds_crypt_key() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09C8))(this);
	}
	template <typename T = void> T set_ds_crypt_key(Il2CppString* value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, Il2CppString*))(Il2CppBase() + 0x51E09D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ds_domain_name() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09D8))(this);
	}
	template <typename T = void> T set_ds_domain_name(Il2CppString* value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, Il2CppString*))(Il2CppBase() + 0x51E09E0))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09E8))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E09F0))(this, value);
	}
	template <typename T = uint64_t> T get_room_owner_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E09F8))(this);
	}
	template <typename T = void> T set_room_owner_id(uint64_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint64_t))(Il2CppBase() + 0x51E0A00))(this, value);
	}
	template <typename T = int32_t> T get_mission_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A10))(this);
	}
	template <typename T = void> T set_mission_id(int32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E0A18))(this, value);
	}
	template <typename T = bool> T get_pve_spi_damage() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A20))(this);
	}
	template <typename T = void> T set_pve_spi_damage(bool value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0A28))(this, value);
	}
	template <typename T = bool> T get_is_newbie() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A30))(this);
	}
	template <typename T = void> T set_is_newbie(bool value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0A38))(this, value);
	}
	template <typename T = bool> T get_use_local_server() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A40))(this);
	}
	template <typename T = void> T set_use_local_server(bool value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0A48))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A50))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E0A58))(this, value);
	}
	template <typename T = uint64_t> T get_replace_bot_id() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A60))(this);
	}
	template <typename T = void> T set_replace_bot_id(uint64_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint64_t))(Il2CppBase() + 0x51E0A68))(this, value);
	}
	template <typename T = uint64_t> T get_room_guid() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A78))(this);
	}
	template <typename T = void> T set_room_guid(uint64_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint64_t))(Il2CppBase() + 0x51E0A80))(this, value);
	}
	template <typename T = uint32_t> T get_lup_ip() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0A90))(this);
	}
	template <typename T = void> T set_lup_ip(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0A98))(this, value);
	}
	template <typename T = uint32_t> T get_lup_port() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0AA0))(this);
	}
	template <typename T = void> T set_lup_port(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0AA8))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0AB0))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E0AB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_gvoice_domain() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0AC0))(this);
	}
	template <typename T = void> T set_gvoice_domain(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E0AC8))(this, value);
	}
	template <typename T = bool> T get_is_warm() {
		return ((T (*)(CSRoomMatchJoinMatchNtf*))(Il2CppBase() + 0x51E0AD0))(this);
	}
	template <typename T = void> T set_is_warm(bool value) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0AD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0AE0))(this, createIfMissing);
	}

};

}
