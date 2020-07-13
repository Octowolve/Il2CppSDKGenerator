#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetPrivacyAgreeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetPrivacyAgreeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSetPrivacyAgreeRes*))(Il2CppBase() + 0x51E1D34))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSetPrivacyAgreeRes*, int32_t))(Il2CppBase() + 0x51E1D3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetPrivacyAgreeRes*, bool))(Il2CppBase() + 0x51E1D44))(this, createIfMissing);
	}

};

}
