#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReachOutTransitioncIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReachOutTransition>c__Iterator0"));
	}

	template <typename T = float> T& t__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& callbackHandler() {
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
		return ((T (*)(ReachOutTransitioncIterator0*))(Il2CppBase() + 0x26503E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ReachOutTransitioncIterator0*))(Il2CppBase() + 0x2650598))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReachOutTransitioncIterator0*))(Il2CppBase() + 0x26505A0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ReachOutTransitioncIterator0*))(Il2CppBase() + 0x26505A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ReachOutTransitioncIterator0*))(Il2CppBase() + 0x26505BC))(this);
	}

};

}
