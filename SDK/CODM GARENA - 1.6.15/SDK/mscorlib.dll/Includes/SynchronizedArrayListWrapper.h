#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SynchronizedArrayListWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "SynchronizedArrayListWrapper"));
	}

	template <typename T = uintptr_t> T& m_SyncRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t))(Il2CppBase() + 0x3633D70))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3633E20))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3633ECC))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3633F74))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t))(Il2CppBase() + 0x363401C))(this, value);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x36340C0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634168))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634210))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634218))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3634220))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x36342D0))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x363436C))(this, value);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x363441C))(this, value);
	}
	template <typename T = int32_t> T IndexOf_1(uintptr_t value, int32_t startIndex) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x36344CC))(this, value, startIndex);
	}
	template <typename T = int32_t> T IndexOf_2(uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3634584))(this, value, startIndex, count);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3634650))(this, index, value);
	}
	template <typename T = void> T InsertRange(int32_t index, uintptr_t c) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x36346FC))(this, index, c);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x36347A8))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t))(Il2CppBase() + 0x363484C))(this, index);
	}
	template <typename T = void> T CopyTo(uintptr_t array) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x36348F0))(this, array);
	}
	template <typename T = void> T CopyTo_1(uintptr_t array, int32_t index) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x3634994))(this, array, index);
	}
	template <typename T = void> T CopyTo_2(int32_t index, uintptr_t array, int32_t arrayIndex, int32_t count) {
		return ((T (*)(SynchronizedArrayListWrapper*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3634A40))(this, index, array, arrayIndex, count);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634B10))(this);
	}
	template <typename T = void> T AddRange(uintptr_t c) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3634BB8))(this, c);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634C5C))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634D04))(this);
	}
	template <typename T = void> T Sort_1(uintptr_t comparer) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3634DA0))(this, comparer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(SynchronizedArrayListWrapper*))(Il2CppBase() + 0x3634E44))(this);
	}
	template <typename T = uintptr_t> T ToArray_1(uintptr_t elementType) {
		return ((T (*)(SynchronizedArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3634EEC))(this, elementType);
	}

};

}
