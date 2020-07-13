#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomCreateRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomCreateRoomRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _open_game_mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomCreateRoomRes*))(Il2CppBase() + 0x51DE250))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomRes*, int32_t))(Il2CppBase() + 0x51DE258))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomCreateRoomRes*))(Il2CppBase() + 0x51DE260))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51DE268))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomCreateRoomRes*))(Il2CppBase() + 0x51DE270))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51DE278))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(CSGroupRoomCreateRoomRes*))(Il2CppBase() + 0x51DE280))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51DE288))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_open_game_mode() {
		return ((T (*)(CSGroupRoomCreateRoomRes*))(Il2CppBase() + 0x51DE290))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomCreateRoomRes*, bool))(Il2CppBase() + 0x51DE298))(this, createIfMissing);
	}

};

}
