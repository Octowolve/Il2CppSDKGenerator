#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValueCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ValueCollection"));
	}

	template <typename T = void*> T& _dic() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionTValue_Add(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x18876BC))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionTValue_Clear() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1887750))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_Contains(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x18877E4))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_get_IsReadOnly() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x188781C))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionTValue_Remove(uintptr_t item) {
		return ((T (*)(ValueCollection*, uintptr_t))(Il2CppBase() + 0x1887824))(this, item);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTValue_GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x18878B8))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ValueCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x1887930))(this, array, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1887C90))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1887C98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1887CA0))(this);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(ValueCollection*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1887CFC))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x1888054))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(ValueCollection*))(Il2CppBase() + 0x188808C))(this);
	}

};

}
