#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBGamePlayerStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBGamePlayerStat"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _times_be_killed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _game_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _service_module() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _br_rank() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _team_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _is_newbie() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B7FA8))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(DBGamePlayerStat*, int32_t))(Il2CppBase() + 0x51B7FB0))(this, value);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B7FB8))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(DBGamePlayerStat*, int32_t))(Il2CppBase() + 0x51B7FC0))(this, value);
	}
	template <typename T = uint64_t> T get_map_id() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B7FC8))(this);
	}
	template <typename T = void> T set_map_id(uint64_t value) {
		return ((T (*)(DBGamePlayerStat*, uint64_t))(Il2CppBase() + 0x51B7FD0))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B7FE0))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(DBGamePlayerStat*, uint32_t))(Il2CppBase() + 0x51B7FE8))(this, value);
	}
	template <typename T = uint32_t> T get_times_be_killed() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B7FF0))(this);
	}
	template <typename T = void> T set_times_be_killed(uint32_t value) {
		return ((T (*)(DBGamePlayerStat*, uint32_t))(Il2CppBase() + 0x51B7FF8))(this, value);
	}
	template <typename T = uint32_t> T get_score() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8000))(this);
	}
	template <typename T = void> T set_score(uint32_t value) {
		return ((T (*)(DBGamePlayerStat*, uint32_t))(Il2CppBase() + 0x51B8008))(this, value);
	}
	template <typename T = uint32_t> T get_game_time() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8010))(this);
	}
	template <typename T = void> T set_game_time(uint32_t value) {
		return ((T (*)(DBGamePlayerStat*, uint32_t))(Il2CppBase() + 0x51B8018))(this, value);
	}
	template <typename T = int32_t> T get_service_module() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8020))(this);
	}
	template <typename T = void> T set_service_module(int32_t value) {
		return ((T (*)(DBGamePlayerStat*, int32_t))(Il2CppBase() + 0x51B8028))(this, value);
	}
	template <typename T = int32_t> T get_br_rank() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8030))(this);
	}
	template <typename T = void> T set_br_rank(int32_t value) {
		return ((T (*)(DBGamePlayerStat*, int32_t))(Il2CppBase() + 0x51B8038))(this, value);
	}
	template <typename T = int32_t> T get_team_type() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8040))(this);
	}
	template <typename T = void> T set_team_type(int32_t value) {
		return ((T (*)(DBGamePlayerStat*, int32_t))(Il2CppBase() + 0x51B8048))(this, value);
	}
	template <typename T = bool> T get_is_newbie() {
		return ((T (*)(DBGamePlayerStat*))(Il2CppBase() + 0x51B8050))(this);
	}
	template <typename T = void> T set_is_newbie(bool value) {
		return ((T (*)(DBGamePlayerStat*, bool))(Il2CppBase() + 0x51B8058))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBGamePlayerStat*, bool))(Il2CppBase() + 0x51B8060))(this, createIfMissing);
	}

};

}
