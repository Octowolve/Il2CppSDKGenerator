#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomPlayerEnterNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomPlayerEnterNtf"));
	}

	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _player_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*))(Il2CppBase() + 0x51DEE64))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*, uintptr_t))(Il2CppBase() + 0x51DEE6C))(this, value);
	}
	template <typename T = int32_t> T get_player_num() {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*))(Il2CppBase() + 0x51DEE74))(this);
	}
	template <typename T = void> T set_player_num(int32_t value) {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*, int32_t))(Il2CppBase() + 0x51DEE7C))(this, value);
	}
	template <typename T = uintptr_t> T get_room_info() {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*))(Il2CppBase() + 0x51DEE84))(this);
	}
	template <typename T = void> T set_room_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*, uintptr_t))(Il2CppBase() + 0x51DEE8C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomPlayerEnterNtf*, bool))(Il2CppBase() + 0x51DEE94))(this, createIfMissing);
	}

};

}
