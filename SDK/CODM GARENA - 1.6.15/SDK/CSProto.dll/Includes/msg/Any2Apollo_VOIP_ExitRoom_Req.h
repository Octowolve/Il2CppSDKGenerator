#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2ApolloVOIPExitRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Apollo_VOIP_ExitRoom_Req"));
	}

	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _member_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _exit_reason() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*))(Il2CppBase() + 0x510BAEC))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*, uint64_t))(Il2CppBase() + 0x510BAF4))(this, value);
	}
	template <typename T = uint32_t> T get_member_id() {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*))(Il2CppBase() + 0x510BB04))(this);
	}
	template <typename T = void> T set_member_id(uint32_t value) {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*, uint32_t))(Il2CppBase() + 0x510BB0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*))(Il2CppBase() + 0x510BB14))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510BB1C))(this, value);
	}
	template <typename T = uint32_t> T get_exit_reason() {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*))(Il2CppBase() + 0x510BB24))(this);
	}
	template <typename T = void> T set_exit_reason(uint32_t value) {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*, uint32_t))(Il2CppBase() + 0x510BB2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2ApolloVOIPExitRoomReq*, bool))(Il2CppBase() + 0x510BB34))(this, createIfMissing);
	}

};

}
