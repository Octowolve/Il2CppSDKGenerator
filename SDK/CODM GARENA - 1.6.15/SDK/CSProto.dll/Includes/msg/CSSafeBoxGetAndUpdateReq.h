#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSafeBoxGetAndUpdateReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSafeBoxGetAndUpdateReq"));
	}

	template <typename T = int32_t> T& _entrance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_entrance() {
		return ((T (*)(CSSafeBoxGetAndUpdateReq*))(Il2CppBase() + 0x51E0F4C))(this);
	}
	template <typename T = void> T set_entrance(int32_t value) {
		return ((T (*)(CSSafeBoxGetAndUpdateReq*, int32_t))(Il2CppBase() + 0x51E0F54))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSafeBoxGetAndUpdateReq*, bool))(Il2CppBase() + 0x51E0F5C))(this, createIfMissing);
	}

};

}
