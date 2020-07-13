#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatNodeBroadBigHornMsgReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatNodeBroadBigHornMsgReq"));
	}

	template <typename T = uintptr_t> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_message_data() {
		return ((T (*)(CSWchatNodeBroadBigHornMsgReq*))(Il2CppBase() + 0x51B68BC))(this);
	}
	template <typename T = void> T set_message_data(uintptr_t value) {
		return ((T (*)(CSWchatNodeBroadBigHornMsgReq*, uintptr_t))(Il2CppBase() + 0x51B68C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatNodeBroadBigHornMsgReq*, bool))(Il2CppBase() + 0x51B68CC))(this, createIfMissing);
	}

};

}
