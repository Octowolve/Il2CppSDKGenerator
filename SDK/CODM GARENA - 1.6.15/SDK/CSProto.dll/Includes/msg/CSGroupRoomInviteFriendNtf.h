#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomInviteFriendNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomInviteFriendNtf"));
	}

	template <typename T = uint64_t> T& _src_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _room_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _friend_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _spvp_ladder_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _peak_lvl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _player_num() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _team_max_player_num() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _spvp_playlist_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _invite_source() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _pp_mode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _br_playlist_id() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uint64_t> T get_src_player_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE998))(this);
	}
	template <typename T = void> T set_src_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint64_t))(Il2CppBase() + 0x51DE9A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE9B0))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DE9B8))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE9C0))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uintptr_t))(Il2CppBase() + 0x51DE9C8))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE9D0))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DE9D8))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE9E0))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DE9E8))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DE9F0))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DE9F8))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA00))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA08))(this, value);
	}
	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA10))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA18))(this, value);
	}
	template <typename T = int32_t> T get_room_type() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA20))(this);
	}
	template <typename T = void> T set_room_type(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA28))(this, value);
	}
	template <typename T = int32_t> T get_friend_type() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA30))(this);
	}
	template <typename T = void> T set_friend_type(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA38))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_ladder_level() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA40))(this);
	}
	template <typename T = void> T set_spvp_ladder_level(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEA48))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA50))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEA58))(this, value);
	}
	template <typename T = int32_t> T get_peak_lvl() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA60))(this);
	}
	template <typename T = void> T set_peak_lvl(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA68))(this, value);
	}
	template <typename T = int32_t> T get_player_num() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA70))(this);
	}
	template <typename T = void> T set_player_num(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA78))(this, value);
	}
	template <typename T = int32_t> T get_team_max_player_num() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA80))(this);
	}
	template <typename T = void> T set_team_max_player_num(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEA88))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEA90))(this);
	}
	template <typename T = void> T set_spvp_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEA98))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAA0))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEAA8))(this, value);
	}
	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAB0))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint64_t))(Il2CppBase() + 0x51DEAB8))(this, value);
	}
	template <typename T = uint32_t> T get_team_type() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAC8))(this);
	}
	template <typename T = void> T set_team_type(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEAD0))(this, value);
	}
	template <typename T = uint32_t> T get_invite_source() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAD8))(this);
	}
	template <typename T = void> T set_invite_source(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEAE0))(this, value);
	}
	template <typename T = uint32_t> T get_pp_mode() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAE8))(this);
	}
	template <typename T = void> T set_pp_mode(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEAF0))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEAF8))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, int32_t))(Il2CppBase() + 0x51DEB00))(this, value);
	}
	template <typename T = uint32_t> T get_br_playlist_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEB08))(this);
	}
	template <typename T = void> T set_br_playlist_id(uint32_t value) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, uint32_t))(Il2CppBase() + 0x51DEB10))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(CSGroupRoomInviteFriendNtf*))(Il2CppBase() + 0x51DEB18))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomInviteFriendNtf*, bool))(Il2CppBase() + 0x51DEB20))(this, createIfMissing);
	}

};

}
