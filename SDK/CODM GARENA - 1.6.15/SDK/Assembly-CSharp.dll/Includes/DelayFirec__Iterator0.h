#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayFirecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayFire>c__Iterator0"));
	}

	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ballIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& dir__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayFirecIterator0*))(Il2CppBase() + 0x49B9A80))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayFirecIterator0*))(Il2CppBase() + 0x49B9C34))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayFirecIterator0*))(Il2CppBase() + 0x49B9C3C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayFirecIterator0*))(Il2CppBase() + 0x49B9C44))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayFirecIterator0*))(Il2CppBase() + 0x49B9C58))(this);
	}

};

}
