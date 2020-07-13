#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetMyGiftListReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetMyGiftListReq"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetMyGiftListReq*, bool))(Il2CppBase() + 0x521737C))(this, createIfMissing);
	}

};

}
