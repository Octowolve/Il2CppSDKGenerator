#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RoundPlayerGameStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RoundPlayerGameStatis"));
	}

	template <typename T = int32_t> T& _round_index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_game_statis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_round_index() {
		return ((T (*)(RoundPlayerGameStatis*))(Il2CppBase() + 0x5071EE0))(this);
	}
	template <typename T = void> T set_round_index(int32_t value) {
		return ((T (*)(RoundPlayerGameStatis*, int32_t))(Il2CppBase() + 0x5071EE8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_game_statis() {
		return ((T (*)(RoundPlayerGameStatis*))(Il2CppBase() + 0x5071EF0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RoundPlayerGameStatis*, bool))(Il2CppBase() + 0x5071EF8))(this, createIfMissing);
	}

};

}
