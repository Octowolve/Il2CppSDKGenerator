#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPinCodeCreateRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPinCodeCreateRoomRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _action() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _pin_code() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _owner_nickname() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1110))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, int32_t))(Il2CppBase() + 0x51F1118))(this, value);
	}
	template <typename T = uint32_t> T get_action() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1120))(this);
	}
	template <typename T = void> T set_action(uint32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51F1128))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1130))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51F1138))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1140))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51F1148))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1150))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51F1158))(this, value);
	}
	template <typename T = uint32_t> T get_pin_code() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1160))(this);
	}
	template <typename T = void> T set_pin_code(uint32_t value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, uint32_t))(Il2CppBase() + 0x51F1168))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_owner_nickname() {
		return ((T (*)(CSPinCodeCreateRoomRes*))(Il2CppBase() + 0x51F1170))(this);
	}
	template <typename T = void> T set_owner_nickname(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSPinCodeCreateRoomRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F1178))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPinCodeCreateRoomRes*, bool))(Il2CppBase() + 0x51F1180))(this, createIfMissing);
	}

};

}
