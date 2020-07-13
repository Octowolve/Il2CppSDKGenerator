#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchJoinRoomNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchJoinRoomNtf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _new_player() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchJoinRoomNtf*))(Il2CppBase() + 0x51E0AFC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchJoinRoomNtf*, int32_t))(Il2CppBase() + 0x51E0B04))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSRoomMatchJoinRoomNtf*))(Il2CppBase() + 0x51E0B0C))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinRoomNtf*, uint32_t))(Il2CppBase() + 0x51E0B14))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSRoomMatchJoinRoomNtf*))(Il2CppBase() + 0x51E0B1C))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSRoomMatchJoinRoomNtf*, uint32_t))(Il2CppBase() + 0x51E0B24))(this, value);
	}
	template <typename T = uintptr_t> T get_new_player() {
		return ((T (*)(CSRoomMatchJoinRoomNtf*))(Il2CppBase() + 0x51E0B2C))(this);
	}
	template <typename T = void> T set_new_player(uintptr_t value) {
		return ((T (*)(CSRoomMatchJoinRoomNtf*, uintptr_t))(Il2CppBase() + 0x51E0B34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchJoinRoomNtf*, bool))(Il2CppBase() + 0x51E0B3C))(this, createIfMissing);
	}

};

}
