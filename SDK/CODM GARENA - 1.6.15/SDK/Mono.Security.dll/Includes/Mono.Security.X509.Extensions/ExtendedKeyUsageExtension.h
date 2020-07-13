#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class ExtendedKeyUsageExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "ExtendedKeyUsageExtension"));
	}

	template <typename T = uintptr_t> T& keyPurpose() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(ExtendedKeyUsageExtension*))(Il2CppBase() + 0x4BFBF60))(this);
	}
	template <typename T = void> T Encode() {
		return ((T (*)(ExtendedKeyUsageExtension*))(Il2CppBase() + 0x4BFC124))(this);
	}
	template <typename T = uintptr_t> T get_KeyPurpose() {
		return ((T (*)(ExtendedKeyUsageExtension*))(Il2CppBase() + 0x4BFC598))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExtendedKeyUsageExtension*))(Il2CppBase() + 0x4BFC5A0))(this);
	}

};

}
