#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPositioncIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPosition>c__Iterator0"));
	}

	template <typename T = int32_t> T& width__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& height__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitPositioncIterator0*))(Il2CppBase() + 0x3C8AFA8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InitPositioncIterator0*))(Il2CppBase() + 0x3C8B33C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitPositioncIterator0*))(Il2CppBase() + 0x3C8B344))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InitPositioncIterator0*))(Il2CppBase() + 0x3C8B34C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InitPositioncIterator0*))(Il2CppBase() + 0x3C8B360))(this);
	}

};

}
