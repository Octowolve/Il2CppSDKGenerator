#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReleaseJumppingLogiccIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReleaseJumppingLogic>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ReleaseJumppingLogiccIterator0*))(Il2CppBase() + 0x4B02910))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ReleaseJumppingLogiccIterator0*))(Il2CppBase() + 0x4B02A0C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReleaseJumppingLogiccIterator0*))(Il2CppBase() + 0x4B02A14))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ReleaseJumppingLogiccIterator0*))(Il2CppBase() + 0x4B02A1C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ReleaseJumppingLogiccIterator0*))(Il2CppBase() + 0x4B02A30))(this);
	}

};

}
