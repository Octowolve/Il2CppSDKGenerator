#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SquadBattleResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SquadBattleResult"));
	}

	template <typename T = uint32_t> T& _battle_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _battle_result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _own_trophy_changes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _opponent_trophy_changes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _own_score() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _opponent_score() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _own_player_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _own_pic_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _own_game_nick() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _own_squad_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& _opponent_player_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _opponent_pic_info() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _opponent_game_nick() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _opponent_squad_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _own_total_trophy_count() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _opponent_total_trophy_count() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _game_running_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_game_statis() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _end_reason() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uint32_t> T get_battle_id() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8DC0))(this);
	}
	template <typename T = void> T set_battle_id(uint32_t value) {
		return ((T (*)(SquadBattleResult*, uint32_t))(Il2CppBase() + 0x51A8DC8))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8DD0))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(SquadBattleResult*, uint32_t))(Il2CppBase() + 0x51A8DD8))(this, value);
	}
	template <typename T = int32_t> T get_battle_result() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8DE0))(this);
	}
	template <typename T = void> T set_battle_result(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8DE8))(this, value);
	}
	template <typename T = int32_t> T get_own_trophy_changes() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8DF0))(this);
	}
	template <typename T = void> T set_own_trophy_changes(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8DF8))(this, value);
	}
	template <typename T = int32_t> T get_opponent_trophy_changes() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E00))(this);
	}
	template <typename T = void> T set_opponent_trophy_changes(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8E08))(this, value);
	}
	template <typename T = int32_t> T get_own_score() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E10))(this);
	}
	template <typename T = void> T set_own_score(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8E18))(this, value);
	}
	template <typename T = int32_t> T get_opponent_score() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E20))(this);
	}
	template <typename T = void> T set_opponent_score(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8E28))(this, value);
	}
	template <typename T = uint64_t> T get_own_player_id() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E30))(this);
	}
	template <typename T = void> T set_own_player_id(uint64_t value) {
		return ((T (*)(SquadBattleResult*, uint64_t))(Il2CppBase() + 0x51A8E38))(this, value);
	}
	template <typename T = uintptr_t> T get_own_pic_info() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E48))(this);
	}
	template <typename T = void> T set_own_pic_info(uintptr_t value) {
		return ((T (*)(SquadBattleResult*, uintptr_t))(Il2CppBase() + 0x51A8E50))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_own_game_nick() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E58))(this);
	}
	template <typename T = void> T set_own_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SquadBattleResult*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8E60))(this, value);
	}
	template <typename T = uintptr_t> T get_own_squad_info() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E68))(this);
	}
	template <typename T = void> T set_own_squad_info(uintptr_t value) {
		return ((T (*)(SquadBattleResult*, uintptr_t))(Il2CppBase() + 0x51A8E70))(this, value);
	}
	template <typename T = uint64_t> T get_opponent_player_id() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E78))(this);
	}
	template <typename T = void> T set_opponent_player_id(uint64_t value) {
		return ((T (*)(SquadBattleResult*, uint64_t))(Il2CppBase() + 0x51A8E80))(this, value);
	}
	template <typename T = uintptr_t> T get_opponent_pic_info() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8E90))(this);
	}
	template <typename T = void> T set_opponent_pic_info(uintptr_t value) {
		return ((T (*)(SquadBattleResult*, uintptr_t))(Il2CppBase() + 0x51A8E98))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_opponent_game_nick() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EA0))(this);
	}
	template <typename T = void> T set_opponent_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SquadBattleResult*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8EA8))(this, value);
	}
	template <typename T = uintptr_t> T get_opponent_squad_info() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EB0))(this);
	}
	template <typename T = void> T set_opponent_squad_info(uintptr_t value) {
		return ((T (*)(SquadBattleResult*, uintptr_t))(Il2CppBase() + 0x51A8EB8))(this, value);
	}
	template <typename T = int32_t> T get_own_total_trophy_count() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EC0))(this);
	}
	template <typename T = void> T set_own_total_trophy_count(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8EC8))(this, value);
	}
	template <typename T = int32_t> T get_opponent_total_trophy_count() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8ED0))(this);
	}
	template <typename T = void> T set_opponent_total_trophy_count(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8ED8))(this, value);
	}
	template <typename T = int32_t> T get_game_running_time() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EE0))(this);
	}
	template <typename T = void> T set_game_running_time(int32_t value) {
		return ((T (*)(SquadBattleResult*, int32_t))(Il2CppBase() + 0x51A8EE8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_game_statis() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EF0))(this);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8EF8))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(SquadBattleResult*, uint32_t))(Il2CppBase() + 0x51A8F00))(this, value);
	}
	template <typename T = uintptr_t> T get_end_reason() {
		return ((T (*)(SquadBattleResult*))(Il2CppBase() + 0x51A8F08))(this);
	}
	template <typename T = void> T set_end_reason(uintptr_t value) {
		return ((T (*)(SquadBattleResult*, uintptr_t))(Il2CppBase() + 0x51A8F10))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SquadBattleResult*, bool))(Il2CppBase() + 0x51A8F18))(this, createIfMissing);
	}

};

}
