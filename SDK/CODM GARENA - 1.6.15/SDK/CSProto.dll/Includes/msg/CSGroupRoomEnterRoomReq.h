#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomEnterRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomEnterRoomReq"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _password() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _channel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& _profile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _enter_source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _phone_perf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _invite_id() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _invite_source() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _one_key_para() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE358))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint32_t))(Il2CppBase() + 0x51DE360))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE368))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint32_t))(Il2CppBase() + 0x51DE370))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_password() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE378))(this);
	}
	template <typename T = void> T set_password(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DE380))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE388))(this);
	}
	template <typename T = int32_t> T get_channel() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE390))(this);
	}
	template <typename T = void> T set_channel(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, int32_t))(Il2CppBase() + 0x51DE398))(this, value);
	}
	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3A0))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, bool))(Il2CppBase() + 0x51DE3A8))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3B0))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, bool))(Il2CppBase() + 0x51DE3B8))(this, value);
	}
	template <typename T = uintptr_t> T get_profile() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3C0))(this);
	}
	template <typename T = void> T set_profile(uintptr_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uintptr_t))(Il2CppBase() + 0x51DE3C8))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_bus_id() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3D0))(this);
	}
	template <typename T = void> T set_lobby_bus_id(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint32_t))(Il2CppBase() + 0x51DE3D8))(this, value);
	}
	template <typename T = int32_t> T get_enter_source() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3E0))(this);
	}
	template <typename T = void> T set_enter_source(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, int32_t))(Il2CppBase() + 0x51DE3E8))(this, value);
	}
	template <typename T = uint32_t> T get_phone_perf() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE3F0))(this);
	}
	template <typename T = void> T set_phone_perf(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint32_t))(Il2CppBase() + 0x51DE3F8))(this, value);
	}
	template <typename T = uint64_t> T get_invite_id() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE400))(this);
	}
	template <typename T = void> T set_invite_id(uint64_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint64_t))(Il2CppBase() + 0x51DE408))(this, value);
	}
	template <typename T = uint32_t> T get_invite_source() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE418))(this);
	}
	template <typename T = void> T set_invite_source(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uint32_t))(Il2CppBase() + 0x51DE420))(this, value);
	}
	template <typename T = uintptr_t> T get_one_key_para() {
		return ((T (*)(CSGroupRoomEnterRoomReq*))(Il2CppBase() + 0x51DE428))(this);
	}
	template <typename T = void> T set_one_key_para(uintptr_t value) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, uintptr_t))(Il2CppBase() + 0x51DE430))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomEnterRoomReq*, bool))(Il2CppBase() + 0x51DE438))(this, createIfMissing);
	}

};

}
