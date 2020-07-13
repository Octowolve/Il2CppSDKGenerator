#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class Dictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "Dictionary`2"));
	}

	template <typename T = int32_t> static T& INITIAL_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DEFAULT_LOAD_FACTOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NO_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HASH_FLAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& linkSlots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& keySlots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& valueSlots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& touchedSlots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& emptySlot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& threshold() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& hcp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& serialization_info() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& generation() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> static T& f__am$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IDictionaryTKey,TValue_get_Keys() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FCE34))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IDictionaryTKey,TValue_get_Values() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FCE68))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Keys() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FCE9C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Values() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FCED0))(this);
	}
	template <typename T = bool> T System_Collections_IDictionary_get_IsReadOnly() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FCF04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Item(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FCF0C))(this, key);
	}
	template <typename T = void> T System_Collections_IDictionary_set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FCFE8))(this, key, value);
	}
	template <typename T = void> T System_Collections_IDictionary_Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FD06C))(this, key, value);
	}
	template <typename T = bool> T System_Collections_IDictionary_Contains(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FD0F0))(this, key);
	}
	template <typename T = void> T System_Collections_IDictionary_Remove(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FD234))(this, key);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD378))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD380))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_get_IsReadOnly() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD384))(this);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Add(void* keyValuePair) {
		return ((T (*)(Dictionary2*, void*))(Il2CppBase() + 0x12FD38C))(this, keyValuePair);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Contains(void* keyValuePair) {
		return ((T (*)(Dictionary2*, void*))(Il2CppBase() + 0x12FD410))(this, keyValuePair);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(Dictionary2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x12FD444))(this, array, index);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairTKey,TValue_Remove(void* keyValuePair) {
		return ((T (*)(Dictionary2*, void*))(Il2CppBase() + 0x12FD478))(this, keyValuePair);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Dictionary2*, uintptr_t, int32_t))(Il2CppBase() + 0x12FD504))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD764))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Collections_Generic_KeyValuePairTKey,TValue_GetEnumerator() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD7DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_GetEnumerator() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD854))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FD8A8))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FD8B0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FDBDC))(this, key, value);
	}
	template <typename T = void> T Init(int32_t capacity, void* hcp) {
		return ((T (*)(Dictionary2*, int32_t, void*))(Il2CppBase() + 0x12FE174))(this, capacity, hcp);
	}
	template <typename T = void> T InitArrays(int32_t size) {
		return ((T (*)(Dictionary2*, int32_t))(Il2CppBase() + 0x12FE318))(this, size);
	}
	template <typename T = void> T CopyToCheck(uintptr_t array, int32_t index) {
		return ((T (*)(Dictionary2*, uintptr_t, int32_t))(Il2CppBase() + 0x12FE494))(this, array, index);
	}
	template <typename T = void> T Do_CopyTo(Il2CppArray<uintptr_t>* array, int32_t index, void* transform) {
		return ((T (*)(Dictionary2*, Il2CppArray<uintptr_t>*, int32_t, void*))(Il2CppBase() + 0x27FC4F0))(this, array, index, transform);
	}
	template <typename T = void*> static T make_pair(uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FE66C))(0, key, value);
	}
	template <typename T = uintptr_t> static T pick_key(uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FE6B8))(0, key, value);
	}
	template <typename T = uintptr_t> static T pick_value(uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FE6C0))(0, key, value);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(Dictionary2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x12FE6C8))(this, array, index);
	}
	template <typename T = void> T Do_ICollectionCopyTo(uintptr_t array, int32_t index, void* transform) {
		return ((T (*)(Dictionary2*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x27FC960))(this, array, index, transform);
	}
	template <typename T = void> T Resize() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FE78C))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FEB88))(this, key, value);
	}
	template <typename T = void*> T get_Comparer() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FF058))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x12FF060))(this);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FF12C))(this, key);
	}
	template <typename T = bool> T ContainsValue(uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FF410))(this, value);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FF600))(this, info, context);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FF7CC))(this, sender);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x12FFAA4))(this, key);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(Dictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12FFFB0))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x130032C))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x1300380))(this);
	}
	template <typename T = uintptr_t> T ToTKey(uintptr_t key) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x13003D4))(this, key);
	}
	template <typename T = uintptr_t> T ToTValue(uintptr_t value) {
		return ((T (*)(Dictionary2*, uintptr_t))(Il2CppBase() + 0x13005FC))(this, value);
	}
	template <typename T = bool> T ContainsKeyValuePair(void* pair) {
		return ((T (*)(Dictionary2*, void*))(Il2CppBase() + 0x13008A8))(this, pair);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Dictionary2*))(Il2CppBase() + 0x13009DC))(this);
	}
	template <typename T = uintptr_t> static T CopyTom__0(uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1300A08))(0, key, value);
	}

};

}
