#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChatMessageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChatMessageInfo"));
	}

	template <typename T = uintptr_t> T& _sender() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _recv_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _message_seq() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _link_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _message_sender_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _recever() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _mapid() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _gamemode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _roomtype() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _recruit_count() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _room_full_count() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pay_name() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _jon_clan_player_name() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _world_chat_camp_count() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _world_chat_min_level() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _world_chat_min_mmr() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _sender_selected_pic_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _sender_selected_frame_id() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sender_selected_url() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _PlayerListId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<int32_t>*> T& _MapIdArray() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _br_playerlist_id() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_selected_playlist_id() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _br_match_type() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& _ticket_flag() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& _ticket_type() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& _is_microphone_required() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _language() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& _is_mp_feature_only() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _is_br_feature_only() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = uintptr_t> T get_sender() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E568))(this);
	}
	template <typename T = void> T set_sender(uintptr_t value) {
		return ((T (*)(ChatMessageInfo*, uintptr_t))(Il2CppBase() + 0x516E570))(this, value);
	}
	template <typename T = uint64_t> T get_recv_player_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E578))(this);
	}
	template <typename T = void> T set_recv_player_id(uint64_t value) {
		return ((T (*)(ChatMessageInfo*, uint64_t))(Il2CppBase() + 0x516E580))(this, value);
	}
	template <typename T = int32_t> T get_message_type() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E590))(this);
	}
	template <typename T = void> T set_message_type(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E598))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message_data() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5A0))(this);
	}
	template <typename T = void> T set_message_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ChatMessageInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E5A8))(this, value);
	}
	template <typename T = uint32_t> T get_message_seq() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5B0))(this);
	}
	template <typename T = void> T set_message_seq(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E5B8))(this, value);
	}
	template <typename T = uint32_t> T get_time() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5C0))(this);
	}
	template <typename T = void> T set_time(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E5C8))(this, value);
	}
	template <typename T = int32_t> T get_link_type() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5D0))(this);
	}
	template <typename T = void> T set_link_type(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E5D8))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5E0))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E5E8))(this, value);
	}
	template <typename T = int32_t> T get_message_sender_type() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E5F0))(this);
	}
	template <typename T = void> T set_message_sender_type(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E5F8))(this, value);
	}
	template <typename T = uintptr_t> T get_recever() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E600))(this);
	}
	template <typename T = void> T set_recever(uintptr_t value) {
		return ((T (*)(ChatMessageInfo*, uintptr_t))(Il2CppBase() + 0x516E608))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E610))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E618))(this, value);
	}
	template <typename T = uint32_t> T get_mapid() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E620))(this);
	}
	template <typename T = void> T set_mapid(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E628))(this, value);
	}
	template <typename T = uint32_t> T get_gamemode() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E630))(this);
	}
	template <typename T = void> T set_gamemode(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E638))(this, value);
	}
	template <typename T = uint32_t> T get_roomtype() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E640))(this);
	}
	template <typename T = void> T set_roomtype(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E648))(this, value);
	}
	template <typename T = uint32_t> T get_recruit_count() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E650))(this);
	}
	template <typename T = void> T set_recruit_count(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E658))(this, value);
	}
	template <typename T = uint32_t> T get_room_full_count() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E660))(this);
	}
	template <typename T = void> T set_room_full_count(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E668))(this, value);
	}
	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E670))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E678))(this, value);
	}
	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E680))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E688))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pay_name() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E690))(this);
	}
	template <typename T = void> T set_pay_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ChatMessageInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E698))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_jon_clan_player_name() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6A0))(this);
	}
	template <typename T = void> T set_jon_clan_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ChatMessageInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E6A8))(this, value);
	}
	template <typename T = uint32_t> T get_world_chat_camp_count() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6B0))(this);
	}
	template <typename T = void> T set_world_chat_camp_count(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E6B8))(this, value);
	}
	template <typename T = uint32_t> T get_world_chat_min_level() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6C0))(this);
	}
	template <typename T = void> T set_world_chat_min_level(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E6C8))(this, value);
	}
	template <typename T = uint32_t> T get_world_chat_min_mmr() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6D0))(this);
	}
	template <typename T = void> T set_world_chat_min_mmr(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E6D8))(this, value);
	}
	template <typename T = uint32_t> T get_sender_selected_pic_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6E0))(this);
	}
	template <typename T = void> T set_sender_selected_pic_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E6E8))(this, value);
	}
	template <typename T = uint32_t> T get_sender_selected_frame_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E6F0))(this);
	}
	template <typename T = void> T set_sender_selected_frame_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E6F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sender_selected_url() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E700))(this);
	}
	template <typename T = void> T set_sender_selected_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ChatMessageInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E708))(this, value);
	}
	template <typename T = int32_t> T get_PlayerListId() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E710))(this);
	}
	template <typename T = void> T set_PlayerListId(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E718))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_MapIdArray() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E720))(this);
	}
	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E728))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(ChatMessageInfo*, uint64_t))(Il2CppBase() + 0x516E730))(this, value);
	}
	template <typename T = int32_t> T get_br_playerlist_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E740))(this);
	}
	template <typename T = void> T set_br_playerlist_id(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E748))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_selected_playlist_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E750))(this);
	}
	template <typename T = int32_t> T get_br_match_type() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E758))(this);
	}
	template <typename T = void> T set_br_match_type(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E760))(this, value);
	}
	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E768))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E770))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_flag() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E778))(this);
	}
	template <typename T = void> T set_ticket_flag(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E780))(this, value);
	}
	template <typename T = uint32_t> T get_ticket_type() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E788))(this);
	}
	template <typename T = void> T set_ticket_type(uint32_t value) {
		return ((T (*)(ChatMessageInfo*, uint32_t))(Il2CppBase() + 0x516E790))(this, value);
	}
	template <typename T = bool> T get_is_microphone_required() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E798))(this);
	}
	template <typename T = void> T set_is_microphone_required(bool value) {
		return ((T (*)(ChatMessageInfo*, bool))(Il2CppBase() + 0x516E7A0))(this, value);
	}
	template <typename T = int32_t> T get_language() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E7A8))(this);
	}
	template <typename T = void> T set_language(int32_t value) {
		return ((T (*)(ChatMessageInfo*, int32_t))(Il2CppBase() + 0x516E7B0))(this, value);
	}
	template <typename T = bool> T get_is_mp_feature_only() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E7B8))(this);
	}
	template <typename T = void> T set_is_mp_feature_only(bool value) {
		return ((T (*)(ChatMessageInfo*, bool))(Il2CppBase() + 0x516E7C0))(this, value);
	}
	template <typename T = bool> T get_is_br_feature_only() {
		return ((T (*)(ChatMessageInfo*))(Il2CppBase() + 0x516E7C8))(this);
	}
	template <typename T = void> T set_is_br_feature_only(bool value) {
		return ((T (*)(ChatMessageInfo*, bool))(Il2CppBase() + 0x516E7D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChatMessageInfo*, bool))(Il2CppBase() + 0x516E7D8))(this, createIfMissing);
	}

};

}
