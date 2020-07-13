#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509ExtensionCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.X509", "X509ExtensionCollection"));
	}

	template <typename T = bool> T& readOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator_1() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3FC4560))(this);
	}

};

}
