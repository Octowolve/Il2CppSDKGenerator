#pragma once
#include <Il2Cpp/Il2Cpp.h>

class X509CertificateEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "X509CertificateEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C102BC))(this);
	}
	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C103B0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C104A4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C041AC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C0467C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x4C10598))(this);
	}

};

}
