#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatNewMessageNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_NewMessage_Ntf"));
	}

	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSChatNewMessageNtf*))(Il2CppBase() + 0x51CFE70))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSChatNewMessageNtf*, uintptr_t))(Il2CppBase() + 0x51CFE78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatNewMessageNtf*, bool))(Il2CppBase() + 0x51CFE80))(this, createIfMissing);
	}

};

}
