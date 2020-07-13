#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class SortedList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "SortedList"));
	}

	template <typename T = int32_t> static T& INITIAL_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& inUse() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& modificationCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& comparer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& defaultCapacity() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FA44))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB3C))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB44))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB4C))(this);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB50))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB58))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FB60))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x363FCA0))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x363FDE0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363FEE8))(this, key, value);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x3640930))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(SortedList*, int32_t))(Il2CppBase() + 0x3640954))(this, value);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(SortedList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3640AF0))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x3640B0C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x3640C0C))(this, key);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x3640D94))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x3640E28))(this, key);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(SortedList*, uintptr_t, int32_t))(Il2CppBase() + 0x3640E6C))(this, array, arrayIndex);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SortedList*))(Il2CppBase() + 0x36411E0))(this);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(SortedList*, int32_t))(Il2CppBase() + 0x3641290))(this, index);
	}
	template <typename T = int32_t> T IndexOfKey(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x36413FC))(this, key);
	}
	template <typename T = int32_t> T IndexOfValue(uintptr_t value) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x3641578))(this, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x3641608))(this, key);
	}
	template <typename T = bool> T ContainsValue(uintptr_t value) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x364178C))(this, value);
	}
	template <typename T = uintptr_t> T GetByIndex(int32_t index) {
		return ((T (*)(SortedList*, int32_t))(Il2CppBase() + 0x36417B8))(this, index);
	}
	template <typename T = uintptr_t> T GetKey(int32_t index) {
		return ((T (*)(SortedList*, int32_t))(Il2CppBase() + 0x36418C0))(this, index);
	}
	template <typename T = void> T EnsureCapacity(int32_t n, int32_t free) {
		return ((T (*)(SortedList*, int32_t, int32_t))(Il2CppBase() + 0x36419C8))(this, n, free);
	}
	template <typename T = void> T PutImpl(uintptr_t key, uintptr_t value, bool overwrite) {
		return ((T (*)(SortedList*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3640274))(this, key, value, overwrite);
	}
	template <typename T = uintptr_t> T GetImpl(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x363FE90))(this, key);
	}
	template <typename T = void> T InitTable(int32_t capacity, bool forceSize) {
		return ((T (*)(SortedList*, int32_t, bool))(Il2CppBase() + 0x363F49C))(this, capacity, forceSize);
	}
	template <typename T = void> T CopyToArray(uintptr_t arr, int32_t i, uintptr_t mode) {
		return ((T (*)(SortedList*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3641B94))(this, arr, i, mode);
	}
	template <typename T = int32_t> T Find(uintptr_t key) {
		return ((T (*)(SortedList*, uintptr_t))(Il2CppBase() + 0x3640068))(this, key);
	}

};

}
