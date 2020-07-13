#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerAccountInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerAccountInfo"));
	}

	template <typename T = uint64_t> T& _user_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _zone_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _zone_busid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _account_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _access_token() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _pay_token() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _pf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _session_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _session_type() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _is_team() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _half_way_join() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _clan_level() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _fatigue_value() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _is_newbie() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _is_gangup() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = Il2CppString*> T& _king_core_user_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _king_install_id() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& _king_session_id() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _ex_vip_flag() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _login_time() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _login_country_id() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6270))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(PlayerAccountInfo*, uint64_t))(Il2CppBase() + 0x4EA6278))(this, value);
	}
	template <typename T = int32_t> T get_zone_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6288))(this);
	}
	template <typename T = void> T set_zone_id(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6290))(this, value);
	}
	template <typename T = uint32_t> T get_zone_busid() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6298))(this);
	}
	template <typename T = void> T set_zone_busid(uint32_t value) {
		return ((T (*)(PlayerAccountInfo*, uint32_t))(Il2CppBase() + 0x4EA62A0))(this, value);
	}
	template <typename T = int32_t> T get_account_type() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62A8))(this);
	}
	template <typename T = void> T set_account_type(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA62B0))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62B8))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA62C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_access_token() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62C8))(this);
	}
	template <typename T = void> T set_access_token(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA62D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_pay_token() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62D8))(this);
	}
	template <typename T = void> T set_pay_token(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA62E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_open_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62E8))(this);
	}
	template <typename T = void> T set_open_id(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA62F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_pf() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA62F8))(this);
	}
	template <typename T = void> T set_pf(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA6300))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6308))(this);
	}
	template <typename T = void> T set_session_id(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA6310))(this, value);
	}
	template <typename T = Il2CppString*> T get_session_type() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6318))(this);
	}
	template <typename T = void> T set_session_type(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA6320))(this, value);
	}
	template <typename T = bool> T get_is_team() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6328))(this);
	}
	template <typename T = void> T set_is_team(bool value) {
		return ((T (*)(PlayerAccountInfo*, bool))(Il2CppBase() + 0x4EA6330))(this, value);
	}
	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6338))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(PlayerAccountInfo*, uint64_t))(Il2CppBase() + 0x4EA6340))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6350))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA6358))(this, value);
	}
	template <typename T = bool> T get_half_way_join() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6360))(this);
	}
	template <typename T = void> T set_half_way_join(bool value) {
		return ((T (*)(PlayerAccountInfo*, bool))(Il2CppBase() + 0x4EA6368))(this, value);
	}
	template <typename T = int32_t> T get_clan_level() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6370))(this);
	}
	template <typename T = void> T set_clan_level(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6378))(this, value);
	}
	template <typename T = uint32_t> T get_fatigue_value() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6380))(this);
	}
	template <typename T = void> T set_fatigue_value(uint32_t value) {
		return ((T (*)(PlayerAccountInfo*, uint32_t))(Il2CppBase() + 0x4EA6388))(this, value);
	}
	template <typename T = int32_t> T get_mission_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6390))(this);
	}
	template <typename T = void> T set_mission_id(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6398))(this, value);
	}
	template <typename T = bool> T get_is_newbie() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63A0))(this);
	}
	template <typename T = void> T set_is_newbie(bool value) {
		return ((T (*)(PlayerAccountInfo*, bool))(Il2CppBase() + 0x4EA63A8))(this, value);
	}
	template <typename T = bool> T get_is_gangup() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63B0))(this);
	}
	template <typename T = void> T set_is_gangup(bool value) {
		return ((T (*)(PlayerAccountInfo*, bool))(Il2CppBase() + 0x4EA63B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_core_user_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63C0))(this);
	}
	template <typename T = void> T set_king_core_user_id(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA63C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_install_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63D0))(this);
	}
	template <typename T = void> T set_king_install_id(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA63D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_king_session_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63E0))(this);
	}
	template <typename T = void> T set_king_session_id(Il2CppString* value) {
		return ((T (*)(PlayerAccountInfo*, Il2CppString*))(Il2CppBase() + 0x4EA63E8))(this, value);
	}
	template <typename T = uint32_t> T get_match_type() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA63F0))(this);
	}
	template <typename T = void> T set_match_type(uint32_t value) {
		return ((T (*)(PlayerAccountInfo*, uint32_t))(Il2CppBase() + 0x4EA63F8))(this, value);
	}
	template <typename T = int32_t> T get_ex_vip_flag() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6400))(this);
	}
	template <typename T = void> T set_ex_vip_flag(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6408))(this, value);
	}
	template <typename T = uint32_t> T get_login_time() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6410))(this);
	}
	template <typename T = void> T set_login_time(uint32_t value) {
		return ((T (*)(PlayerAccountInfo*, uint32_t))(Il2CppBase() + 0x4EA6418))(this, value);
	}
	template <typename T = int32_t> T get_country_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6420))(this);
	}
	template <typename T = void> T set_country_id(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6428))(this, value);
	}
	template <typename T = int32_t> T get_login_country_id() {
		return ((T (*)(PlayerAccountInfo*))(Il2CppBase() + 0x4EA6430))(this);
	}
	template <typename T = void> T set_login_country_id(int32_t value) {
		return ((T (*)(PlayerAccountInfo*, int32_t))(Il2CppBase() + 0x4EA6438))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerAccountInfo*, bool))(Il2CppBase() + 0x4EA6440))(this, createIfMissing);
	}

};

}
