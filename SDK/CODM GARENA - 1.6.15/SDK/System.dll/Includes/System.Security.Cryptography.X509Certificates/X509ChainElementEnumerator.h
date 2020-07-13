#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ChainElementEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(X509ChainElementEnumerator*))(Il2CppBase() + 0x3E88AAC))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(X509ChainElementEnumerator*))(Il2CppBase() + 0x3E83F00))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(X509ChainElementEnumerator*))(Il2CppBase() + 0x3E8401C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(X509ChainElementEnumerator*))(Il2CppBase() + 0x3E88BA0))(this);
	}

};

}
