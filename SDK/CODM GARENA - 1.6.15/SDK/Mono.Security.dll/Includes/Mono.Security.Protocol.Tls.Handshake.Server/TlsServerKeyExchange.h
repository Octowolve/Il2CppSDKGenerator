#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerKeyExchange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerKeyExchange"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E4F10))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E4FA4))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E4FB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T createSignature(uintptr_t rsa, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(TlsServerKeyExchange*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E52D0))(this, rsa, buffer);
	}

};

}
