#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2ApolloVOIPDestroyRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Apollo_VOIP_DestroyRoom_Req"));
	}

	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _destroy_reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Any2ApolloVOIPDestroyRoomReq*))(Il2CppBase() + 0x510BAA8))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Any2ApolloVOIPDestroyRoomReq*, uint64_t))(Il2CppBase() + 0x510BAB0))(this, value);
	}
	template <typename T = uint32_t> T get_destroy_reason() {
		return ((T (*)(Any2ApolloVOIPDestroyRoomReq*))(Il2CppBase() + 0x510BAC0))(this);
	}
	template <typename T = void> T set_destroy_reason(uint32_t value) {
		return ((T (*)(Any2ApolloVOIPDestroyRoomReq*, uint32_t))(Il2CppBase() + 0x510BAC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2ApolloVOIPDestroyRoomReq*, bool))(Il2CppBase() + 0x510BAD0))(this, createIfMissing);
	}

};

}
