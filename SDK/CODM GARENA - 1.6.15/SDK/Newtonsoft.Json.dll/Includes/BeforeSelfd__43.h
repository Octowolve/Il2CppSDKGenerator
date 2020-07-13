#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeforeSelfd43
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<BeforeSelf>d__43"));
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
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x3974068))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x397406C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x3974120))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x3974128))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x39741BC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x39741C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(BeforeSelfd43*))(Il2CppBase() + 0x39742EC))(this);
	}

};

}
