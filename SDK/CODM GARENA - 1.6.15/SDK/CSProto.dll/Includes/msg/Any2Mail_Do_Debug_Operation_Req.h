#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2MailDoDebugOperationReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Mail_Do_Debug_Operation_Req"));
	}

	template <typename T = int32_t> T& _OperationType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _NeedResp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_OperationType() {
		return ((T (*)(Any2MailDoDebugOperationReq*))(Il2CppBase() + 0x510BDF4))(this);
	}
	template <typename T = void> T set_OperationType(int32_t value) {
		return ((T (*)(Any2MailDoDebugOperationReq*, int32_t))(Il2CppBase() + 0x510BDFC))(this, value);
	}
	template <typename T = bool> T get_NeedResp() {
		return ((T (*)(Any2MailDoDebugOperationReq*))(Il2CppBase() + 0x510BE04))(this);
	}
	template <typename T = void> T set_NeedResp(bool value) {
		return ((T (*)(Any2MailDoDebugOperationReq*, bool))(Il2CppBase() + 0x510BE0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2MailDoDebugOperationReq*, bool))(Il2CppBase() + 0x510BE14))(this, createIfMissing);
	}

};

}
