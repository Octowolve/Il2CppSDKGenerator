#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class CollectionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "CollectionBase"));
	}

	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(CollectionBase*, uintptr_t, int32_t))(Il2CppBase() + 0x363788C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x363796C))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x36379A0))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(CollectionBase*, uintptr_t))(Il2CppBase() + 0x36379D4))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(CollectionBase*, uintptr_t))(Il2CppBase() + 0x3637BAC))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(CollectionBase*, uintptr_t))(Il2CppBase() + 0x3637BE8))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3637C24))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(CollectionBase*, uintptr_t))(Il2CppBase() + 0x3637DDC))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x3637F68))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x3637F9C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(CollectionBase*, int32_t))(Il2CppBase() + 0x3637FD0))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x363800C))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x3638284))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x36382B8))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x36382EC))(this);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(CollectionBase*, int32_t))(Il2CppBase() + 0x3638350))(this, index);
	}
	template <typename T = uintptr_t> T get_InnerList() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x36378D0))(this);
	}
	template <typename T = uintptr_t> T get_List() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x3638408))(this);
	}
	template <typename T = void> T OnClear() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x363840C))(this);
	}
	template <typename T = void> T OnClearComplete() {
		return ((T (*)(CollectionBase*))(Il2CppBase() + 0x3638410))(this);
	}
	template <typename T = void> T OnInsert(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3638414))(this, index, value);
	}
	template <typename T = void> T OnInsertComplete(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3638418))(this, index, value);
	}
	template <typename T = void> T OnRemove(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x363841C))(this, index, value);
	}
	template <typename T = void> T OnRemoveComplete(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3638420))(this, index, value);
	}
	template <typename T = void> T OnSet(int32_t index, uintptr_t oldValue, uintptr_t newValue) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3638424))(this, index, oldValue, newValue);
	}
	template <typename T = void> T OnSetComplete(int32_t index, uintptr_t oldValue, uintptr_t newValue) {
		return ((T (*)(CollectionBase*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3638428))(this, index, oldValue, newValue);
	}
	template <typename T = void> T OnValidate(uintptr_t value) {
		return ((T (*)(CollectionBase*, uintptr_t))(Il2CppBase() + 0x363842C))(this, value);
	}

};

}
