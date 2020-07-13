#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomPlayerQuitNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomPlayerQuitNtf"));
	}

	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_kick() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*))(Il2CppBase() + 0x51DEEB0))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*, uintptr_t))(Il2CppBase() + 0x51DEEB8))(this, value);
	}
	template <typename T = bool> T get_is_kick() {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*))(Il2CppBase() + 0x51DEEC0))(this);
	}
	template <typename T = void> T set_is_kick(bool value) {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*, bool))(Il2CppBase() + 0x51DEEC8))(this, value);
	}
	template <typename T = uintptr_t> T get_room_info() {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*))(Il2CppBase() + 0x51DEED0))(this);
	}
	template <typename T = void> T set_room_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*, uintptr_t))(Il2CppBase() + 0x51DEED8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomPlayerQuitNtf*, bool))(Il2CppBase() + 0x51DEEE0))(this, createIfMissing);
	}

};

}
