#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsClientHello
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientHello"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& random() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47DEB44))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47DEC08))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47DEC18))(this);
	}

};

}
