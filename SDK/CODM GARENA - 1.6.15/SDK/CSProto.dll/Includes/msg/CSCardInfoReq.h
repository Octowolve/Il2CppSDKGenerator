#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardInfoReq"));
	}

	template <typename T = int32_t> T& _reserve() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_reserve() {
		return ((T (*)(CSCardInfoReq*))(Il2CppBase() + 0x51E5A88))(this);
	}
	template <typename T = void> T set_reserve(int32_t value) {
		return ((T (*)(CSCardInfoReq*, int32_t))(Il2CppBase() + 0x51E5A90))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardInfoReq*, bool))(Il2CppBase() + 0x51E5A98))(this, createIfMissing);
	}

};

}
