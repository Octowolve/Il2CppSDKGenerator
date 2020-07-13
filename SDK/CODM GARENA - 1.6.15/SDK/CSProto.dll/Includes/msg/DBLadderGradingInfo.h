#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBLadderGradingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBLadderGradingInfo"));
	}

	template <typename T = uint32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _game_result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _is_reset_ladder_score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(DBLadderGradingInfo*))(Il2CppBase() + 0x51B8394))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(DBLadderGradingInfo*, uint32_t))(Il2CppBase() + 0x51B839C))(this, value);
	}
	template <typename T = uint32_t> T get_game_times() {
		return ((T (*)(DBLadderGradingInfo*))(Il2CppBase() + 0x51B83A4))(this);
	}
	template <typename T = void> T set_game_times(uint32_t value) {
		return ((T (*)(DBLadderGradingInfo*, uint32_t))(Il2CppBase() + 0x51B83AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_result() {
		return ((T (*)(DBLadderGradingInfo*))(Il2CppBase() + 0x51B83B4))(this);
	}
	template <typename T = uint32_t> T get_is_reset_ladder_score() {
		return ((T (*)(DBLadderGradingInfo*))(Il2CppBase() + 0x51B83BC))(this);
	}
	template <typename T = void> T set_is_reset_ladder_score(uint32_t value) {
		return ((T (*)(DBLadderGradingInfo*, uint32_t))(Il2CppBase() + 0x51B83C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBLadderGradingInfo*, bool))(Il2CppBase() + 0x51B83CC))(this, createIfMissing);
	}

};

}
