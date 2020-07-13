#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayAnimationcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayAnimation>c__Iterator0"));
	}

	template <typename T = float> T& curGridHeight__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isPlayAnim__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& key__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& item__2() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(PlayAnimationcIterator0*))(Il2CppBase() + 0x296525C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayAnimationcIterator0*))(Il2CppBase() + 0x2965A2C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayAnimationcIterator0*))(Il2CppBase() + 0x2965A34))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayAnimationcIterator0*))(Il2CppBase() + 0x2965A3C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayAnimationcIterator0*))(Il2CppBase() + 0x2965AE0))(this);
	}

};

}
