#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SmoothActivatecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<SmoothActivate>c__Iterator0"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $locvar1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fader__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& $locvar2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $locvar3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(SmoothActivatecIterator0*))(Il2CppBase() + 0x38AA094))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SmoothActivatecIterator0*))(Il2CppBase() + 0x38AA310))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SmoothActivatecIterator0*))(Il2CppBase() + 0x38AA318))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SmoothActivatecIterator0*))(Il2CppBase() + 0x38AA320))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SmoothActivatecIterator0*))(Il2CppBase() + 0x38AA334))(this);
	}

};

}
