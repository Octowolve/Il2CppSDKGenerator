#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509ChainElementCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(X509ChainElementCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x3E88878))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E888AC))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E84118))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E88A44))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(X509ChainElementCollection*, int32_t))(Il2CppBase() + 0x3E850D8))(this, index);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E88A78))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E83E6C))(this);
	}
	template <typename T = void> T Add(uintptr_t certificate) {
		return ((T (*)(X509ChainElementCollection*, uintptr_t))(Il2CppBase() + 0x3E84C14))(this, certificate);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(X509ChainElementCollection*))(Il2CppBase() + 0x3E8414C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t certificate) {
		return ((T (*)(X509ChainElementCollection*, uintptr_t))(Il2CppBase() + 0x3E84DD0))(this, certificate);
	}

};

}
