#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValueCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ValueCollection"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionTValue_Add(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x1715E5C))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionTValue_Clear() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1715F04))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_Contains(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x1715FAC))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_Remove(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x1715FE4))(this, item);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTValue_GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x171608C))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ValueCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x171610C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1716234))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_get_IsReadOnly() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x17162B4))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x17162BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x17162C4))(this);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(ValueCollection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x17163B8))(this, array, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1716488))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x17164B8))(this);
	}

};

}
