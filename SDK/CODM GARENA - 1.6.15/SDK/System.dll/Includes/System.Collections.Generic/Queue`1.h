#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class Queue1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "Queue`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _head() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _tail() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t idx) {
		return ((T (*)(Queue1*, uintptr_t, int32_t))(Il2CppBase() + 0x1883564))(this, array, idx);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x18837E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x18837EC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x18837F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1883868))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x18838E0))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(Queue1*, uintptr_t))(Il2CppBase() + 0x1883940))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t idx) {
		return ((T (*)(Queue1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1883CB4))(this, array, idx);
	}
	template <typename T = uintptr_t> T Dequeue() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1883DF8))(this);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1883F58))(this);
	}
	template <typename T = void> T Enqueue(uintptr_t item) {
		return ((T (*)(Queue1*, uintptr_t))(Il2CppBase() + 0x1884038))(this, item);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1884134))(this);
	}
	template <typename T = void> T SetCapacity(int32_t new_size) {
		return ((T (*)(Queue1*, int32_t))(Il2CppBase() + 0x18841B0))(this, new_size);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1884310))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Queue1*))(Il2CppBase() + 0x1884318))(this);
	}

};

}
