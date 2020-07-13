#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net.Security {

class LocalCertificateSelectionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net.Security", "LocalCertificateSelectionCallback"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t sender, Il2CppString* targetHost, uintptr_t localCertificates, uintptr_t remoteCertificate, Il2CppArray<uintptr_t>* acceptableIssuers) {
		return ((T (*)(LocalCertificateSelectionCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E51290))(this, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, Il2CppString* targetHost, uintptr_t localCertificates, uintptr_t remoteCertificate, Il2CppArray<uintptr_t>* acceptableIssuers, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LocalCertificateSelectionCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E51388))(this, sender, targetHost, localCertificates, remoteCertificate, acceptableIssuers, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(LocalCertificateSelectionCallback*, uintptr_t))(Il2CppBase() + 0x3E513D4))(this, result);
	}

};

}
