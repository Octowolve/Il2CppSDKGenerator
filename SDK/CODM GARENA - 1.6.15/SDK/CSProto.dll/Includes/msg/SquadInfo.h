#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SquadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SquadInfo"));
	}

	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _create_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ovr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _is_selected() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _loadouts() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _score_streaks() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _use_default() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _squad_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _squad_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _default_loadout() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _max_ce_point() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9020))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(SquadInfo*, Il2CppString*))(Il2CppBase() + 0x51A9028))(this, value);
	}
	template <typename T = int32_t> T get_create_time() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9030))(this);
	}
	template <typename T = void> T set_create_time(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A9038))(this, value);
	}
	template <typename T = int32_t> T get_ovr() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9040))(this);
	}
	template <typename T = void> T set_ovr(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A9048))(this, value);
	}
	template <typename T = int32_t> T get_is_selected() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9050))(this);
	}
	template <typename T = void> T set_is_selected(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A9058))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9060))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(SquadInfo*, uint32_t))(Il2CppBase() + 0x51A9068))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_loadouts() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9070))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_score_streaks() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9078))(this);
	}
	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9080))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A9088))(this, value);
	}
	template <typename T = int32_t> T get_use_default() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A9090))(this);
	}
	template <typename T = void> T set_use_default(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A9098))(this, value);
	}
	template <typename T = uint32_t> T get_squad_level() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A90A0))(this);
	}
	template <typename T = void> T set_squad_level(uint32_t value) {
		return ((T (*)(SquadInfo*, uint32_t))(Il2CppBase() + 0x51A90A8))(this, value);
	}
	template <typename T = uintptr_t> T get_squad_type() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A90B0))(this);
	}
	template <typename T = void> T set_squad_type(uintptr_t value) {
		return ((T (*)(SquadInfo*, uintptr_t))(Il2CppBase() + 0x51A90B8))(this, value);
	}
	template <typename T = int32_t> T get_default_loadout() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A90C0))(this);
	}
	template <typename T = void> T set_default_loadout(int32_t value) {
		return ((T (*)(SquadInfo*, int32_t))(Il2CppBase() + 0x51A90C8))(this, value);
	}
	template <typename T = uint32_t> T get_max_ce_point() {
		return ((T (*)(SquadInfo*))(Il2CppBase() + 0x51A90D0))(this);
	}
	template <typename T = void> T set_max_ce_point(uint32_t value) {
		return ((T (*)(SquadInfo*, uint32_t))(Il2CppBase() + 0x51A90D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SquadInfo*, bool))(Il2CppBase() + 0x51A90E0))(this, createIfMissing);
	}

};

}
