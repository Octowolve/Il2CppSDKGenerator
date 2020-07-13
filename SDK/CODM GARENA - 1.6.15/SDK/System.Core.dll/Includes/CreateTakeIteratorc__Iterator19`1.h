#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateTakeIteratorcIterator191
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateTakeIterator>c__Iterator19`1"));
	}

	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& counter__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $s_113__1() {
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
	template <typename T = int32_t> T& $count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& $source() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorTSource_get_Current() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8AD4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8ADC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8AE4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTSource_GetEnumerator() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8B18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8BBC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C8F50))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateTakeIteratorcIterator191*))(Il2CppBase() + 0x49C9050))(this);
	}

};

}
