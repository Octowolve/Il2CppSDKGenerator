#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI.Collections {

class IndexedSet1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI.Collections", "IndexedSet`1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_Dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(IndexedSet1*, uintptr_t))(Il2CppBase() + 0x518BE70))(this, item);
	}
	template <typename T = bool> T AddUnique(uintptr_t item) {
		return ((T (*)(IndexedSet1*, uintptr_t))(Il2CppBase() + 0x518BF04))(this, item);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(IndexedSet1*, uintptr_t))(Il2CppBase() + 0x518BFD0))(this, item);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(IndexedSet1*))(Il2CppBase() + 0x518C054))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(IndexedSet1*))(Il2CppBase() + 0x518C0E8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(IndexedSet1*))(Il2CppBase() + 0x518C11C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(IndexedSet1*, uintptr_t))(Il2CppBase() + 0x518C17C))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(IndexedSet1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x518C1B4))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(IndexedSet1*))(Il2CppBase() + 0x518C1EC))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(IndexedSet1*))(Il2CppBase() + 0x518C224))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(IndexedSet1*, uintptr_t))(Il2CppBase() + 0x518C22C))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(IndexedSet1*, int32_t, uintptr_t))(Il2CppBase() + 0x518C27C))(this, index, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(IndexedSet1*, int32_t))(Il2CppBase() + 0x518C324))(this, index);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(IndexedSet1*, int32_t))(Il2CppBase() + 0x518C498))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(IndexedSet1*, int32_t, uintptr_t))(Il2CppBase() + 0x518C4D0))(this, index, value);
	}
	template <typename T = void> T Sort(void* sortLayoutFunction) {
		return ((T (*)(IndexedSet1*, void*))(Il2CppBase() + 0x518C594))(this, sortLayoutFunction);
	}

};

}
