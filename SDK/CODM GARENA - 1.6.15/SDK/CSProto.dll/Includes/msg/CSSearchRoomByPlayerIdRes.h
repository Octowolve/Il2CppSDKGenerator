#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSearchRoomByPlayerIdRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSearchRoomByPlayerIdRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _roomsvr_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSearchRoomByPlayerIdRes*))(Il2CppBase() + 0x51E11B4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSearchRoomByPlayerIdRes*, int32_t))(Il2CppBase() + 0x51E11BC))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSSearchRoomByPlayerIdRes*))(Il2CppBase() + 0x51E11C4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSSearchRoomByPlayerIdRes*, uint64_t))(Il2CppBase() + 0x51E11CC))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(CSSearchRoomByPlayerIdRes*))(Il2CppBase() + 0x51E11DC))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(CSSearchRoomByPlayerIdRes*, uint32_t))(Il2CppBase() + 0x51E11E4))(this, value);
	}
	template <typename T = int32_t> T get_roomsvr_id() {
		return ((T (*)(CSSearchRoomByPlayerIdRes*))(Il2CppBase() + 0x51E11EC))(this);
	}
	template <typename T = void> T set_roomsvr_id(int32_t value) {
		return ((T (*)(CSSearchRoomByPlayerIdRes*, int32_t))(Il2CppBase() + 0x51E11F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSearchRoomByPlayerIdRes*, bool))(Il2CppBase() + 0x51E11FC))(this, createIfMissing);
	}

};

}
