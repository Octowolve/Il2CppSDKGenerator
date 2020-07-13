#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerMicReportInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerMicReportInfo"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _mic_is_open() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _player_game_nick() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(PlayerMicReportInfo*))(Il2CppBase() + 0x4EA8D20))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(PlayerMicReportInfo*, uint32_t))(Il2CppBase() + 0x4EA8D28))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(PlayerMicReportInfo*))(Il2CppBase() + 0x4EA8D30))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(PlayerMicReportInfo*, uint32_t))(Il2CppBase() + 0x4EA8D38))(this, value);
	}
	template <typename T = bool> T get_mic_is_open() {
		return ((T (*)(PlayerMicReportInfo*))(Il2CppBase() + 0x4EA8D40))(this);
	}
	template <typename T = void> T set_mic_is_open(bool value) {
		return ((T (*)(PlayerMicReportInfo*, bool))(Il2CppBase() + 0x4EA8D48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_player_game_nick() {
		return ((T (*)(PlayerMicReportInfo*))(Il2CppBase() + 0x4EA8D50))(this);
	}
	template <typename T = void> T set_player_game_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerMicReportInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA8D58))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerMicReportInfo*, bool))(Il2CppBase() + 0x4EA8D60))(this, createIfMissing);
	}

};

}
