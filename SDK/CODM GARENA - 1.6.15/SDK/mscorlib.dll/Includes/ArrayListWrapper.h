#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrayListWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ArrayListWrapper"));
	}

	template <typename T = uintptr_t> T& m_InnerArrayList() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ArrayListWrapper*, int32_t))(Il2CppBase() + 0x363291C))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3632950))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632984))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x36329B8))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(ArrayListWrapper*, int32_t))(Il2CppBase() + 0x36329EC))(this, value);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632A20))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632A54))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632A88))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632ABC))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632AF0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632B24))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632B58))(this, value);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632B8C))(this, value);
	}
	template <typename T = int32_t> T IndexOf_1(uintptr_t value, int32_t startIndex) {
		return ((T (*)(ArrayListWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x3632BC0))(this, value, startIndex);
	}
	template <typename T = int32_t> T IndexOf_2(uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(ArrayListWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3632BF4))(this, value, startIndex, count);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3632C34))(this, index, value);
	}
	template <typename T = void> T InsertRange(int32_t index, uintptr_t c) {
		return ((T (*)(ArrayListWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x3632C68))(this, index, c);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632C9C))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ArrayListWrapper*, int32_t))(Il2CppBase() + 0x3632CD0))(this, index);
	}
	template <typename T = void> T CopyTo(uintptr_t array) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632D04))(this, array);
	}
	template <typename T = void> T CopyTo_1(uintptr_t array, int32_t index) {
		return ((T (*)(ArrayListWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x3632D38))(this, array, index);
	}
	template <typename T = void> T CopyTo_2(int32_t index, uintptr_t array, int32_t arrayIndex, int32_t count) {
		return ((T (*)(ArrayListWrapper*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3632D6C))(this, index, array, arrayIndex, count);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632DB4))(this);
	}
	template <typename T = void> T AddRange(uintptr_t c) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632DE8))(this, c);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632E1C))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632E50))(this);
	}
	template <typename T = void> T Sort_1(uintptr_t comparer) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632E84))(this, comparer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(ArrayListWrapper*))(Il2CppBase() + 0x3632EB8))(this);
	}
	template <typename T = uintptr_t> T ToArray_1(uintptr_t elementType) {
		return ((T (*)(ArrayListWrapper*, uintptr_t))(Il2CppBase() + 0x3632EEC))(this, elementType);
	}

};

}
