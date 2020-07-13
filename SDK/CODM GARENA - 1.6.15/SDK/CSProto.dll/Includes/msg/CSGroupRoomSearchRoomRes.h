#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSearchRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSearchRoomRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomSearchRoomRes*))(Il2CppBase() + 0x51DF228))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomSearchRoomRes*, int32_t))(Il2CppBase() + 0x51DF230))(this, value);
	}
	template <typename T = uintptr_t> T get_room_info() {
		return ((T (*)(CSGroupRoomSearchRoomRes*))(Il2CppBase() + 0x51DF238))(this);
	}
	template <typename T = void> T set_room_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomSearchRoomRes*, uintptr_t))(Il2CppBase() + 0x51DF240))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSearchRoomRes*, bool))(Il2CppBase() + 0x51DF248))(this, createIfMissing);
	}

};

}
