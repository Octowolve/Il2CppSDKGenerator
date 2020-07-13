#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSafeBoxGmTestReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSafeBoxGmTestReq"));
	}

	template <typename T = int32_t> T& _op_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_op_type() {
		return ((T (*)(CSSafeBoxGmTestReq*))(Il2CppBase() + 0x51E1050))(this);
	}
	template <typename T = void> T set_op_type(int32_t value) {
		return ((T (*)(CSSafeBoxGmTestReq*, int32_t))(Il2CppBase() + 0x51E1058))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(CSSafeBoxGmTestReq*))(Il2CppBase() + 0x51E1060))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(CSSafeBoxGmTestReq*, int32_t))(Il2CppBase() + 0x51E1068))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSafeBoxGmTestReq*, bool))(Il2CppBase() + 0x51E1070))(this, createIfMissing);
	}

};

}
