#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExecuteFilterd12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<ExecuteFilter>d__12"));
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
	template <typename T = void*> T& current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& 3__current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& a5__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& stepCount5__3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& stopIndex5__4() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& positiveStep5__5() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& errorWhenNoMatch() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& 3__errorWhenNoMatch() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> T& t5__6() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3962FC4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x39630CC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3962FDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorNewtonsoft_Json_Linq_JToken_get_Current() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3963DD8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3963DE0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3963E74))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableNewtonsoft_Json_Linq_JToken_GetEnumerator() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3963E7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ExecuteFilterd12*))(Il2CppBase() + 0x3963FB4))(this);
	}

};

}
