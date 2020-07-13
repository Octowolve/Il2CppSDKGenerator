#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Certificate2Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E82C50))(this);
	}
	template <typename T = bool> T System_Collections_IEnumerator_MoveNext() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E82D44))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E82E38))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E82F2C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E83040))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509Certificate2Enumerator*))(Il2CppBase() + 0x3E83134))(this);
	}

};

}
