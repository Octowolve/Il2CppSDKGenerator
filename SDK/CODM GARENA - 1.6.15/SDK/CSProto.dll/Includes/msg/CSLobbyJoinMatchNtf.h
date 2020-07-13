#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbyJoinMatchNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbyJoinMatchNtf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ds_ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ds_port() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _dsa_bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513AD80))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, int32_t))(Il2CppBase() + 0x513AD88))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513AD90))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x513AD98))(this, value);
	}
	template <typename T = uint32_t> T get_ds_ip() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADA0))(this);
	}
	template <typename T = void> T set_ds_ip(uint32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x513ADA8))(this, value);
	}
	template <typename T = uint32_t> T get_ds_port() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADB0))(this);
	}
	template <typename T = void> T set_ds_port(uint32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x513ADB8))(this, value);
	}
	template <typename T = int32_t> T get_dsa_bus_id() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADC0))(this);
	}
	template <typename T = void> T set_dsa_bus_id(int32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, int32_t))(Il2CppBase() + 0x513ADC8))(this, value);
	}
	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADD0))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, uintptr_t))(Il2CppBase() + 0x513ADD8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADE0))(this);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSLobbyJoinMatchNtf*))(Il2CppBase() + 0x513ADE8))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSLobbyJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x513ADF0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbyJoinMatchNtf*, bool))(Il2CppBase() + 0x513ADF8))(this, createIfMissing);
	}

};

}
