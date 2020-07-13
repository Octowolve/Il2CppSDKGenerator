#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayHideDissipatingcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayHideDissipating>c__Iterator1"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
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
		return ((T (*)(DelayHideDissipatingcIterator1*))(Il2CppBase() + 0x27DB864))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DelayHideDissipatingcIterator1*))(Il2CppBase() + 0x27DB990))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayHideDissipatingcIterator1*))(Il2CppBase() + 0x27DB998))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DelayHideDissipatingcIterator1*))(Il2CppBase() + 0x27DB9A0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DelayHideDissipatingcIterator1*))(Il2CppBase() + 0x27DB9B4))(this);
	}

};

}
