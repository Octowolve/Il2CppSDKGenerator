#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsServerCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerCertificate"));
	}

	template <typename T = uintptr_t> T& certificates() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsServerCertificate*))(Il2CppBase() + 0x47DF194))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerCertificate*))(Il2CppBase() + 0x47DF1F0))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerCertificate*))(Il2CppBase() + 0x47DF200))(this);
	}
	template <typename T = bool> T checkCertificateUsage(uintptr_t cert) {
		return ((T (*)(TlsServerCertificate*, uintptr_t))(Il2CppBase() + 0x47DFB28))(this, cert);
	}
	template <typename T = void> T validateCertificates(uintptr_t certificates) {
		return ((T (*)(TlsServerCertificate*, uintptr_t))(Il2CppBase() + 0x47DF350))(this, certificates);
	}
	template <typename T = bool> T checkServerIdentity(uintptr_t cert) {
		return ((T (*)(TlsServerCertificate*, uintptr_t))(Il2CppBase() + 0x47DFF40))(this, cert);
	}
	template <typename T = bool> T checkDomainName(Il2CppString* subjectName) {
		return ((T (*)(TlsServerCertificate*, Il2CppString*))(Il2CppBase() + 0x47E0594))(this, subjectName);
	}
	template <typename T = bool> static T Match(Il2CppString* hostname, Il2CppString* pattern) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47E01AC))(0, hostname, pattern);
	}

};

}
