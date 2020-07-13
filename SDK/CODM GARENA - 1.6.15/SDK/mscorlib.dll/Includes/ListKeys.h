#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListKeys
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ListKeys"));
	}

	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x36427DC))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x3642810))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x3642844))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(ListKeys*, uintptr_t, int32_t))(Il2CppBase() + 0x3642878))(this, array, arrayIndex);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x36428AC))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x36428B4))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ListKeys*, int32_t))(Il2CppBase() + 0x36428BC))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ListKeys*, int32_t, uintptr_t))(Il2CppBase() + 0x36428F0))(this, index, value);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(ListKeys*, uintptr_t))(Il2CppBase() + 0x3642998))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x3642A40))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(ListKeys*, uintptr_t))(Il2CppBase() + 0x3642AE8))(this, key);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t key) {
		return ((T (*)(ListKeys*, uintptr_t))(Il2CppBase() + 0x3642B1C))(this, key);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(ListKeys*, int32_t, uintptr_t))(Il2CppBase() + 0x3642B50))(this, index, value);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(ListKeys*, uintptr_t))(Il2CppBase() + 0x3642BF8))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ListKeys*, int32_t))(Il2CppBase() + 0x3642CA0))(this, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ListKeys*))(Il2CppBase() + 0x3642D48))(this);
	}

};

}
