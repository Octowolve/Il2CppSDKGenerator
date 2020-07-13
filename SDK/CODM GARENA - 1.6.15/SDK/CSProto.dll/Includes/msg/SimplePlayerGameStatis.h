#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SimplePlayerGameStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SimplePlayerGameStatis"));
	}

	template <typename T = uint64_t> T& _user_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _ds_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _times_assist() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _times_be_killed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _kill_last_timems() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _times_headshot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _times_shot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _times_hit_target() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& _is_mvp() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _is_fail_mvp() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = int32_t> T& _cur_level() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50732C8))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint64_t))(Il2CppBase() + 0x50732D0))(this, value);
	}
	template <typename T = uint64_t> T get_ds_player_id() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50732E0))(this);
	}
	template <typename T = void> T set_ds_player_id(uint64_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint64_t))(Il2CppBase() + 0x50732E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50732F8))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SimplePlayerGameStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5073300))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073308))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint64_t))(Il2CppBase() + 0x5073310))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073320))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uintptr_t))(Il2CppBase() + 0x5073328))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073330))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073338))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073340))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073348))(this, value);
	}
	template <typename T = int32_t> T get_times_assist() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073350))(this);
	}
	template <typename T = void> T set_times_assist(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073358))(this, value);
	}
	template <typename T = int32_t> T get_times_kill() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073360))(this);
	}
	template <typename T = void> T set_times_kill(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073368))(this, value);
	}
	template <typename T = int32_t> T get_times_be_killed() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073370))(this);
	}
	template <typename T = void> T set_times_be_killed(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073378))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_score() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073380))(this);
	}
	template <typename T = void> T set_br_ladder_score(uint32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint32_t))(Il2CppBase() + 0x5073388))(this, value);
	}
	template <typename T = uint32_t> T get_br_ladder_level() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073390))(this);
	}
	template <typename T = void> T set_br_ladder_level(uint32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint32_t))(Il2CppBase() + 0x5073398))(this, value);
	}
	template <typename T = uint32_t> T get_kill_last_timems() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733A0))(this);
	}
	template <typename T = void> T set_kill_last_timems(uint32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, uint32_t))(Il2CppBase() + 0x50733A8))(this, value);
	}
	template <typename T = int32_t> T get_times_headshot() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733B0))(this);
	}
	template <typename T = void> T set_times_headshot(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x50733B8))(this, value);
	}
	template <typename T = int32_t> T get_times_shot() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733C0))(this);
	}
	template <typename T = void> T set_times_shot(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x50733C8))(this, value);
	}
	template <typename T = int32_t> T get_times_hit_target() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733D0))(this);
	}
	template <typename T = void> T set_times_hit_target(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x50733D8))(this, value);
	}
	template <typename T = bool> T get_is_mvp() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733E0))(this);
	}
	template <typename T = void> T set_is_mvp(bool value) {
		return ((T (*)(SimplePlayerGameStatis*, bool))(Il2CppBase() + 0x50733E8))(this, value);
	}
	template <typename T = bool> T get_is_fail_mvp() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x50733F0))(this);
	}
	template <typename T = void> T set_is_fail_mvp(bool value) {
		return ((T (*)(SimplePlayerGameStatis*, bool))(Il2CppBase() + 0x50733F8))(this, value);
	}
	template <typename T = int32_t> T get_cur_level() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073400))(this);
	}
	template <typename T = void> T set_cur_level(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073408))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(SimplePlayerGameStatis*))(Il2CppBase() + 0x5073410))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(SimplePlayerGameStatis*, int32_t))(Il2CppBase() + 0x5073418))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SimplePlayerGameStatis*, bool))(Il2CppBase() + 0x5073420))(this, createIfMissing);
	}

};

}
