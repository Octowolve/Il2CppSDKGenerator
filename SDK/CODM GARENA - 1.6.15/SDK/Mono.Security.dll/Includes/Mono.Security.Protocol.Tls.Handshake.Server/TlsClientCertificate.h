#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsClientCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientCertificate"));
	}

	template <typename T = uintptr_t> T& clientCertificates() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47E1CD8))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47E1F44))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47E1F54))(this);
	}
	template <typename T = bool> T checkCertificateUsage(uintptr_t cert) {
		return ((T (*)(TlsClientCertificate*, uintptr_t))(Il2CppBase() + 0x47E2A44))(this, cert);
	}
	template <typename T = void> T validateCertificates(uintptr_t certificates) {
		return ((T (*)(TlsClientCertificate*, uintptr_t))(Il2CppBase() + 0x47E2168))(this, certificates);
	}

};

}
