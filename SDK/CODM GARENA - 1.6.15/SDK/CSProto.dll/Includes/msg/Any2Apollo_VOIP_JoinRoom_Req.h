#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2ApolloVOIPJoinRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Apollo_VOIP_JoinRoom_Req"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _user_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_user_list() {
		return ((T (*)(Any2ApolloVOIPJoinRoomReq*))(Il2CppBase() + 0x510BBF4))(this);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Any2ApolloVOIPJoinRoomReq*))(Il2CppBase() + 0x510BBFC))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Any2ApolloVOIPJoinRoomReq*, uint64_t))(Il2CppBase() + 0x510BC04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2ApolloVOIPJoinRoomReq*, bool))(Il2CppBase() + 0x510BC14))(this, createIfMissing);
	}

};

}
