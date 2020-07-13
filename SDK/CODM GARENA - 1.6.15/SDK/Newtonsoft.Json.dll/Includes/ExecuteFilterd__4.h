#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExecuteFilterd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<ExecuteFilter>d__4"));
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
	template <typename T = void*> T& current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& 3__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& root5__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& value5__2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x39679E4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x3967AFC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x3967A0C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x39680B4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x39680BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x3968150))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x3968158))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ExecuteFilterd4*))(Il2CppBase() + 0x3968288))(this);
	}

};

}
