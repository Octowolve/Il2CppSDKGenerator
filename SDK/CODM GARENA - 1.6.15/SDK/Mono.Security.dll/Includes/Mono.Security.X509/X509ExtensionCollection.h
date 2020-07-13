#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X509ExtensionCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X509ExtensionCollection"));
	}

	template <typename T = bool> T& readOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x4C1384C))(this);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* oid) {
		return ((T (*)(X509ExtensionCollection*, Il2CppString*))(Il2CppBase() + 0x4C13884))(this, oid);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* oid) {
		return ((T (*)(X509ExtensionCollection*, Il2CppString*))(Il2CppBase() + 0x4C11484))(this, oid);
	}

};

}
