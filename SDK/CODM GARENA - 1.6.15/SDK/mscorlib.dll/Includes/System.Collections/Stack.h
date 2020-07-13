#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class Stack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "Stack"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& contents() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& modCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Resize(int32_t ncapacity) {
		return ((T (*)(Stack*, int32_t))(Il2CppBase() + 0x3643BC4))(this, ncapacity);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3643C94))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3643C9C))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3643CA4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3643CA8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3643D2C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t obj) {
		return ((T (*)(Stack*, uintptr_t))(Il2CppBase() + 0x3643DE0))(this, obj);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Stack*, uintptr_t, int32_t))(Il2CppBase() + 0x3643EDC))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x36440BC))(this);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x364418C))(this);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3644268))(this);
	}
	template <typename T = void> T Push(uintptr_t obj) {
		return ((T (*)(Stack*, uintptr_t))(Il2CppBase() + 0x36443D4))(this, obj);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(Stack*))(Il2CppBase() + 0x3644484))(this);
	}

};

}
