#pragma once
#include <Il2Cpp/Il2Cpp.h>

class X509CertificateEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "X509CertificateEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FC3778))(this);
	}
	template <typename T = bool> T System_Collections_IEnumerator_MoveNext_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FC386C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FC3960))(this);
	}
	template <typename T = uintptr_t> T get_Current_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FBB53C))(this);
	}
	template <typename T = bool> T MoveNext_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FBB9B8))(this);
	}
	template <typename T = void> T Reset_1() {
		return ((T (*)(X509CertificateEnumerator*))(Il2CppBase() + 0x3FC3A54))(this);
	}

};

}
