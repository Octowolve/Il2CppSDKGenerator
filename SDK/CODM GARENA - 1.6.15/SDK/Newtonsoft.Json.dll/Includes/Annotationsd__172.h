#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Annotationsd172
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<Annotations>d__172"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& 3__type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& annotations5__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973B84))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973B88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973DB8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973DC0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973E54))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Object_GetEnumerator() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973E5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Annotationsd172*))(Il2CppBase() + 0x3973F8C))(this);
	}

};

}
