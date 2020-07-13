#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateDistinctIteratorcIterator31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateDistinctIterator>c__Iterator3`1"));
	}

	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& items__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $s_65__1() {
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
	template <typename T = void*> T& $comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $source() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTSource_get_Current() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x520775C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x5207764))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x520776C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTSource_GetEnumerator() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x52077A0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x5207844))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x5207C50))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateDistinctIteratorcIterator31*))(Il2CppBase() + 0x5207D50))(this);
	}

};

}
