#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBGameMapStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBGameMapStat"));
	}

	template <typename T = uint64_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _times_win() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_map_id() {
		return ((T (*)(DBGameMapStat*))(Il2CppBase() + 0x51B7F44))(this);
	}
	template <typename T = void> T set_map_id(uint64_t value) {
		return ((T (*)(DBGameMapStat*, uint64_t))(Il2CppBase() + 0x51B7F4C))(this, value);
	}
	template <typename T = uint32_t> T get_times_win() {
		return ((T (*)(DBGameMapStat*))(Il2CppBase() + 0x51B7F5C))(this);
	}
	template <typename T = void> T set_times_win(uint32_t value) {
		return ((T (*)(DBGameMapStat*, uint32_t))(Il2CppBase() + 0x51B7F64))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(DBGameMapStat*))(Il2CppBase() + 0x51B7F6C))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(DBGameMapStat*, uint32_t))(Il2CppBase() + 0x51B7F74))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(DBGameMapStat*))(Il2CppBase() + 0x51B7F7C))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(DBGameMapStat*, uint32_t))(Il2CppBase() + 0x51B7F84))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBGameMapStat*, bool))(Il2CppBase() + 0x51B7F8C))(this, createIfMissing);
	}

};

}
