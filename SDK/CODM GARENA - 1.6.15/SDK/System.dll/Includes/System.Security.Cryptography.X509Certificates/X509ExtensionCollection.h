#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ExtensionCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(X509ExtensionCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x3E896D4))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3E89850))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3E82A88))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3E8992C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3E89960))(this);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* oid) {
		return ((T (*)(X509ExtensionCollection*, Il2CppString*))(Il2CppBase() + 0x3E583BC))(this, oid);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(X509ExtensionCollection*))(Il2CppBase() + 0x3E868AC))(this);
	}

};

}
