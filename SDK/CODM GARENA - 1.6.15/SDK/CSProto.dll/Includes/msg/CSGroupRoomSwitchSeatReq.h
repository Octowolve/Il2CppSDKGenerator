#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSwitchSeatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSwitchSeatReq"));
	}

	template <typename T = uint32_t> T& _new_camp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _new_seat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_new_camp() {
		return ((T (*)(CSGroupRoomSwitchSeatReq*))(Il2CppBase() + 0x51DF578))(this);
	}
	template <typename T = void> T set_new_camp(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatReq*, uint32_t))(Il2CppBase() + 0x51DF580))(this, value);
	}
	template <typename T = uint32_t> T get_new_seat() {
		return ((T (*)(CSGroupRoomSwitchSeatReq*))(Il2CppBase() + 0x51DF588))(this);
	}
	template <typename T = void> T set_new_seat(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatReq*, uint32_t))(Il2CppBase() + 0x51DF590))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSwitchSeatReq*, bool))(Il2CppBase() + 0x51DF598))(this, createIfMissing);
	}

};

}
