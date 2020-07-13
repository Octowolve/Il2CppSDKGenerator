#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GetGameHistoryStatisRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GetGameHistoryStatisRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _history_game_stat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _start_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _total_record() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _hide_gamerecord() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD7BC))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisRes*, uint32_t))(Il2CppBase() + 0x50CD7C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_history_game_stat() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD7CC))(this);
	}
	template <typename T = uint32_t> T get_start_index() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD7D4))(this);
	}
	template <typename T = void> T set_start_index(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisRes*, uint32_t))(Il2CppBase() + 0x50CD7DC))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD7E4))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisRes*, uint32_t))(Il2CppBase() + 0x50CD7EC))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD7F4))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisRes*, uint32_t))(Il2CppBase() + 0x50CD7FC))(this, value);
	}
	template <typename T = uint32_t> T get_total_record() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD804))(this);
	}
	template <typename T = void> T set_total_record(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisRes*, uint32_t))(Il2CppBase() + 0x50CD80C))(this, value);
	}
	template <typename T = bool> T get_hide_gamerecord() {
		return ((T (*)(GetGameHistoryStatisRes*))(Il2CppBase() + 0x50CD814))(this);
	}
	template <typename T = void> T set_hide_gamerecord(bool value) {
		return ((T (*)(GetGameHistoryStatisRes*, bool))(Il2CppBase() + 0x50CD81C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GetGameHistoryStatisRes*, bool))(Il2CppBase() + 0x50CD824))(this, createIfMissing);
	}

};

}
