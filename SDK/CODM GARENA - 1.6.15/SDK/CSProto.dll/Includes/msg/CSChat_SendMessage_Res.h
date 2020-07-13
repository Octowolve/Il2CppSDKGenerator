#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatSendMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_SendMessage_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChatSendMessageRes*))(Il2CppBase() + 0x51CFFD8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChatSendMessageRes*, int32_t))(Il2CppBase() + 0x51CFFE0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSChatSendMessageRes*))(Il2CppBase() + 0x51CFFE8))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatSendMessageRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFFF0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatSendMessageRes*, bool))(Il2CppBase() + 0x51CFFF8))(this, createIfMissing);
	}

};

}
