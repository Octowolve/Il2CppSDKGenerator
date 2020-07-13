#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomCreateRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomCreateRoomReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _create_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _profile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _phone_perf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSGroupRoomCreateRoomReq*))(Il2CppBase() + 0x51DE148))(this);
	}
	template <typename T = uintptr_t> T get_create_data() {
		return ((T (*)(CSGroupRoomCreateRoomReq*))(Il2CppBase() + 0x51DE150))(this);
	}
	template <typename T = void> T set_create_data(uintptr_t value) {
		return ((T (*)(CSGroupRoomCreateRoomReq*, uintptr_t))(Il2CppBase() + 0x51DE158))(this, value);
	}
	template <typename T = uintptr_t> T get_profile() {
		return ((T (*)(CSGroupRoomCreateRoomReq*))(Il2CppBase() + 0x51DE160))(this);
	}
	template <typename T = void> T set_profile(uintptr_t value) {
		return ((T (*)(CSGroupRoomCreateRoomReq*, uintptr_t))(Il2CppBase() + 0x51DE168))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_bus_id() {
		return ((T (*)(CSGroupRoomCreateRoomReq*))(Il2CppBase() + 0x51DE170))(this);
	}
	template <typename T = void> T set_lobby_bus_id(uint32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomReq*, uint32_t))(Il2CppBase() + 0x51DE178))(this, value);
	}
	template <typename T = uint32_t> T get_phone_perf() {
		return ((T (*)(CSGroupRoomCreateRoomReq*))(Il2CppBase() + 0x51DE180))(this);
	}
	template <typename T = void> T set_phone_perf(uint32_t value) {
		return ((T (*)(CSGroupRoomCreateRoomReq*, uint32_t))(Il2CppBase() + 0x51DE188))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomCreateRoomReq*, bool))(Il2CppBase() + 0x51DE190))(this, createIfMissing);
	}

};

}
