#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoCoroutined1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "<DoCoroutine>d__1"));
	}

	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& routine() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DoCoroutined1*))(Il2CppBase() + 0x5140934))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DoCoroutined1*))(Il2CppBase() + 0x5140BA8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DoCoroutined1*))(Il2CppBase() + 0x5140BB0))(this);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DoCoroutined1*))(Il2CppBase() + 0x5140C44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DoCoroutined1*))(Il2CppBase() + 0x5140C48))(this);
	}

};

}
