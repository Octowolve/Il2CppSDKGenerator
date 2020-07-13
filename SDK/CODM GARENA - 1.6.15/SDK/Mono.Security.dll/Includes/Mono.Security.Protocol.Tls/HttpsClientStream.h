#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class HttpsClientStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "HttpsClientStream"));
	}

	template <typename T = uintptr_t> T& _request() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_TrustFailure() {
		return ((T (*)(HttpsClientStream*))(Il2CppBase() + 0x47E56FC))(this);
	}
	template <typename T = bool> T RaiseServerCertificateValidation(uintptr_t certificate, Il2CppArray<uintptr_t>* certificateErrors) {
		return ((T (*)(HttpsClientStream*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E571C))(this, certificate, certificateErrors);
	}
	template <typename T = uintptr_t> static T HttpsClientStreamm__0(uintptr_t clientCerts, uintptr_t serverCertificate, Il2CppString* targetHost, uintptr_t serverRequestedCertificates) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47E5AAC))(0, clientCerts, serverCertificate, targetHost, serverRequestedCertificates);
	}
	template <typename T = uintptr_t> static T HttpsClientStreamm__1(uintptr_t certificate, Il2CppString* targetHost) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x47E5AF0))(0, certificate, targetHost);
	}

};

}
