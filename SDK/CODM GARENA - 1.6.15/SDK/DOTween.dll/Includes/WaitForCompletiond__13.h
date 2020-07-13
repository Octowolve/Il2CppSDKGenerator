#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForCompletiond13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<WaitForCompletion>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitForCompletiond13*))(Il2CppBase() + 0x449EB3C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForCompletiond13*))(Il2CppBase() + 0x449EB40))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForCompletiond13*))(Il2CppBase() + 0x449EBA8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForCompletiond13*))(Il2CppBase() + 0x449EBB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForCompletiond13*))(Il2CppBase() + 0x449EC44))(this);
	}

};

}
