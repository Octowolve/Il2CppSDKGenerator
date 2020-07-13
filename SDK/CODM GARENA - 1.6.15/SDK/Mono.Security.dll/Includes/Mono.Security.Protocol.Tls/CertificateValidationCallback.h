#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CertificateValidationCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CertificateValidationCallback"));
	}


	template <typename T = bool> T Invoke(uintptr_t certificate, Il2CppArray<uintptr_t>* certificateErrors) {
		return ((T (*)(CertificateValidationCallback*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D6848))(this, certificate, certificateErrors);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t certificate, Il2CppArray<uintptr_t>* certificateErrors, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CertificateValidationCallback*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47D6904))(this, certificate, certificateErrors, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(CertificateValidationCallback*, uintptr_t))(Il2CppBase() + 0x47D693C))(this, result);
	}

};

}
