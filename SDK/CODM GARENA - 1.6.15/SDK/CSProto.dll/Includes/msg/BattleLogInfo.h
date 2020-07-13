#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattleLogInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattleLogInfo"));
	}

	template <typename T = int32_t> T& _read_flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _battle_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _last_round_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& _battle_results() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> T& _own_trophy_changes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& _opponent_trophy_changes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& _own_scores() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> T& _opponent_scores() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _own_player_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _own_pic_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _own_game_nick() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _own_squad_info() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& _opponent_player_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _opponent_pic_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _opponent_game_nick() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _opponent_squad_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _own_total_trophy_count() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _own_trophy_rank() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _opponent_total_trophy_count() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _opponent_trophy_rank() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<int32_t>*> T& _game_running_time() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _round_player_game_statis() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _end_reason() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _revenge_flag() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_read_flag() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CD6C))(this);
	}
	template <typename T = void> T set_read_flag(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CD74))(this, value);
	}
	template <typename T = uint32_t> T get_battle_id() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CD7C))(this);
	}
	template <typename T = void> T set_battle_id(uint32_t value) {
		return ((T (*)(BattleLogInfo*, uint32_t))(Il2CppBase() + 0x510CD84))(this, value);
	}
	template <typename T = uint32_t> T get_create_time() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CD8C))(this);
	}
	template <typename T = void> T set_create_time(uint32_t value) {
		return ((T (*)(BattleLogInfo*, uint32_t))(Il2CppBase() + 0x510CD94))(this, value);
	}
	template <typename T = uint32_t> T get_last_round_time() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CD9C))(this);
	}
	template <typename T = void> T set_last_round_time(uint32_t value) {
		return ((T (*)(BattleLogInfo*, uint32_t))(Il2CppBase() + 0x510CDA4))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDAC))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(BattleLogInfo*, uint32_t))(Il2CppBase() + 0x510CDB4))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_battle_results() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDBC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_own_trophy_changes() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDC4))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_opponent_trophy_changes() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDCC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_own_scores() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDD4))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_opponent_scores() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDDC))(this);
	}
	template <typename T = uint64_t> T get_own_player_id() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDE4))(this);
	}
	template <typename T = void> T set_own_player_id(uint64_t value) {
		return ((T (*)(BattleLogInfo*, uint64_t))(Il2CppBase() + 0x510CDEC))(this, value);
	}
	template <typename T = uintptr_t> T get_own_pic_info() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CDFC))(this);
	}
	template <typename T = void> T set_own_pic_info(uintptr_t value) {
		return ((T (*)(BattleLogInfo*, uintptr_t))(Il2CppBase() + 0x510CE04))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_own_game_nick() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE0C))(this);
	}
	template <typename T = void> T set_own_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BattleLogInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510CE14))(this, value);
	}
	template <typename T = uintptr_t> T get_own_squad_info() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE1C))(this);
	}
	template <typename T = void> T set_own_squad_info(uintptr_t value) {
		return ((T (*)(BattleLogInfo*, uintptr_t))(Il2CppBase() + 0x510CE24))(this, value);
	}
	template <typename T = uint64_t> T get_opponent_player_id() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE2C))(this);
	}
	template <typename T = void> T set_opponent_player_id(uint64_t value) {
		return ((T (*)(BattleLogInfo*, uint64_t))(Il2CppBase() + 0x510CE34))(this, value);
	}
	template <typename T = uintptr_t> T get_opponent_pic_info() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE44))(this);
	}
	template <typename T = void> T set_opponent_pic_info(uintptr_t value) {
		return ((T (*)(BattleLogInfo*, uintptr_t))(Il2CppBase() + 0x510CE4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_opponent_game_nick() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE54))(this);
	}
	template <typename T = void> T set_opponent_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BattleLogInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510CE5C))(this, value);
	}
	template <typename T = uintptr_t> T get_opponent_squad_info() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE64))(this);
	}
	template <typename T = void> T set_opponent_squad_info(uintptr_t value) {
		return ((T (*)(BattleLogInfo*, uintptr_t))(Il2CppBase() + 0x510CE6C))(this, value);
	}
	template <typename T = int32_t> T get_own_total_trophy_count() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE74))(this);
	}
	template <typename T = void> T set_own_total_trophy_count(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CE7C))(this, value);
	}
	template <typename T = int32_t> T get_own_trophy_rank() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE84))(this);
	}
	template <typename T = void> T set_own_trophy_rank(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CE8C))(this, value);
	}
	template <typename T = int32_t> T get_opponent_total_trophy_count() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CE94))(this);
	}
	template <typename T = void> T set_opponent_total_trophy_count(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CE9C))(this, value);
	}
	template <typename T = int32_t> T get_opponent_trophy_rank() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CEA4))(this);
	}
	template <typename T = void> T set_opponent_trophy_rank(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CEAC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_game_running_time() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CEB4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_round_player_game_statis() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CEBC))(this);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CEC4))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(BattleLogInfo*, uint32_t))(Il2CppBase() + 0x510CECC))(this, value);
	}
	template <typename T = uintptr_t> T get_end_reason() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CED4))(this);
	}
	template <typename T = void> T set_end_reason(uintptr_t value) {
		return ((T (*)(BattleLogInfo*, uintptr_t))(Il2CppBase() + 0x510CEDC))(this, value);
	}
	template <typename T = int32_t> T get_revenge_flag() {
		return ((T (*)(BattleLogInfo*))(Il2CppBase() + 0x510CEE4))(this);
	}
	template <typename T = void> T set_revenge_flag(int32_t value) {
		return ((T (*)(BattleLogInfo*, int32_t))(Il2CppBase() + 0x510CEEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattleLogInfo*, bool))(Il2CppBase() + 0x510CEF4))(this, createIfMissing);
	}

};

}
