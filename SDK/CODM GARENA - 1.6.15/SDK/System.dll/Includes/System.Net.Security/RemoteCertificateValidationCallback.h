#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Security {

class RemoteCertificateValidationCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Security", "RemoteCertificateValidationCallback"));
	}


	template <typename T = bool> T Invoke(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(RemoteCertificateValidationCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E513F4))(this, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RemoteCertificateValidationCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E514DC))(this, sender, certificate, chain, sslPolicyErrors, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(RemoteCertificateValidationCallback*, uintptr_t))(Il2CppBase() + 0x3E515C0))(this, result);
	}

};

}
