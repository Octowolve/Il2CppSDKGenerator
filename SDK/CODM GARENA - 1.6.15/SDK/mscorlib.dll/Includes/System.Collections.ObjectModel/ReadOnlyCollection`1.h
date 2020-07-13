#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.ObjectModel {

class ReadOnlyCollection1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.ObjectModel", "ReadOnlyCollection`1"));
	}

	template <typename T = void*> T& list() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionT_Add(uintptr_t item) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBDDE8))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_Clear() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBDE7C))(this);
	}
	template <typename T = void> T System_Collections_Generic_IListT_Insert(int32_t index, uintptr_t item) {
		return ((T (*)(ReadOnlyCollection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2CBDF10))(this, index, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_Remove(uintptr_t item) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBDFA4))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_IListT_RemoveAt(int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, int32_t))(Il2CppBase() + 0x2CBE038))(this, index);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IListT_get_Item(int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, int32_t))(Il2CppBase() + 0x2CBE0CC))(this, index);
	}
	template <typename T = void> T System_Collections_Generic_IListT_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2CBE100))(this, index, value);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE194))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t, int32_t))(Il2CppBase() + 0x2CBE19C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE2D0))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBE3C4))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Clear() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE458))(this);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBE4EC))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBE5E8))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2CBE6E0))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBE774))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, int32_t))(Il2CppBase() + 0x2CBE808))(this, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE89C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE8A4))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE8A8))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBE8B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, int32_t))(Il2CppBase() + 0x2CBE8B8))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2CBE95C))(this, index, value);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBE9F0))(this, value);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2CBEA94))(this, array, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBEB40))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(ReadOnlyCollection1*, uintptr_t))(Il2CppBase() + 0x2CBEBDC))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ReadOnlyCollection1*))(Il2CppBase() + 0x2CBEC80))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ReadOnlyCollection1*, int32_t))(Il2CppBase() + 0x2CBED1C))(this, index);
	}

};

}
