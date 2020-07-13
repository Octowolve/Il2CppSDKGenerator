#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomExitReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomExitReq"));
	}

	template <typename T = uint32_t> T& _gsp_room_busid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_gsp_room_busid() {
		return ((T (*)(GspRoomExitReq*))(Il2CppBase() + 0x50CF0D4))(this);
	}
	template <typename T = void> T set_gsp_room_busid(uint32_t value) {
		return ((T (*)(GspRoomExitReq*, uint32_t))(Il2CppBase() + 0x50CF0DC))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(GspRoomExitReq*))(Il2CppBase() + 0x50CF0E4))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(GspRoomExitReq*, uint64_t))(Il2CppBase() + 0x50CF0EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomExitReq*, bool))(Il2CppBase() + 0x50CF0FC))(this, createIfMissing);
	}

};

}
