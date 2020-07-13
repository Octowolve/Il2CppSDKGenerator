#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.ObjectModel {

class Collection1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.ObjectModel", "Collection`1"));
	}

	template <typename T = void*> T& list() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& syncRoot() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2697828))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Collection1*, uintptr_t, int32_t))(Il2CppBase() + 0x26978C4))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x26979F8))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2697A94))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2697B84))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2697C80))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2697D78))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2697DDC))(this, value);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2697E74))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2697E90))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2697E98))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2697EB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(Collection1*, int32_t))(Il2CppBase() + 0x2697F50))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2697FF4))(this, index, value);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2698058))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2698120))(this);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2698150))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x26981EC))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(Collection1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2698290))(this, array, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x269833C))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x26983D8))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x269847C))(this, index, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x26984AC))(this, index, item);
	}
	template <typename T = void*> T get_Items() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2698558))(this);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(Collection1*, uintptr_t))(Il2CppBase() + 0x2698560))(this, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(Collection1*, int32_t))(Il2CppBase() + 0x26985C4))(this, index);
	}
	template <typename T = void> T RemoveItem(int32_t index) {
		return ((T (*)(Collection1*, int32_t))(Il2CppBase() + 0x26985F4))(this, index);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Collection1*))(Il2CppBase() + 0x2698698))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(Collection1*, int32_t))(Il2CppBase() + 0x2698734))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x26987D8))(this, index, value);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t item) {
		return ((T (*)(Collection1*, int32_t, uintptr_t))(Il2CppBase() + 0x2698808))(this, index, item);
	}
	template <typename T = bool> static T IsValidItem(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x26988B4))(0, item);
	}
	template <typename T = uintptr_t> static T ConvertItem(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x26989D4))(0, item);
	}
	template <typename T = void> static T CheckWritable(void* list) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2698AF0))(0, list);
	}
	template <typename T = bool> static T IsSynchronized(void* list) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2698C28))(0, list);
	}
	template <typename T = bool> static T IsFixedSize(void* list) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2698D30))(0, list);
	}

};

}
