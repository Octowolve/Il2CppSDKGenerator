#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2AnyVOIPDestroyRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Any_VOIP_DestroyRoom_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Apollo2AnyVOIPDestroyRoomRes*))(Il2CppBase() + 0x510BF4C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Apollo2AnyVOIPDestroyRoomRes*, int32_t))(Il2CppBase() + 0x510BF54))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2AnyVOIPDestroyRoomRes*))(Il2CppBase() + 0x510BF5C))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2AnyVOIPDestroyRoomRes*, uint64_t))(Il2CppBase() + 0x510BF64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2AnyVOIPDestroyRoomRes*, bool))(Il2CppBase() + 0x510BF74))(this, createIfMissing);
	}

};

}
