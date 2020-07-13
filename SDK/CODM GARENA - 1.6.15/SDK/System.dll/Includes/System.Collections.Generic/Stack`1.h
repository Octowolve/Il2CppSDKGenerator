#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class Stack1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "Stack`1"));
	}

	template <typename T = int32_t> static T& INITIAL_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188CE90))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188CE98))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t dest, int32_t idx) {
		return ((T (*)(Stack1*, uintptr_t, int32_t))(Il2CppBase() + 0x188CE9C))(this, dest, idx);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D018))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D090))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D108))(this);
	}
	template <typename T = bool> T Contains(uintptr_t t) {
		return ((T (*)(Stack1*, uintptr_t))(Il2CppBase() + 0x188D158))(this, t);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D1B8))(this);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D298))(this);
	}
	template <typename T = void> T Push(uintptr_t t) {
		return ((T (*)(Stack1*, uintptr_t))(Il2CppBase() + 0x188D41C))(this, t);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D4BC))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(Stack1*))(Il2CppBase() + 0x188D4C4))(this);
	}

};

}
