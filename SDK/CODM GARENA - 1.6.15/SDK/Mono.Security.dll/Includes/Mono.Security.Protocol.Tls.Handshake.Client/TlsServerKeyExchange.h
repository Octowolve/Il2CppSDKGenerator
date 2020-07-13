#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsServerKeyExchange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerKeyExchange"));
	}

	template <typename T = uintptr_t> T& rsaParams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& signedParams() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E18CC))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E196C))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E197C))(this);
	}
	template <typename T = void> T verifySignature() {
		return ((T (*)(TlsServerKeyExchange*))(Il2CppBase() + 0x47E16DC))(this);
	}

};

}
