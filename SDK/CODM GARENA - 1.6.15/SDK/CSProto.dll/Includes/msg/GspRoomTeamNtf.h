#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomTeamNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomTeamNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _gsp_room_busid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _data_end_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _room_end_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _room_owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _room_max_num() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _last_create_room_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF5C8))(this);
	}
	template <typename T = uint32_t> T get_gsp_room_busid() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF5D0))(this);
	}
	template <typename T = void> T set_gsp_room_busid(uint32_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint32_t))(Il2CppBase() + 0x50CF5D8))(this, value);
	}
	template <typename T = uint64_t> T get_data_end_time() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF5E0))(this);
	}
	template <typename T = void> T set_data_end_time(uint64_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint64_t))(Il2CppBase() + 0x50CF5E8))(this, value);
	}
	template <typename T = uint64_t> T get_room_end_time() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF5F8))(this);
	}
	template <typename T = void> T set_room_end_time(uint64_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint64_t))(Il2CppBase() + 0x50CF600))(this, value);
	}
	template <typename T = uint64_t> T get_room_owner() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF610))(this);
	}
	template <typename T = void> T set_room_owner(uint64_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint64_t))(Il2CppBase() + 0x50CF618))(this, value);
	}
	template <typename T = uint32_t> T get_room_max_num() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF628))(this);
	}
	template <typename T = void> T set_room_max_num(uint32_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint32_t))(Il2CppBase() + 0x50CF630))(this, value);
	}
	template <typename T = uint64_t> T get_last_create_room_time() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF638))(this);
	}
	template <typename T = void> T set_last_create_room_time(uint64_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint64_t))(Il2CppBase() + 0x50CF640))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(GspRoomTeamNtf*))(Il2CppBase() + 0x50CF650))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(GspRoomTeamNtf*, uint64_t))(Il2CppBase() + 0x50CF658))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomTeamNtf*, bool))(Il2CppBase() + 0x50CF668))(this, createIfMissing);
	}

};

}
