#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Annotationsd1711
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<Annotations>d__171`1"));
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
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& annotations5__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B60E08))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B60E0C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorT_get_Current() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B61018))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B61020))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B610B4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B610BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Annotationsd1711*))(Il2CppBase() + 0x4B611F8))(this);
	}

};

}
