#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class List1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "List`1"));
	}

	template <typename T = int32_t> static T& DefaultCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FB5A4))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(List1*, uintptr_t, int32_t))(Il2CppBase() + 0x17FB61C))(this, array, arrayIndex);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FB654))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FB6CC))(this, item);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FB8A8))(this, item);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FBA38))(this, item);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t item) {
		return ((T (*)(List1*, int32_t, uintptr_t))(Il2CppBase() + 0x17FBBC8))(this, index, item);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FBDC0))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FBF4C))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FBF54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FBF5C))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FBF60))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FBF68))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FBF70))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(List1*, int32_t, uintptr_t))(Il2CppBase() + 0x17FBFA4))(this, index, value);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FC180))(this, item);
	}
	template <typename T = void> T GrowIfNeeded(int32_t newCount) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FC220))(this, newCount);
	}
	template <typename T = void> T CheckRange(int32_t idx, int32_t count) {
		return ((T (*)(List1*, int32_t, int32_t))(Il2CppBase() + 0x17FC2BC))(this, idx, count);
	}
	template <typename T = void> T AddCollection(void* collection) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FC400))(this, collection);
	}
	template <typename T = void> T AddEnumerable(void* enumerable) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FC570))(this, enumerable);
	}
	template <typename T = void> T AddRange(void* collection) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FC878))(this, collection);
	}
	template <typename T = void*> T AsReadOnly() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FC924))(this);
	}
	template <typename T = int32_t> T BinarySearch(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FC978))(this, item);
	}
	template <typename T = int32_t> T BinarySearch_1(uintptr_t item, void* comparer) {
		return ((T (*)(List1*, uintptr_t, void*))(Il2CppBase() + 0x17FC9B8))(this, item, comparer);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FC9F8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FCA50))(this, item);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ConvertAll(void* converter) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x21D421C))(this, converter);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(List1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x17FCAA4))(this, array, arrayIndex);
	}
	template <typename T = bool> T Exists(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FCADC))(this, match);
	}
	template <typename T = uintptr_t> T Find(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FCBC0))(this, match);
	}
	template <typename T = void> static T CheckMatch(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x17FCD78))(0, match);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindAll(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FCE2C))(this, match);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindAllStackBits(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FCEF8))(this, match);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindAllList(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FD1B0))(this, match);
	}
	template <typename T = int32_t> T FindIndex(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FD2D4))(this, match);
	}
	template <typename T = int32_t> T GetIndex(int32_t startIndex, int32_t count, void* match) {
		return ((T (*)(List1*, int32_t, int32_t, void*))(Il2CppBase() + 0x17FD3A8))(this, startIndex, count, match);
	}
	template <typename T = int32_t> T FindLastIndex(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FD450))(this, match);
	}
	template <typename T = int32_t> T GetLastIndex(int32_t startIndex, int32_t count, void* match) {
		return ((T (*)(List1*, int32_t, int32_t, void*))(Il2CppBase() + 0x17FD524))(this, startIndex, count, match);
	}
	template <typename T = void> T ForEach(void* action) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FD5BC))(this, action);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FD6E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRange(int32_t index, int32_t count) {
		return ((T (*)(List1*, int32_t, int32_t))(Il2CppBase() + 0x17FD70C))(this, index, count);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FD7F4))(this, item);
	}
	template <typename T = void> T Shift(int32_t start, int32_t delta) {
		return ((T (*)(List1*, int32_t, int32_t))(Il2CppBase() + 0x17FD838))(this, start, delta);
	}
	template <typename T = void> T CheckIndex(int32_t index) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FD8BC))(this, index);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(List1*, int32_t, uintptr_t))(Il2CppBase() + 0x17FD980))(this, index, item);
	}
	template <typename T = void> T CheckCollection(void* collection) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FDA58))(this, collection);
	}
	template <typename T = void> T InsertRange(int32_t index, void* collection) {
		return ((T (*)(List1*, int32_t, void*))(Il2CppBase() + 0x17FDB0C))(this, index, collection);
	}
	template <typename T = void> T InsertCollection(int32_t index, void* collection) {
		return ((T (*)(List1*, int32_t, void*))(Il2CppBase() + 0x17FDCB0))(this, index, collection);
	}
	template <typename T = void> T InsertEnumeration(int32_t index, void* enumerable) {
		return ((T (*)(List1*, int32_t, void*))(Il2CppBase() + 0x17FDE24))(this, index, enumerable);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(List1*, uintptr_t))(Il2CppBase() + 0x17FE148))(this, item);
	}
	template <typename T = int32_t> T RemoveAll(void* match) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FE1BC))(this, match);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FE400))(this, index);
	}
	template <typename T = void> T RemoveRange(int32_t index, int32_t count) {
		return ((T (*)(List1*, int32_t, int32_t))(Il2CppBase() + 0x17FE51C))(this, index, count);
	}
	template <typename T = void> T Reverse() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE5C4))(this);
	}
	template <typename T = void> T Reverse_1(int32_t index, int32_t count) {
		return ((T (*)(List1*, int32_t, int32_t))(Il2CppBase() + 0x17FE604))(this, index, count);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE680))(this);
	}
	template <typename T = void> T Sort_1(void* comparer) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FE74C))(this, comparer);
	}
	template <typename T = void> T Sort_2(void* comparison) {
		return ((T (*)(List1*, void*))(Il2CppBase() + 0x17FE7A0))(this, comparison);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE7EC))(this);
	}
	template <typename T = void> T TrimExcess() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE854))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE88C))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FE8B0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(List1*))(Il2CppBase() + 0x17FE980))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(List1*, int32_t))(Il2CppBase() + 0x17FE988))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(List1*, int32_t, uintptr_t))(Il2CppBase() + 0x17FEA7C))(this, index, value);
	}

};

}
