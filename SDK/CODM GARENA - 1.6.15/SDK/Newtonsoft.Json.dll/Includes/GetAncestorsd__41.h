#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAncestorsd41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<GetAncestors>d__41"));
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
	template <typename T = uintptr_t> T& current5__1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x39743C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x39743CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x3974464))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x397446C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x3974500))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x3974508))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetAncestorsd41*))(Il2CppBase() + 0x3974638))(this);
	}

};

}
