#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayDelaycIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayDelay>c__Iterator0"));
	}

	template <typename T = float> T& t__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& delay() {
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
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayDelaycIterator0*))(Il2CppBase() + 0x390701C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayDelaycIterator0*))(Il2CppBase() + 0x3907334))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayDelaycIterator0*))(Il2CppBase() + 0x390733C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayDelaycIterator0*))(Il2CppBase() + 0x3907344))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayDelaycIterator0*))(Il2CppBase() + 0x3907358))(this);
	}
	template <typename T = bool> static T m__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39073EC))(0, x);
	}

};

}
