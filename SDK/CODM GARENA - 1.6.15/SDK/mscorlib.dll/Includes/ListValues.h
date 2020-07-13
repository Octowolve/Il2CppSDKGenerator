#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListValues
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ListValues"));
	}

	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3642DE0))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3642E14))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3642E48))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(ListValues*, uintptr_t, int32_t))(Il2CppBase() + 0x3642E7C))(this, array, arrayIndex);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3642EB0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3642EB8))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ListValues*, int32_t))(Il2CppBase() + 0x3642EC0))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ListValues*, int32_t, uintptr_t))(Il2CppBase() + 0x3642EF4))(this, index, value);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(ListValues*, uintptr_t))(Il2CppBase() + 0x3642F9C))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x3643044))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(ListValues*, uintptr_t))(Il2CppBase() + 0x36430EC))(this, value);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(ListValues*, uintptr_t))(Il2CppBase() + 0x3643120))(this, value);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(ListValues*, int32_t, uintptr_t))(Il2CppBase() + 0x3643154))(this, index, value);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(ListValues*, uintptr_t))(Il2CppBase() + 0x36431FC))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ListValues*, int32_t))(Il2CppBase() + 0x36432A4))(this, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ListValues*))(Il2CppBase() + 0x364334C))(this);
	}

};

}
