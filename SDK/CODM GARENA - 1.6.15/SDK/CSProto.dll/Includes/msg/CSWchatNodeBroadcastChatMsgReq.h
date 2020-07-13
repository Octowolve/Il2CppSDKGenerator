#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatNodeBroadcastChatMsgReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatNodeBroadcastChatMsgReq"));
	}

	template <typename T = uintptr_t> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_message_data() {
		return ((T (*)(CSWchatNodeBroadcastChatMsgReq*))(Il2CppBase() + 0x51B6944))(this);
	}
	template <typename T = void> T set_message_data(uintptr_t value) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgReq*, uintptr_t))(Il2CppBase() + 0x51B694C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgReq*, bool))(Il2CppBase() + 0x51B6954))(this, createIfMissing);
	}

};

}
