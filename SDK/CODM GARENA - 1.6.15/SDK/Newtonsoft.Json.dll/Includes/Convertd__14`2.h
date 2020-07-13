#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Convertd142
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<Convert>d__14`2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 3__source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5F794))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5F7BC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FAFC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorU_get_Current() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FBEC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FBF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FC88))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableU_GetEnumerator() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FC90))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Convertd142*))(Il2CppBase() + 0x4B5FDCC))(this);
	}

};

}
