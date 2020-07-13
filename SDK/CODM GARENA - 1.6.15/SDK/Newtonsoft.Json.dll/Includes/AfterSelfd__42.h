#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AfterSelfd42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<AfterSelf>d__42"));
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
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& o5__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x3973840))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x3973844))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x39738DC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x39738E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x3973978))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x3973980))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(AfterSelfd42*))(Il2CppBase() + 0x3973AA8))(this);
	}

};

}
