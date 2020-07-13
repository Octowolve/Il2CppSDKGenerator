#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDescendantsd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<GetDescendants>d__29"));
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
	template <typename T = bool> T& self() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& 3__self() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& o5__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C70B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7300))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7210))(this);
	}
	template <typename T = void> T m__Finally2() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7120))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7884))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C788C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7920))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7928))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetDescendantsd29*))(Il2CppBase() + 0x40C7A58))(this);
	}

};

}
