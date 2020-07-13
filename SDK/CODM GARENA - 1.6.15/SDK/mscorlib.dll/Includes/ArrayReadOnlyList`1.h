#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrayReadOnlyList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ArrayReadOnlyList`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& array() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ArrayReadOnlyList1*))(Il2CppBase() + 0x50BCC88))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ArrayReadOnlyList1*, int32_t))(Il2CppBase() + 0x50BCCBC))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ArrayReadOnlyList1*, int32_t, uintptr_t))(Il2CppBase() + 0x50BCD98))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArrayReadOnlyList1*))(Il2CppBase() + 0x50BCDC4))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ArrayReadOnlyList1*))(Il2CppBase() + 0x50BCDE8))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(ArrayReadOnlyList1*, uintptr_t))(Il2CppBase() + 0x50BCDF0))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ArrayReadOnlyList1*))(Il2CppBase() + 0x50BCE1C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(ArrayReadOnlyList1*, uintptr_t))(Il2CppBase() + 0x50BCE48))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(ArrayReadOnlyList1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x50BCE88))(this, array, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(ArrayReadOnlyList1*))(Il2CppBase() + 0x50BCEB4))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(ArrayReadOnlyList1*, uintptr_t))(Il2CppBase() + 0x50BCF18))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(ArrayReadOnlyList1*, int32_t, uintptr_t))(Il2CppBase() + 0x50BCF44))(this, index, item);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(ArrayReadOnlyList1*, uintptr_t))(Il2CppBase() + 0x50BCF70))(this, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ArrayReadOnlyList1*, int32_t))(Il2CppBase() + 0x50BCF9C))(this, index);
	}
	template <typename T = uintptr_t> static T ReadOnlyError() {
		return ((T (*)(void *))(Il2CppBase() + 0x50BCFC8))(0);
	}

};

}
