#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "KeyCollection"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionTKey_Add(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x442096C))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionTKey_Clear() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420A14))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_Contains(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x4420ABC))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_Remove(uintptr_t item) {
		return ((T (*)(KeyCollection*, uintptr_t))(Il2CppBase() + 0x4420AF4))(this, item);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTKey_GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420B9C))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(KeyCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4420C1C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420D44))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTKey_get_IsReadOnly() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420DC4))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420DCC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420DD4))(this);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(KeyCollection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4420EC8))(this, array, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420F98))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(KeyCollection*))(Il2CppBase() + 0x4420FC8))(this);
	}

};

}
