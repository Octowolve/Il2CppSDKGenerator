#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class SortedDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "SortedDictionary`2"));
	}

	template <typename T = uintptr_t> T& tree() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& hlp() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IDictionaryTKey,TValue_get_Keys() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x188821C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IDictionaryTKey,TValue_get_Values() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888270))(this);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Add(void* item) {
		return ((T (*)(SortedDictionary2*, void*))(Il2CppBase() + 0x18882C4))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Contains(void* item) {
		return ((T (*)(SortedDictionary2*, void*))(Il2CppBase() + 0x1888348))(this, item);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_get_IsReadOnly() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x188847C))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Remove(void* item) {
		return ((T (*)(SortedDictionary2*, void*))(Il2CppBase() + 0x1888484))(this, item);
	}
	template <typename T = void> T System_Collections_IDictionary_Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18885F4))(this, key, value);
	}
	template <typename T = bool> T System_Collections_IDictionary_Contains(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1888678))(this, key);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_GetEnumerator() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x18886D4))(this);
	}
	template <typename T = bool> T System_Collections_IDictionary_get_IsReadOnly() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888740))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Keys() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888748))(this);
	}
	template <typename T = void> T System_Collections_IDictionary_Remove(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x188879C))(this, key);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Values() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x18887F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Item(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x188884C))(this, key);
	}
	template <typename T = void> T System_Collections_IDictionary_set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18888A8))(this, key, value);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(SortedDictionary2*, uintptr_t, int32_t))(Il2CppBase() + 0x188892C))(this, array, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888CD4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888CDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888CE0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Collections_Generic_KeyValuePairTKey,TValue_GetEnumerator() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888D4C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1888DB8))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1888DE4))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1888EE4))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x1889008))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x188905C))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SortedDictionary2*))(Il2CppBase() + 0x18891E8))(this);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1889214))(this, key);
	}
	template <typename T = bool> T ContainsValue(uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1889254))(this, value);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(SortedDictionary2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x18895A4))(this, array, arrayIndex);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1889914))(this, key);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(SortedDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1889954))(this, key, value);
	}
	template <typename T = uintptr_t> T ToKey(uintptr_t key) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1889A9C))(this, key);
	}
	template <typename T = uintptr_t> T ToValue(uintptr_t value) {
		return ((T (*)(SortedDictionary2*, uintptr_t))(Il2CppBase() + 0x1889CA0))(this, value);
	}

};

}
