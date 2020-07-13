#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetPrivacyAgreeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetPrivacyAgreeReq"));
	}

	template <typename T = int32_t> T& _PrivacyAgreeStatus() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_PrivacyAgreeStatus() {
		return ((T (*)(CSSetPrivacyAgreeReq*))(Il2CppBase() + 0x51E1D08))(this);
	}
	template <typename T = void> T set_PrivacyAgreeStatus(int32_t value) {
		return ((T (*)(CSSetPrivacyAgreeReq*, int32_t))(Il2CppBase() + 0x51E1D10))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetPrivacyAgreeReq*, bool))(Il2CppBase() + 0x51E1D18))(this, createIfMissing);
	}

};

}
