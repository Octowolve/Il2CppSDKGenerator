#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatFetchMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_FetchMessage_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _message_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChatFetchMessageRes*))(Il2CppBase() + 0x51CFD00))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChatFetchMessageRes*, int32_t))(Il2CppBase() + 0x51CFD08))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_message_list() {
		return ((T (*)(CSChatFetchMessageRes*))(Il2CppBase() + 0x51CFD10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatFetchMessageRes*, bool))(Il2CppBase() + 0x51CFD18))(this, createIfMissing);
	}

};

}
