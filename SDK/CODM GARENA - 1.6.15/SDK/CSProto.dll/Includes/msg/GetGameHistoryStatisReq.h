#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GetGameHistoryStatisReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GetGameHistoryStatisReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _start_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GetGameHistoryStatisReq*))(Il2CppBase() + 0x50CD6A4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GetGameHistoryStatisReq*, uint64_t))(Il2CppBase() + 0x50CD6AC))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(GetGameHistoryStatisReq*))(Il2CppBase() + 0x50CD6BC))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisReq*, uint32_t))(Il2CppBase() + 0x50CD6C4))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(GetGameHistoryStatisReq*))(Il2CppBase() + 0x50CD6CC))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisReq*, uint32_t))(Il2CppBase() + 0x50CD6D4))(this, value);
	}
	template <typename T = uint32_t> T get_start_index() {
		return ((T (*)(GetGameHistoryStatisReq*))(Il2CppBase() + 0x50CD6DC))(this);
	}
	template <typename T = void> T set_start_index(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisReq*, uint32_t))(Il2CppBase() + 0x50CD6E4))(this, value);
	}
	template <typename T = uint32_t> T get_count() {
		return ((T (*)(GetGameHistoryStatisReq*))(Il2CppBase() + 0x50CD6EC))(this);
	}
	template <typename T = void> T set_count(uint32_t value) {
		return ((T (*)(GetGameHistoryStatisReq*, uint32_t))(Il2CppBase() + 0x50CD6F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GetGameHistoryStatisReq*, bool))(Il2CppBase() + 0x50CD6FC))(this, createIfMissing);
	}

};

}
