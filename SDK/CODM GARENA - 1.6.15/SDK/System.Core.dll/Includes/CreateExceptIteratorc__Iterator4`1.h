#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateExceptIteratorcIterator41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateExceptIterator>c__Iterator4`1"));
	}

	template <typename T = void*> T& second() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& items__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& first() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $s_67__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& element__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $second() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $first() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTSource_get_Current() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208520))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208528))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208530))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTSource_GetEnumerator() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208564))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208610))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x52089D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateExceptIteratorcIterator41*))(Il2CppBase() + 0x5208AD8))(this);
	}

};

}
