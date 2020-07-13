#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class ListDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "ListDictionary"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& comparer() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9AC08))(this);
	}
	template <typename T = uintptr_t> T FindEntry(uintptr_t key) {
		return ((T (*)(ListDictionary*, uintptr_t))(Il2CppBase() + 0x4C9ACEC))(this, key);
	}
	template <typename T = uintptr_t> T FindEntry_1(uintptr_t key, uintptr_t* prev) {
		return ((T (*)(ListDictionary*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4C9AEDC))(this, key, prev);
	}
	template <typename T = void> T AddImpl(uintptr_t key, uintptr_t value, uintptr_t prev) {
		return ((T (*)(ListDictionary*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9B0E8))(this, key, value, prev);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B224))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B22C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B234))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(ListDictionary*, uintptr_t, int32_t))(Il2CppBase() + 0x4C9B238))(this, array, index);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B730))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(ListDictionary*, uintptr_t))(Il2CppBase() + 0x4C9B738))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(ListDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9B758))(this, key, value);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B7B0))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B874))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(ListDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9B910))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9ABC8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(ListDictionary*, uintptr_t))(Il2CppBase() + 0x4C9BA14))(this, key);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ListDictionary*))(Il2CppBase() + 0x4C9B6A0))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(ListDictionary*, uintptr_t))(Il2CppBase() + 0x4C9BA2C))(this, key);
	}

};

}
