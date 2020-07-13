#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class CertificateValidationCallback2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "CertificateValidationCallback2"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t collection) {
		return ((T (*)(CertificateValidationCallback2*, uintptr_t))(Il2CppBase() + 0x47D6984))(this, collection);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t collection, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CertificateValidationCallback2*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47D6A1C))(this, collection, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(CertificateValidationCallback2*, uintptr_t))(Il2CppBase() + 0x47D6A48))(this, result);
	}

};

}
