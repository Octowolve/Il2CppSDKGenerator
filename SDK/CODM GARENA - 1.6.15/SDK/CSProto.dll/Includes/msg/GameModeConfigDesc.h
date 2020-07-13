#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameModeConfigDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameModeConfigDesc"));
	}

	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _spvp_open() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ladder_open() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _room_open() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(GameModeConfigDesc*))(Il2CppBase() + 0x50CCC08))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(GameModeConfigDesc*, uint32_t))(Il2CppBase() + 0x50CCC10))(this, value);
	}
	template <typename T = int32_t> T get_spvp_open() {
		return ((T (*)(GameModeConfigDesc*))(Il2CppBase() + 0x50CCC18))(this);
	}
	template <typename T = void> T set_spvp_open(int32_t value) {
		return ((T (*)(GameModeConfigDesc*, int32_t))(Il2CppBase() + 0x50CCC20))(this, value);
	}
	template <typename T = int32_t> T get_ladder_open() {
		return ((T (*)(GameModeConfigDesc*))(Il2CppBase() + 0x50CCC28))(this);
	}
	template <typename T = void> T set_ladder_open(int32_t value) {
		return ((T (*)(GameModeConfigDesc*, int32_t))(Il2CppBase() + 0x50CCC30))(this, value);
	}
	template <typename T = int32_t> T get_room_open() {
		return ((T (*)(GameModeConfigDesc*))(Il2CppBase() + 0x50CCC38))(this);
	}
	template <typename T = void> T set_room_open(int32_t value) {
		return ((T (*)(GameModeConfigDesc*, int32_t))(Il2CppBase() + 0x50CCC40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameModeConfigDesc*, bool))(Il2CppBase() + 0x50CCC48))(this, createIfMissing);
	}

};

}
