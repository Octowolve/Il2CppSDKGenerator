#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AlivePlayerStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AlivePlayerStatis"));
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
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _player_rank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _team_rank() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _player_team_rank() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _player_game_state() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _cur_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B614))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(AlivePlayerStatis*, uint64_t))(Il2CppBase() + 0x510B61C))(this, value);
	}
	template <typename T = uint64_t> T get_ds_player_id() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B62C))(this);
	}
	template <typename T = void> T set_ds_player_id(uint64_t value) {
		return ((T (*)(AlivePlayerStatis*, uint64_t))(Il2CppBase() + 0x510B634))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B644))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AlivePlayerStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B64C))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B654))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B65C))(this, value);
	}
	template <typename T = uint32_t> T get_player_rank() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B664))(this);
	}
	template <typename T = void> T set_player_rank(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B66C))(this, value);
	}
	template <typename T = uint32_t> T get_team_rank() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B674))(this);
	}
	template <typename T = void> T set_team_rank(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B67C))(this, value);
	}
	template <typename T = uint32_t> T get_player_team_rank() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B684))(this);
	}
	template <typename T = void> T set_player_team_rank(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B68C))(this, value);
	}
	template <typename T = uint32_t> T get_player_game_state() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B694))(this);
	}
	template <typename T = void> T set_player_game_state(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B69C))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B6A4))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(AlivePlayerStatis*, uint32_t))(Il2CppBase() + 0x510B6AC))(this, value);
	}
	template <typename T = int32_t> T get_cur_level() {
		return ((T (*)(AlivePlayerStatis*))(Il2CppBase() + 0x510B6B4))(this);
	}
	template <typename T = void> T set_cur_level(int32_t value) {
		return ((T (*)(AlivePlayerStatis*, int32_t))(Il2CppBase() + 0x510B6BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AlivePlayerStatis*, bool))(Il2CppBase() + 0x510B6C4))(this, createIfMissing);
	}

};

}
