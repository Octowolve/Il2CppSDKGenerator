#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2MailDoDebugOperationRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Mail_Do_Debug_Operation_Res"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2MailDoDebugOperationRes*, bool))(Il2CppBase() + 0x510BE30))(this, createIfMissing);
	}

};

}
