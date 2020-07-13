#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TicketInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TicketInfo"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _recruit_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _room_full_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _min_ladder_level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _max_ladder_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _min_level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _new_flag() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _leader_account_type() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint64_t> T& _leader_dsa_ver() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _leader_country_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& _leader_player_id() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _room_type() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _playlist_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _dsc_ping() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _match_score() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA218))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA220))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA228))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA230))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA238))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA240))(this, value);
	}
	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA248))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA250))(this, value);
	}
	template <typename T = uint32_t> T get_recruit_count() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA258))(this);
	}
	template <typename T = void> T set_recruit_count(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA260))(this, value);
	}
	template <typename T = uint32_t> T get_room_full_count() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA268))(this);
	}
	template <typename T = void> T set_room_full_count(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA270))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA278))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(TicketInfo*, uint64_t))(Il2CppBase() + 0x51AA280))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_type() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA290))(this);
	}
	template <typename T = void> T set_ticket_type(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA298))(this, value);
	}
	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2A0))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2A8))(this, value);
	}
	template <typename T = uint32_t> T get_min_ladder_level() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2B0))(this);
	}
	template <typename T = void> T set_min_ladder_level(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2B8))(this, value);
	}
	template <typename T = uint32_t> T get_max_ladder_level() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2C0))(this);
	}
	template <typename T = void> T set_max_ladder_level(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2C8))(this, value);
	}
	template <typename T = uint32_t> T get_min_level() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2D0))(this);
	}
	template <typename T = void> T set_min_level(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2D8))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2E0))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2E8))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA2F0))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA2F8))(this, value);
	}
	template <typename T = uint32_t> T get_new_flag() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA300))(this);
	}
	template <typename T = void> T set_new_flag(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA308))(this, value);
	}
	template <typename T = int32_t> T get_language_code() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA310))(this);
	}
	template <typename T = void> T set_language_code(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA318))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA320))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(TicketInfo*, bool))(Il2CppBase() + 0x51AA328))(this, value);
	}
	template <typename T = int32_t> T get_leader_account_type() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA330))(this);
	}
	template <typename T = void> T set_leader_account_type(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA338))(this, value);
	}
	template <typename T = uint64_t> T get_leader_dsa_ver() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA340))(this);
	}
	template <typename T = void> T set_leader_dsa_ver(uint64_t value) {
		return ((T (*)(TicketInfo*, uint64_t))(Il2CppBase() + 0x51AA348))(this, value);
	}
	template <typename T = int32_t> T get_leader_country_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA358))(this);
	}
	template <typename T = void> T set_leader_country_id(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA360))(this, value);
	}
	template <typename T = uint64_t> T get_leader_player_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA368))(this);
	}
	template <typename T = void> T set_leader_player_id(uint64_t value) {
		return ((T (*)(TicketInfo*, uint64_t))(Il2CppBase() + 0x51AA370))(this, value);
	}
	template <typename T = uint32_t> T get_room_type() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA380))(this);
	}
	template <typename T = void> T set_room_type(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA388))(this, value);
	}
	template <typename T = uint32_t> T get_playlist_id() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA390))(this);
	}
	template <typename T = void> T set_playlist_id(uint32_t value) {
		return ((T (*)(TicketInfo*, uint32_t))(Il2CppBase() + 0x51AA398))(this, value);
	}
	template <typename T = int32_t> T get_dsc_ping() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA3A0))(this);
	}
	template <typename T = void> T set_dsc_ping(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA3A8))(this, value);
	}
	template <typename T = int32_t> T get_match_score() {
		return ((T (*)(TicketInfo*))(Il2CppBase() + 0x51AA3B0))(this);
	}
	template <typename T = void> T set_match_score(int32_t value) {
		return ((T (*)(TicketInfo*, int32_t))(Il2CppBase() + 0x51AA3B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TicketInfo*, bool))(Il2CppBase() + 0x51AA3C0))(this, createIfMissing);
	}

};

}
