#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChatMessageReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChatMessageReq"));
	}

	template <typename T = uintptr_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_message_type() {
		return ((T (*)(CSGroupRoomChatMessageReq*))(Il2CppBase() + 0x51DDEF8))(this);
	}
	template <typename T = void> T set_message_type(uintptr_t value) {
		return ((T (*)(CSGroupRoomChatMessageReq*, uintptr_t))(Il2CppBase() + 0x51DDF00))(this, value);
	}
	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSGroupRoomChatMessageReq*))(Il2CppBase() + 0x51DDF08))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomChatMessageReq*, uintptr_t))(Il2CppBase() + 0x51DDF10))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChatMessageReq*, bool))(Il2CppBase() + 0x51DDF18))(this, createIfMissing);
	}

};

}
