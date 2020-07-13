#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class OidEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography", "OidEnumerator"));
	}

	template <typename T = uintptr_t> T& _collection() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _position() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OidEnumerator*))(Il2CppBase() + 0x3E7AD40))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OidEnumerator*))(Il2CppBase() + 0x3E7AE04))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(OidEnumerator*))(Il2CppBase() + 0x3E7AE68))(this);
	}

};

}
