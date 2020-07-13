#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSwitchSeatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSwitchSeatRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _new_camp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _new_seat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomSwitchSeatRes*))(Il2CppBase() + 0x51DF5B4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatRes*, int32_t))(Il2CppBase() + 0x51DF5BC))(this, value);
	}
	template <typename T = uint32_t> T get_new_camp() {
		return ((T (*)(CSGroupRoomSwitchSeatRes*))(Il2CppBase() + 0x51DF5C4))(this);
	}
	template <typename T = void> T set_new_camp(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatRes*, uint32_t))(Il2CppBase() + 0x51DF5CC))(this, value);
	}
	template <typename T = uint32_t> T get_new_seat() {
		return ((T (*)(CSGroupRoomSwitchSeatRes*))(Il2CppBase() + 0x51DF5D4))(this);
	}
	template <typename T = void> T set_new_seat(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatRes*, uint32_t))(Il2CppBase() + 0x51DF5DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSwitchSeatRes*, bool))(Il2CppBase() + 0x51DF5E4))(this, createIfMissing);
	}

};

}
