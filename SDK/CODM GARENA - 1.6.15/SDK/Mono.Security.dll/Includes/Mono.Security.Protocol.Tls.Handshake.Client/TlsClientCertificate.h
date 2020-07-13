#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsClientCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientCertificate"));
	}

	template <typename T = bool> T& clientCertSelected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& clientCert() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_ClientCertificate() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DD570))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DD788))(this);
	}
	template <typename T = void> T GetClientCertificate() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DD5A0))(this);
	}
	template <typename T = void> T SendCertificates() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DD840))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DDCA0))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientCertificate*))(Il2CppBase() + 0x47DDCE0))(this);
	}
	template <typename T = uintptr_t> T FindParentCertificate(uintptr_t cert) {
		return ((T (*)(TlsClientCertificate*, uintptr_t))(Il2CppBase() + 0x47DD9A8))(this, cert);
	}

};

}
