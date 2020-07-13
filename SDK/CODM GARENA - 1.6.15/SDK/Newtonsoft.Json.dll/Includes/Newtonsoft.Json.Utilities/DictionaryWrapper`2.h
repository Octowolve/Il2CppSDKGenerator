#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class DictionaryWrapper2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "DictionaryWrapper`2"));
	}

	template <typename T = uintptr_t> T& _dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _genericDictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _syncRoot() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B649DC))(this, key, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B64B88))(this, key);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B64CFC))(this);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B64EB4))(this, key);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B650D8))(this, key, value);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B653AC))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B65564))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B65714))(this, key, value);
	}
	template <typename T = void> T Add_1(void* item) {
		return ((T (*)(DictionaryWrapper2*, void*))(Il2CppBase() + 0x4B65890))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B65A94))(this);
	}
	template <typename T = bool> T Contains(void* item) {
		return ((T (*)(DictionaryWrapper2*, void*))(Il2CppBase() + 0x4B65C00))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(DictionaryWrapper2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4B65E00))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B662F0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B6644C))(this);
	}
	template <typename T = bool> T Remove_1(void* item) {
		return ((T (*)(DictionaryWrapper2*, void*))(Il2CppBase() + 0x4B665B8))(this, item);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B668F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B66BEC))(this);
	}
	template <typename T = void> T System_Collections_IDictionary_Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B66C20))(this, key, value);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Item(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B66E00))(this, key);
	}
	template <typename T = void> T System_Collections_IDictionary_set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B66FB0))(this, key, value);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_GetEnumerator() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67190))(this);
	}
	template <typename T = bool> T System_Collections_IDictionary_Contains(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B67358))(this, key);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Keys() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67504))(this);
	}
	template <typename T = void> T Remove_2(uintptr_t key) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t))(Il2CppBase() + 0x4B676A0))(this, key);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Values() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67850))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(DictionaryWrapper2*, uintptr_t, int32_t))(Il2CppBase() + 0x4B679EC))(this, array, index);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67BA0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67C8C))(this);
	}
	template <typename T = uintptr_t> T get_UnderlyingDictionary() {
		return ((T (*)(DictionaryWrapper2*))(Il2CppBase() + 0x4B67D4C))(this);
	}

};

}
