#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsClientHello
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientHello"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& random() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sessionId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cipherSuites() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& compressionMethods() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47E359C))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47E37CC))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47E37DC))(this);
	}
	template <typename T = void> T processProtocol(int16_t protocol) {
		return ((T (*)(TlsClientHello*, int16_t))(Il2CppBase() + 0x47E39DC))(this, protocol);
	}
	template <typename T = void> T selectCipherSuite() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47E360C))(this);
	}
	template <typename T = void> T selectCompressionMethod() {
		return ((T (*)(TlsClientHello*))(Il2CppBase() + 0x47E37A4))(this);
	}

};

}
