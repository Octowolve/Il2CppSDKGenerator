#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedActivatecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedActivate>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& param__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& timeToWait__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayedActivatecIterator0*))(Il2CppBase() + 0x49AFFD4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayedActivatecIterator0*))(Il2CppBase() + 0x49B01B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayedActivatecIterator0*))(Il2CppBase() + 0x49B01B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayedActivatecIterator0*))(Il2CppBase() + 0x49B01C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayedActivatecIterator0*))(Il2CppBase() + 0x49B01D4))(this);
	}

};

}
