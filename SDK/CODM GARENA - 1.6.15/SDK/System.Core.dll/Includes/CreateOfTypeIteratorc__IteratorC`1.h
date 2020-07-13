#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateOfTypeIteratorcIteratorC1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateOfTypeIterator>c__IteratorC`1"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $s_90__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& element__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $source() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTResult_get_Current() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520AFB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520AFB8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520AFC0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTResult_GetEnumerator() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520AFF4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520B090))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520B544))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateOfTypeIteratorcIteratorC1*))(Il2CppBase() + 0x520B660))(this);
	}

};

}
