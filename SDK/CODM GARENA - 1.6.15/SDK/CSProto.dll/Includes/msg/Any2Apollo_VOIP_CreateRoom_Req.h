#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2ApolloVOIPCreateRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Apollo_VOIP_CreateRoom_Req"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _user_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_user_list() {
		return ((T (*)(Any2ApolloVOIPCreateRoomReq*))(Il2CppBase() + 0x510BA74))(this);
	}
	template <typename T = uint32_t> T get_camp() {
		return ((T (*)(Any2ApolloVOIPCreateRoomReq*))(Il2CppBase() + 0x510BA7C))(this);
	}
	template <typename T = void> T set_camp(uint32_t value) {
		return ((T (*)(Any2ApolloVOIPCreateRoomReq*, uint32_t))(Il2CppBase() + 0x510BA84))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2ApolloVOIPCreateRoomReq*, bool))(Il2CppBase() + 0x510BA8C))(this, createIfMissing);
	}

};

}
