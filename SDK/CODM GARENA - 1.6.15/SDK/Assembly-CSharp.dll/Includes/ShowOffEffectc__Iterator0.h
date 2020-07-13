#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowOffEffectcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowOffEffect>c__Iterator0"));
	}

	template <typename T = float> T& showTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& s() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowOffEffectcIterator0*))(Il2CppBase() + 0x35C848C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ShowOffEffectcIterator0*))(Il2CppBase() + 0x35C85D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowOffEffectcIterator0*))(Il2CppBase() + 0x35C85DC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ShowOffEffectcIterator0*))(Il2CppBase() + 0x35C85E4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShowOffEffectcIterator0*))(Il2CppBase() + 0x35C85F8))(this);
	}

};

}
