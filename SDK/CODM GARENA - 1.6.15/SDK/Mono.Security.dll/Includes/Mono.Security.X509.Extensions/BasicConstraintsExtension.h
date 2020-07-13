#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class BasicConstraintsExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "BasicConstraintsExtension"));
	}

	template <typename T = bool> T& cA() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& pathLenConstraint() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(BasicConstraintsExtension*))(Il2CppBase() + 0x4BFB9CC))(this);
	}
	template <typename T = void> T Encode() {
		return ((T (*)(BasicConstraintsExtension*))(Il2CppBase() + 0x4BFBBB0))(this);
	}
	template <typename T = bool> T get_CertificateAuthority() {
		return ((T (*)(BasicConstraintsExtension*))(Il2CppBase() + 0x4BFBD6C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BasicConstraintsExtension*))(Il2CppBase() + 0x4BFBD74))(this);
	}

};

}
