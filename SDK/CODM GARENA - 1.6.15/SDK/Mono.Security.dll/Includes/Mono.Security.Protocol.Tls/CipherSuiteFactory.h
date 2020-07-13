#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CipherSuiteFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CipherSuiteFactory"));
	}


	template <typename T = uintptr_t> static T GetSupportedCiphers(uintptr_t protocol) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47D9A34))(0, protocol);
	}
	template <typename T = uintptr_t> static T GetTls1SupportedCiphers() {
		return ((T (*)(void *))(Il2CppBase() + 0x47D9B08))(0);
	}
	template <typename T = uintptr_t> static T GetSsl3SupportedCiphers() {
		return ((T (*)(void *))(Il2CppBase() + 0x47D9FF0))(0);
	}

};

}
