#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "KeyCollection"));
	}

	template <typename T = void*> T& _dic() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionTKey_Add(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x1886578))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionTKey_Clear() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x188660C))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_Contains(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x18866A0))(this, item);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTKey_GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x18866D8))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_get_IsReadOnly() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886750))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_Remove(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x1886758))(this, item);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(KeyCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x18867EC))(this, array, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886B4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886B54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886B5C))(this);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(KeyCollection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1886BB8))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886F10))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x1886F48))(this);
	}

};

}
