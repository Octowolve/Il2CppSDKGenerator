#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSObserveReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSObserveReq"));
	}

	template <typename T = uint64_t> T& _dst_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_dst_player_id() {
		return ((T (*)(CSObserveReq*))(Il2CppBase() + 0x51F0F10))(this);
	}
	template <typename T = void> T set_dst_player_id(uint64_t value) {
		return ((T (*)(CSObserveReq*, uint64_t))(Il2CppBase() + 0x51F0F18))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSObserveReq*))(Il2CppBase() + 0x51F0F28))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSObserveReq*, uint32_t))(Il2CppBase() + 0x51F0F30))(this, value);
	}
	template <typename T = uintptr_t> T get_context() {
		return ((T (*)(CSObserveReq*))(Il2CppBase() + 0x51F0F38))(this);
	}
	template <typename T = void> T set_context(uintptr_t value) {
		return ((T (*)(CSObserveReq*, uintptr_t))(Il2CppBase() + 0x51F0F40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSObserveReq*, bool))(Il2CppBase() + 0x51F0F48))(this, createIfMissing);
	}

};

}
