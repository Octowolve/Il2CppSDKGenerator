#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateSelectIteratorcIterator102
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateSelectIterator>c__Iterator10`2"));
	}

	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $s_91__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& element__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& selector() {
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
	template <typename T = void*> T& $selector() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTResult_get_Current() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520E680))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520E688))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520E690))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTResult_GetEnumerator() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520E6C4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520E768))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520EAD4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateSelectIteratorcIterator102*))(Il2CppBase() + 0x520EBD4))(this);
	}

};

}
