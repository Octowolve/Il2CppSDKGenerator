#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForStartd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<WaitForStart>d__18"));
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
		return ((T (*)(WaitForStartd18*))(Il2CppBase() + 0x449F0B8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForStartd18*))(Il2CppBase() + 0x449F0BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForStartd18*))(Il2CppBase() + 0x449F124))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForStartd18*))(Il2CppBase() + 0x449F12C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForStartd18*))(Il2CppBase() + 0x449F1C0))(this);
	}

};

}
