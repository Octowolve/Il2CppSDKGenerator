#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupRoomLiteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupRoomLiteInfo"));
	}

	template <typename T = bool> T& _is_simulator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_gamepad() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& _block_gamepad() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_is_simulator() {
		return ((T (*)(GroupRoomLiteInfo*))(Il2CppBase() + 0x50CE6BC))(this);
	}
	template <typename T = void> T set_is_simulator(bool value) {
		return ((T (*)(GroupRoomLiteInfo*, bool))(Il2CppBase() + 0x50CE6C4))(this, value);
	}
	template <typename T = bool> T get_is_gamepad() {
		return ((T (*)(GroupRoomLiteInfo*))(Il2CppBase() + 0x50CE6CC))(this);
	}
	template <typename T = void> T set_is_gamepad(bool value) {
		return ((T (*)(GroupRoomLiteInfo*, bool))(Il2CppBase() + 0x50CE6D4))(this, value);
	}
	template <typename T = bool> T get_block_gamepad() {
		return ((T (*)(GroupRoomLiteInfo*))(Il2CppBase() + 0x50CE6DC))(this);
	}
	template <typename T = void> T set_block_gamepad(bool value) {
		return ((T (*)(GroupRoomLiteInfo*, bool))(Il2CppBase() + 0x50CE6E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupRoomLiteInfo*, bool))(Il2CppBase() + 0x50CE6EC))(this, createIfMissing);
	}

};

}
