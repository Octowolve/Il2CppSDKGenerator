#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BetterList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BetterList`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x47239C0))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t i) {
		return ((T (*)(BetterList1*, int32_t))(Il2CppBase() + 0x4723A24))(this, i);
	}
	template <typename T = void> T set_Item(int32_t i, uintptr_t value) {
		return ((T (*)(BetterList1*, int32_t, uintptr_t))(Il2CppBase() + 0x4723A68))(this, i, value);
	}
	template <typename T = void> T AllocateMore() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x4723AB0))(this);
	}
	template <typename T = void> T Trim() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x4723BF4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x4723CE0))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x4723CEC))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(BetterList1*, uintptr_t))(Il2CppBase() + 0x4723CF8))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(BetterList1*, int32_t, uintptr_t))(Il2CppBase() + 0x4723D88))(this, index, item);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(BetterList1*, uintptr_t))(Il2CppBase() + 0x4723EB4))(this, item);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(BetterList1*, uintptr_t))(Il2CppBase() + 0x4723F7C))(this, item);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(BetterList1*, uintptr_t))(Il2CppBase() + 0x4724040))(this, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(BetterList1*, int32_t))(Il2CppBase() + 0x4724270))(this, index);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x47243AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(BetterList1*))(Il2CppBase() + 0x4724530))(this);
	}
	template <typename T = void> T Sort(void* comparer) {
		return ((T (*)(BetterList1*, void*))(Il2CppBase() + 0x4724570))(this, comparer);
	}

};

}
