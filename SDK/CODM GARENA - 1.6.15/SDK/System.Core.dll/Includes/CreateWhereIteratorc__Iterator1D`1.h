#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateWhereIteratorcIterator1D1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateWhereIterator>c__Iterator1D`1"));
	}

	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $s_120__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& element__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& predicate() {
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
	template <typename T = void*> T& $predicate() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTSource_get_Current() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CB990))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CB998))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CB9A0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTSource_GetEnumerator() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CB9D4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CBA78))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CBDFC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateWhereIteratorcIterator1D1*))(Il2CppBase() + 0x49CBEFC))(this);
	}

};

}
