#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class Queue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "Queue"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _head() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _tail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _growFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E3BC))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E3C4))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E3CC))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Queue*, uintptr_t, int32_t))(Il2CppBase() + 0x363E3D0))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E5C4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E694))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E794))(this);
	}
	template <typename T = uintptr_t> T Dequeue() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363E828))(this);
	}
	template <typename T = void> T Enqueue(uintptr_t obj) {
		return ((T (*)(Queue*, uintptr_t))(Il2CppBase() + 0x363E97C))(this, obj);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363EB50))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363EC30))(this);
	}
	template <typename T = void> T grow() {
		return ((T (*)(Queue*))(Il2CppBase() + 0x363EA4C))(this);
	}

};

}
