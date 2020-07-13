#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeToTargetAlphacIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FadeToTargetAlpha>c__Iterator0"));
	}

	template <typename T = float> T& currentAlpha1__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& currentAlpha2__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& currentAlpha3__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lerpRatio__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& alpha1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& alpha2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& alpha3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeToTargetAlphacIterator0*))(Il2CppBase() + 0x4A8B254))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeToTargetAlphacIterator0*))(Il2CppBase() + 0x4A8B850))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeToTargetAlphacIterator0*))(Il2CppBase() + 0x4A8B858))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeToTargetAlphacIterator0*))(Il2CppBase() + 0x4A8B860))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeToTargetAlphacIterator0*))(Il2CppBase() + 0x4A8B874))(this);
	}

};

}
