#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomTeamInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomTeamInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
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
	template <typename T = Il2CppList<uintptr_t>*> T& _players() {
		return *(T*)((uintptr_t)this + 0x2C);
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

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF458))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, int32_t))(Il2CppBase() + 0x50CF460))(this, value);
	}
	template <typename T = uint32_t> T get_gsp_room_busid() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF468))(this);
	}
	template <typename T = void> T set_gsp_room_busid(uint32_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint32_t))(Il2CppBase() + 0x50CF470))(this, value);
	}
	template <typename T = uint64_t> T get_data_end_time() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF478))(this);
	}
	template <typename T = void> T set_data_end_time(uint64_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint64_t))(Il2CppBase() + 0x50CF480))(this, value);
	}
	template <typename T = uint64_t> T get_room_end_time() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF490))(this);
	}
	template <typename T = void> T set_room_end_time(uint64_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint64_t))(Il2CppBase() + 0x50CF498))(this, value);
	}
	template <typename T = uint64_t> T get_room_owner() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF4A8))(this);
	}
	template <typename T = void> T set_room_owner(uint64_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint64_t))(Il2CppBase() + 0x50CF4B0))(this, value);
	}
	template <typename T = uint32_t> T get_room_max_num() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF4C0))(this);
	}
	template <typename T = void> T set_room_max_num(uint32_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint32_t))(Il2CppBase() + 0x50CF4C8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_players() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF4D0))(this);
	}
	template <typename T = uint64_t> T get_last_create_room_time() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF4D8))(this);
	}
	template <typename T = void> T set_last_create_room_time(uint64_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint64_t))(Il2CppBase() + 0x50CF4E0))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(GspRoomTeamInfoRes*))(Il2CppBase() + 0x50CF4F0))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(GspRoomTeamInfoRes*, uint64_t))(Il2CppBase() + 0x50CF4F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomTeamInfoRes*, bool))(Il2CppBase() + 0x50CF508))(this, createIfMissing);
	}

};

}
