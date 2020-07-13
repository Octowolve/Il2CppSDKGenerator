#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateCastIteratorcIterator01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "<CreateCastIterator>c__Iterator0`1"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $s_59__0() {
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
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206710))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206718))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206720))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableTResult_GetEnumerator() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206754))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x52067F0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206C78))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CreateCastIteratorcIterator01*))(Il2CppBase() + 0x5206D94))(this);
	}

};

}
