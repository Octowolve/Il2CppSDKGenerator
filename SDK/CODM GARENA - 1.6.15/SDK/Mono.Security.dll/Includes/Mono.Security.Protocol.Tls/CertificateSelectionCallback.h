#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CertificateSelectionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CertificateSelectionCallback"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(CertificateSelectionCallback*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47D66FC))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t clientCertificates, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CertificateSelectionCallback*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47D67E4))(this, clientCertificates, serverCertificate, targetHost, serverRequestedCertificates, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(CertificateSelectionCallback*, uintptr_t))(Il2CppBase() + 0x47D6828))(this, result);
	}

};

}
