#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomCreateReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomCreateReq"));
	}

	template <typename T = uint32_t> T& _gsp_room_busid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _phone_perf() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_gsp_room_busid() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF010))(this);
	}
	template <typename T = void> T set_gsp_room_busid(uint32_t value) {
		return ((T (*)(GspRoomCreateReq*, uint32_t))(Il2CppBase() + 0x50CF018))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF020))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(GspRoomCreateReq*, uint64_t))(Il2CppBase() + 0x50CF028))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF038))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GspRoomCreateReq*, bool))(Il2CppBase() + 0x50CF040))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF048))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GspRoomCreateReq*, bool))(Il2CppBase() + 0x50CF050))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF058))(this);
	}
	template <typename T = uint32_t> T get_phone_perf() {
		return ((T (*)(GspRoomCreateReq*))(Il2CppBase() + 0x50CF060))(this);
	}
	template <typename T = void> T set_phone_perf(uint32_t value) {
		return ((T (*)(GspRoomCreateReq*, uint32_t))(Il2CppBase() + 0x50CF068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomCreateReq*, bool))(Il2CppBase() + 0x50CF070))(this, createIfMissing);
	}

};

}
