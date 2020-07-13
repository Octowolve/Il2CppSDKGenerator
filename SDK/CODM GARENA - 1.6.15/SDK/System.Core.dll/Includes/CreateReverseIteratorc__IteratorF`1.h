#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateReverseIteratorcIteratorF1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateReverseIterator>c__IteratorF`1"));
	}

	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& list__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $source() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTSource_get_Current() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B71C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B724))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B72C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTSource_GetEnumerator() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B760))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B7FC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B9F0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateReverseIteratorcIteratorF1*))(Il2CppBase() + 0x520B9FC))(this);
	}

};

}
