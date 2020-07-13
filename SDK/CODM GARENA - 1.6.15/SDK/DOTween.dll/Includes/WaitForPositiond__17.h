#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForPositiond17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<WaitForPosition>d__17"));
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
	template <typename T = float> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitForPositiond17*))(Il2CppBase() + 0x449EE5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForPositiond17*))(Il2CppBase() + 0x449EE60))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForPositiond17*))(Il2CppBase() + 0x449EEE0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForPositiond17*))(Il2CppBase() + 0x449EEE8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForPositiond17*))(Il2CppBase() + 0x449EF7C))(this);
	}

};

}
