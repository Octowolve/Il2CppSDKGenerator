#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerGameStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerGameStat"));
	}

	template <typename T = uint32_t> T& _spvp_times_game() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _apvp_times_game() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _game_limit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _spvp_ladder_times_game() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_spvp_times_game() {
		return ((T (*)(PlayerGameStat*))(Il2CppBase() + 0x4EA6D28))(this);
	}
	template <typename T = void> T set_spvp_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStat*, uint32_t))(Il2CppBase() + 0x4EA6D30))(this, value);
	}
	template <typename T = uint32_t> T get_apvp_times_game() {
		return ((T (*)(PlayerGameStat*))(Il2CppBase() + 0x4EA6D38))(this);
	}
	template <typename T = void> T set_apvp_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStat*, uint32_t))(Il2CppBase() + 0x4EA6D40))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_limit() {
		return ((T (*)(PlayerGameStat*))(Il2CppBase() + 0x4EA6D48))(this);
	}
	template <typename T = uint32_t> T get_spvp_ladder_times_game() {
		return ((T (*)(PlayerGameStat*))(Il2CppBase() + 0x4EA6D50))(this);
	}
	template <typename T = void> T set_spvp_ladder_times_game(uint32_t value) {
		return ((T (*)(PlayerGameStat*, uint32_t))(Il2CppBase() + 0x4EA6D58))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerGameStat*, bool))(Il2CppBase() + 0x4EA6D60))(this, createIfMissing);
	}

};

}
