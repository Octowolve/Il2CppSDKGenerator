#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeBodyColorcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FadeBodyColor>c__Iterator0"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& meshRenderers__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& currentEmissionColor__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& destColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeBodyColorcIterator0*))(Il2CppBase() + 0x3EB780C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeBodyColorcIterator0*))(Il2CppBase() + 0x3EB7D20))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeBodyColorcIterator0*))(Il2CppBase() + 0x3EB7D28))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeBodyColorcIterator0*))(Il2CppBase() + 0x3EB7D30))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeBodyColorcIterator0*))(Il2CppBase() + 0x3EB7D44))(this);
	}

};

}
