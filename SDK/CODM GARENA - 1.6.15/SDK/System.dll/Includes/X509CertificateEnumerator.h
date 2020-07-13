#pragma once
#include <Il2Cpp/Il2Cpp.h>

class X509CertificateEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "X509CertificateEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E835A4))(this);
	}
	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E83698))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E8378C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E52684))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E52CF8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3E83880))(this);
	}

};

}
