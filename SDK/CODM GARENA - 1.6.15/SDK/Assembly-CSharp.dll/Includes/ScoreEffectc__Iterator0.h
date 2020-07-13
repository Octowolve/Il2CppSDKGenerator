#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoreEffectcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScoreEffect>c__Iterator0"));
	}

	template <typename T = float> T& time__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& scale__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& totalTime__0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxTime__0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& scale_Normal__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& scale_Max__0() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ScoreEffectcIterator0*))(Il2CppBase() + 0x401AA5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ScoreEffectcIterator0*))(Il2CppBase() + 0x401AC6C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ScoreEffectcIterator0*))(Il2CppBase() + 0x401AC74))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ScoreEffectcIterator0*))(Il2CppBase() + 0x401AC7C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ScoreEffectcIterator0*))(Il2CppBase() + 0x401AC90))(this);
	}

};

}
